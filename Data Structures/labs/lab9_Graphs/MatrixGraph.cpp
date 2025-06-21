#pragma once
#include <iostream>

#include "MatrixGraph.h"
using namespace std;

template <typename T>
MatrixGraph<T>::MatrixGraph()
{
    cout << "------ Constructing MatrixGraph ------\n";
}

template <typename T>
bool MatrixGraph<T>::IsEmpty() const
{
    return adjMatrix.size() == 0;
}

template <typename T>
bool MatrixGraph<T>::AddVertex(const T &v)
{
    if (findKey(vertices, v) < 0)
    { // vertex does not already exist in graph
        // Add it to the list of vertices
        vertices.push_back(v);

        // Adjust the adjacency matrix accordingly
        // First, add a new column to existing rows
        for (auto row = adjMatrix.begin(); row != adjMatrix.end(); row++)
            row->push_back(0);
        // Second, add a new row
        vector<int> newRow;
        for (int i = 0; i < vertices.size(); i++)
            newRow.push_back(0);
        adjMatrix.push_back(newRow);

        return true;
    }
    return false;
}

template <typename T>
bool MatrixGraph<T>::RemoveVertex(const T &v)
{
    int index = findKey(vertices, v);
    if (index >= 0)
    { // vertex exists
        // First, delete it from list of vertices
        removeKey(vertices, v);

        // Second, adjust adjacency matrix accordingly
        removeColumn(adjMatrix, index);
        removeRow(adjMatrix, index);

        return true;
    }

    return false;
}

template <typename T>
bool MatrixGraph<T>::AddEdge(const T &fromV, const T &toV, int weight)
{
    int fromIndex = findKey(vertices, fromV);
    int toIndex = findKey(vertices, toV);

    if (fromIndex >= 0 && toIndex >= 0)
    {
        adjMatrix[fromIndex][toIndex] = weight;

        return true;
    }

    return false;
}

template <typename T>
void MatrixGraph<T>::RemoveEdge(const T &fromV, const T &toV)
{
    AddEdge(fromV, toV, 0);
}

template <typename T>
void MatrixGraph<T>::DisplayNeighbors(const T &fromV) const
{
    int i = findKey(vertices, fromV);
    if (i >= 0)
    {
        cout << "Neighbors of vertex " << fromV << " are : ";
        for (int j = 0; j < vertices.size(); j++)
        {
            if (adjMatrix[i][j] > 0)
                cout << vertices[j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
bool MatrixGraph<T>::EdgeExists(const T &fromV, const T &toV) const
{
    int fromIndex = findKey(vertices, fromV);
    int toIndex = findKey(vertices, toV);

    return (fromIndex >= 0 && toIndex >= 0 && adjMatrix[fromIndex][toIndex] > 0);
}

template <typename T>
bool MatrixGraph<T>::IsAdjacent(const T &v1, const T &v2) const
{
    return (EdgeExists(v1, v2) || EdgeExists(v2, v1));
}

template <typename T>
void MatrixGraph<T>::PrintGraph()
{
    int numVertices = vertices.size();

    cout << "\t\t";
    for (int i = 0; i < numVertices; i++)
        cout << vertices[i] << "\t";

    cout << endl;

    for (int i = 0; i < numVertices; i++)
        cout << "--------------";
    cout << endl;
    for (int i = 0; i < numVertices; i++)
    {
        cout << vertices[i] << "\t|\t";
        for (int j = 0; j < numVertices; j++)
        {
            cout << adjMatrix[i][j] << "\t";
        }
        cout << endl;
    }
}

template <typename T>
void MatrixGraph<T>::DFS(const T &startV) const
{
}

template <typename T>
void MatrixGraph<T>::BFS(const T &startV) const
{
    // I want to first find the index of the first or the starting vertex
    int startIndex = findKey(vertices, startV);

    if (startIndex < 0)
    {
        cout << " Vertex : " << startV << "Not found in this graph" << endl;
        return;
    }

    // a vector to track the visit vertexes
    vector<bool> visited(vertices.size(), false);

    // queue with vectors for BFS
    vector<int> queue;
    // enqueu the start vertex index
    // then mark it so I know it is visited
    queue.push_back(startIndex);
    visited[startIndex] = true;
    cout << "BFS traversal: ";

    // a loop to check the queue
    while (!queue.empty())
    {
        // dequeue the vertex to remove it from the front of the queue
        int current = queue.front();
        queue.erase(queue.begin());

        // Current vertex
        cout << vertices[current] << " ";

        // enqueue all the unvisited vertices
        for (int i = 0; i < num; i++)
        {
            if (adjMatrix[i] > 0 && !visited[i])
            {
                queue.push_back(i);
                visited[i] = true;
            }
        }
    }
}

template <typename T>
void MatrixGraph<T>::TopologicalSort() const
{
}

template <typename T>
MatrixGraph<T>::~MatrixGraph()
{
    cout << "~~~~~~ Destroying MatrixGraph ~~~~~~\n";
}

int main()
{
    MatrixGraph<std::string> graph;

    graph.AddVertex("A");
    graph.AddVertex("B");
    graph.AddVertex("C");
    graph.AddVertex("D");
    graph.AddVertex("E");

    graph.AddEdge("A", "B", 1);
    graph.AddEdge("A", "D", 1);
    graph.AddEdge("B", "C", 1);
    graph.AddEdge("C", "E", 1);
    graph.AddEdge("D", "E", 1);

    graph.BFS("A");

    return 0;
}
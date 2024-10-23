#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    // Non-default constructor
    Student(const string &studentName, int studentId)
    {
        // Check for validation
        if (studentName.empty())
        {
            cout << "Error: Name cannot be empty" << endl;
            name = "Unkown";
        }
        else
        {
            name = studentName;
        }

        if (studentId <= 0)
        {
            cout << "Error: Id cannot be negative" << endl;
            id = 0;
        }
        else
        {
            id = studentId;
        }
    }

    // Getters
    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return id;
    }

    void PrintInfo()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Id: " << id << endl;
    }
};

class Graduate
{
private:
    int year;

public:
    Graduate(int graduateYear)
    {
        /* There is two ways to check the year validation
        to turn into into a string and check for it,
        or this way */

        if ((graduateYear < 1000) || (graduateYear > 9999))
        {
            cout << "Error: Enter a valid Graduation year." << endl;
            year = 0;
        }

        if (((graduateYear / 100) == 20) && ((((graduateYear / 10) % 10) == 2) || (((graduateYear / 10) % 10) == 3)))
        {
            year = graduateYear;
        }

        else
        {
            cout << "Error: Enter a valid Graduation year." << endl;
            year = 0;
        }
    }
    void PrintInfo()
    {
        if (year == 0)
        {
            cout << "Student Graduation Year is invalid" << endl;
        }
        else
        {
            cout << "Student Graduation Year: " << year << endl;
        }
    }
};

int main()
{

    // Student object
    Student student("Amr Yasser", 202301043);

    student.PrintInfo();

    // Graduate object
    Graduate graduate(2024);

    graduate.PrintInfo();

    return 0;
}
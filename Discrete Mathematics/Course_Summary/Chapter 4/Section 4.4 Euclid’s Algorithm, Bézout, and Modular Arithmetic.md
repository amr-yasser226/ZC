## 1. The Euclidean Algorithm

### Correctness Lemma

If $a = bq + r$, then

$$
\gcd(a,b) = \gcd(b,r).
$$

---

## 2. Bézout’s Identity

### Theorem

There exist integers $s,t$ such that

$$
\gcd(a,b) = s\,a + t\,b.
$$

Here $s,t$ are **Bézout coefficients**.

### Consequence

If $gcd(a,b)=1$ and $a\mid bc$, then $a\mid c$.

---

## 3. Linear Congruences

### Definitions

* **Congruence:**
  $a\equiv b \pmod m$ iff $m\mid(a-b)$.
* **Linear congruence:**
  $a,x \equiv b \pmod m$.
* **Inverse mod $m$:**
  An integer $bar a$ with

  $$
  \bar a\,a\equiv1\pmod m,
  $$

  exists iff $gcd(a,m)=1$.

### Solving $a,x\equiv b\pmod m$

1. Compute $d=\gcd(a,m)$.
2. If $d\nmid b$, no solution.
3. Else divide through by $d$:

   $$
   (a/d)\,x \equiv (b/d)\pmod{m/d}.
   $$
4. Find the inverse of $a/d$ mod $m/d$ and multiply both sides.

---

## 4. The Chinese Remainder Theorem

### Statement

For pairwise relatively prime $m\_1,\dots,m\_n$ and any $a\_1,\dots,a\_n$, the system

$$
x\equiv a_k \pmod{m_k},\quad k=1,\dots,n
$$

has a unique solution modulo $M=\prod\_{k=1}^n m\_k$.

### Construction

1. Let $M\_k = M/m\_k$.
2. Find $y\_k$ with

   $$
   M_k\,y_k \equiv 1 \pmod{m_k}.
   $$
3. Then

   $$
   x = \sum_{k=1}^n a_k\,M_k\,y_k
   \quad(\bmod\,M).
   $$

---

## 5. Fermat’s Little Theorem

If $p$ is prime and $gcd(a,p)=1$, then

$$
a^{p-1} \equiv 1 \pmod p,
\quad\text{and}\quad
a^p \equiv a \pmod p.
$$

---

## 6. Pseudoprimes, Primitive Roots, and Discrete Logarithms

* **$a$-pseudoprime:** Composite $n$ satisfying

  $$
  a^{n-1}\equiv1\pmod n.
  $$

* **Primitive root mod $p$:** An integer $g$ whose powers generate all nonzero residues mod $p$; its order is $p-1$.

* **Discrete logarithm:** For prime $p$ and primitive root $g$, every $a\not\equiv0\pmod p$ can be written

  $$
  a\equiv g^k\pmod p,
  $$

  where $k=\log\_g(a)\pmod{p-1}$.


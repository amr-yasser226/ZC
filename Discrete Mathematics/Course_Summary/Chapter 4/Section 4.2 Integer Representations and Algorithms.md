## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3**

Given two \(\,n\)-bit numbers

$$
a=(a_{n-1}\dots a_0)_2,\quad b=(b_{n-1}\dots b_0)_2,
$$

compute their sum \(s=(s_n s_{n-1}\dots s_0)_2\):

1. Initialize carry \(c:=0\).  
2. For \(j=0,\dots,n-1\):

$$
\begin{aligned}
d&=\left\lfloor\frac{a_j+b_j+c}{2}\right\rfloor,\\
s_j&=(a_j+b_j+c)-2d,\\
c&=d.
\end{aligned}
$$

3. Set \(s_n:=c\).

> **Complexity:** \(O(n)\) bit-adds.

---

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4**

To multiply two \(\,n\)-bit integers \(a,b\):

1. For each \(j=0,\dots,n-1\), form

$$
c_j:=
\begin{cases}
a\ll j,&b_j=1,\\
0,&b_j=0.
\end{cases}
$$

2. Sum all \(c_j\) to get the product.

> **Complexity:** \(O(n^2)\) bit-adds.

---

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Compute \(b^n\mod m\) efficiently.

**Idea.** Write \(n=(a_{k-1}\dots a_0)_2\). Then

$$
b^n=b^{\sum_j a_j2^j}=\prod_{a_j=1}b^{2^j},
$$

reducing mod \(m\) after each square/multiply.

> **Complexity:** \(O((\log m)^2\log n)\) bit-ops.

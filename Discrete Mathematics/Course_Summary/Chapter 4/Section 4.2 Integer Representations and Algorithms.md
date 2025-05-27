## 4.2.1 Base-\(b\) Expansions

**Theorem 4.2.1 (Uniqueness of Base-\(b\) Expansion)**

Let \(b>1\) be an integer. Every positive integer \(n\) admits a unique expansion

$$
n = a_k b^k + a_{k-1} b^{k-1} + \cdots + a_1 b + a_0,
$$

where each digit \(a_i\in\{0,1,\dots,b-1\}\) and \(a_k\neq0\). We denote this by

$$
n = (a_k a_{k-1} \dots a_1 a_0)_b.
$$

- **Special bases.**  
  - **Binary** (\(b=2\)): digits \(\{0,1\}\).  
  - **Octal** (\(b=8\)): digits \(\{0,\dots,7\}\).  
  - **Hexadecimal** (\(b=16\)): digits \(\{0,\dots,9,A,\dots,F\}\), where \(A=10,\dots,F=15\).

**Example.**  
$$(10101111)_2 = 1\cdot2^7 + 0\cdot2^6 + 1\cdot2^5 + \cdots + 1\cdot2^0 = 175.$$

---

## 4.2.2 Base Conversion Algorithm

**Procedure 4.2.2**

To compute the base-\(b\) digits of \(n\in\mathbb{N}\):

1. Set  
   $$q := n,\quad k := 0.$$
2. While \(q \neq 0\):  
   $$
   a_k := q \bmod b,\quad
   q   := \big\lfloor \tfrac{q}{b}\big\rfloor,\quad
   k   := k + 1.
   $$
3. Then the digits are \((a_{k-1},\dots,a_0)\), giving \((a_{k-1}\dots a_0)_b\).

**Example.**  
Convert \(12345_{10}\) to octal (\(b=8\)):

$$
\begin{aligned}
12345 &= 8\cdot1543 + 1,\\
1543  &= 8\cdot192  + 7,\\
192   &= 8\cdot24   + 0,\\
24    &= 8\cdot3    + 0,\\
3     &= 8\cdot0    + 3.
\end{aligned}
$$

The remainders read bottom‐up give \((30071)_8\).

> **Remark.** To convert binary ↔ octal or hex, group binary digits in blocks of 3 (octal) or 4 (hex), padding with leading zeros.

---

## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3**

Given two \(n\)-bit binary numbers

$$
a = (a_{n-1}\dots a_0)_2,\quad b = (b_{n-1}\dots b_0)_2,
$$

compute their sum \(s = (s_n s_{n-1}\dots s_0)_2\):

1. Initialize carry \(c := 0\).  
2. For \(j=0,1,\dots,n-1\):  
   $$
   \begin{aligned}
   d   &:= \left\lfloor\frac{a_j + b_j + c}{2}\right\rfloor,\\
   s_j &:= (a_j + b_j + c) - 2\,d,\\
   c   &:= d.
   \end{aligned}
   $$
3. Set \(s_n := c\).

> **Complexity:** \(O(n)\) bit-additions.

---

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4**

To multiply two \(n\)-bit integers \(a\) and \(b\):

1. For each \(j=0,1,\dots,n-1\), form the partial product  
   $$
   c_j :=
   \begin{cases}
     a \ll j, & b_j = 1,\\
     0,       & b_j = 0.
   \end{cases}
   $$
2. Sum all \(c_j\) to obtain the product.

> **Complexity:** \(O(n^2)\) bit-additions.

---

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Compute \(b^n \bmod m\) efficiently.

**Idea.** Write the exponent \(n\) in binary: \(n = (a_{k-1}\dots a_0)_2\). Then

$$
b^n = b^{\sum_j a_j 2^j}
    = \prod_{a_j=1} b^{2^j},
$$

reducing modulo \(m\) at each squaring and multiplication.

> **Complexity:** \(O((\log m)^2 \log n)\) bit-operations.

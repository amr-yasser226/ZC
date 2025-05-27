## 4.2.1 Base - $b$ Expansions

**Theorem 4.2.1 (Uniqueness of Base - $b$ Expansion).**

Let $b>1$ be a fixed integer. Then every positive integer $n$ admits a *unique* expansion:

$$
 n = a_k b^k + a_{k-1} b^{k-1} + \cdots + a_1 b + a_0
$$

where each digit $a_i \in \{0,1,\dots,b-1\}$ and the leading digit $a_k \neq 0$. We denote this succinctly as

$$
 n = (a_k a_{k-1} \dots a_1 a_0)_b
$$

* **Special bases**

  * **Binary** ($b=2$): digits $\{0,1\}$
  * **Octal** ($b=8$): digits $\{0,1,\dots,7\}$
  * **Hexadecimal** ($b=16$): digits $\{0,1,\dots,9,A,\dots,F\}$

**Example.** The binary number $(10101111)_2$ expands as

$$
 (10101111)_2 = 1\cdot2^7 + 0\cdot2^6 + 1\cdot2^5 + 0\cdot2^4 + 1\cdot2^3 + 1\cdot2^2 + 1\cdot2^1 + 1\cdot2^0 = 175
$$

---

## 4.2.2 Base Conversion Algorithm

**Procedure 4.2.2 (Conversion to Base - $b$).** Given $n\in\mathbb{N}$ and $b>1$, compute its base - $b$ representation.

**Initialize**

$$
q \leftarrow n,
\quad k \leftarrow 0
$$

**Repeat** while $q \neq 0$:

$$
\begin{aligned}
a_k &\leftarrow q \bmod b,\\
q   &\leftarrow \left\lfloor\tfrac{q}{b}\right\rfloor,\\
k   &\leftarrow k + 1
\end{aligned}
$$

**Result:** The digits are $(a_{k-1},a_{k-2},\dots,a_1,a_0)$, so

$$
n = (a_{k-1} a_{k-2} \dots a_1 a_0)_b
$$

**Example.** Convert $12345_{10}$ to octal ($b=8$). We compute:

$$
\begin{aligned}
12345 &= 8 \times 1543 + 1,\\
1543  &= 8 \times 192  + 7,\\
192   &= 8 \times 24   + 0,\\
24    &= 8 \times 3    + 0,\\
3     &= 8 \times 0    + 3.
\end{aligned}
$$

Reading remainders bottom-up gives

$$
12345_{10} = (30071)_8
$$

> **Remark.** To convert between binary and octal (or hexadecimal), group binary digits in blocks of 3 (or 4), padding with leading zeros.

---

## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3 (Addition of Two $n$-Bit Binaries).**

Let

$$a = (a_{n-1} a_{n-2} \dots a_0)_2, \quad b = (b_{n-1} b_{n-2} \dots b_0)_2.$$

To compute $s = a + b$:

1. **Carry** $c \leftarrow 0$.

2. For $j = 0,1,\dots,n-1$:

$$
\begin{aligned}
d   &= \left\lfloor \tfrac{a_j + b_j + c}{2} \right\rfloor,\\
s_j &= (a_j + b_j + c) - 2d,\\
c   &= d
\end{aligned}
$$

3. **Final bit:** $s_n \leftarrow c$.

Result: $s = (s_n s_{n-1}\dots s_0)_2$.

> **Time complexity:** $O(n)$ bit-operations.

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4 (Schoolbook Method).** For two $n$-bit integers $a$ and $b$:

1. For each $j=0,1,\dots,n-1$, form

$$
c_j = \begin{cases}
 a \ll j, & b_j = 1,\\
 0,        & b_j = 0.
\end{cases}
$$

2. Sum all partials $c_j$.

> **Time complexity:** $O(n^2)$.

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Compute $b^n \bmod m$ efficiently.

Write the exponent in binary:

$$
 n = \sum_{j=0}^{k-1} a_j 2^j,
 \quad a_j\in\{0,1\}.
$$

Then

$$
 b^n = \prod_{j:\,a_j=1} b^{2^j} \pmod{m},
$$

reducing modulo $m$ after each squaring and multiplication.

> **Time complexity:** $O((\log m)^2 \log n)$ bit-operations.

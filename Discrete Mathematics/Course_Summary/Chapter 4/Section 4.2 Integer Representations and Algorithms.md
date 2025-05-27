## 4.2.1 Base-$b$ Expansions

**Theorem 4.2.1 (Uniqueness of Base-$b$ Expansion).**

Let $b>1$ be a fixed integer. Then every positive integer $n$ admits a *unique* expansion of the form

$$
 n
 = a_k b^k + a_{k-1} b^{k-1} + \cdots + a_1 b + a_0,
$$

where

* each digit $a_i \in \{0,1,\dots,b-1\}$,
* the leading digit $a_k \neq 0$.

We denote this expansion compactly as

$$
 n = (a_k a_{k-1} \dots a_1 a_0)_b.
$$

**Special bases.**

* **Binary** ($b = 2$): digits $\{0,1\}$.
* **Octal** ($b = 8$): digits $\{0,1,\dots,7\}$.
* **Hexadecimal** ($b = 16$): digits $\{0,1,\dots,9,A,\dots,F\}$, where $A=10,\dots,F=15$.

**Example.**

Consider the binary expansion

$$
(10101111)_2 = 1\cdot2^7 + 0\cdot2^6 + 1\cdot2^5 + 0\cdot2^4 + 1\cdot2^3 + 1\cdot2^2 + 1\cdot2^1 + 1\cdot2^0 = 175.
$$

---

## 4.2.2 Base Conversion Algorithm

**Procedure 4.2.2 (Conversion to Base-\(b\)).**  Given \(n\in\mathbb{N}\) and base \(b>1\), compute its base-\(b\) digits as follows:

1. **Initialization:**

    $$
    q \leftarrow n, \quad k \leftarrow 0.
    $$

2. **Iteration:** While \(q \neq 0\):

    $$
    \begin{aligned}
      a_k &\leftarrow q \bmod b,\\
      q   &\leftarrow \left\lfloor \tfrac{q}{b} \right\rfloor,\\
      k   &\leftarrow k + 1.
    \end{aligned}
    $$

3. **Result:** The digits of \(n\) in base \(b\) are

    $$
    (a_{k-1},\,a_{k-2},\,\dots,\,a_1,\,a_0),
    $$

    giving

    $$
    n = (a_{k-1}a_{k-2}\dots a_1a_0)_b.
    $$

**Example.** Convert \(12345_{10}\) to octal (\(b=8\)).  We perform successive divisions:

```latex
\begin{aligned}
12345 &= 8\cdot1543 + 1,\\
1543  &= 8\cdot192  + 7,\\
192   &= 8\cdot24   + 0,\\
24    &= 8\cdot3    + 0,\\
3     &= 8\cdot0    + 3.
\end{aligned}
```

Reading the remainders from bottom to top yields

$$
12345_{10} = (30071)_8.
$$

> **Remark.** To convert efficiently between binary and octal (or hexadecimal), group binary digits in blocks of 3 (for octal) or 4 (for hexadecimal), padding with leading zeros if necessary.

---

## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3 (Addition of Two $n$-Bit Binaries).**

Let

$$
 a = (a_{n-1} \dots a_1 a_0)_2,
 \quad
 b = (b_{n-1} \dots b_1 b_0)_2.
$$

We compute the sum $s = a + b$ with carry propagation:

1. Initialize $c \leftarrow 0$ (carry).
2. For $j = 0, 1, \dots, n-1$:
   \begin{align\*}
   d   &= \left\lfloor \frac{a\_j + b\_j + c}{2} \right\rfloor,\\
   s\_j &= (a\_j + b\_j + c) - 2d,\\
   c   &= d.
   \end{align\*}
3. Set the final bit $s_n \leftarrow c$.

Thus the result is $s = (s_n s_{n-1} \dots s_0)_2$.

> **Time complexity:** $O(n)$ bit-operations.

---

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4 (Schoolbook Multiplication).**  Given two $n$-bit integers $a$ and $b$:

1. For each bit index $j = 0,1,\dots,n-1$, form the partial product:

   $$
     c_j = \begin{cases}
       a \ll j, & b_j = 1,\
       0,        & b_j = 0.
     \end{cases}
   $$
2. Sum all $c_j$ (via binary addition) to produce the final product.

> **Time complexity:** $O(n^2)$ bit-additions.

---

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Efficiently compute $b^n \bmod m$.

**Key idea.** Write the exponent $n$ in binary,

$$
 n = (a_{k-1} a_{k-2} \dots a_1 a_0)_2
   = \sum_{j=0}^{k-1} a_j 2^j.
$$

Then

$$
 b^n = b^{\sum_j a_j 2^j}
      = \prod_{j: a_j = 1} b^{2^j},
$$

reducing modulo $m$ after each squaring and each multiplication.

> **Time complexity:** $O((\log m)^2 \cdot \log n)$ bit-operations.

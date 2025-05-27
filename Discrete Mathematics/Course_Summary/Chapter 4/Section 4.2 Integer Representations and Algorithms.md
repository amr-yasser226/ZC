## 4.2.1 Base-$b$ Expansions

**Theorem 4.2.1 (Uniqueness of Base-$b$ Expansion).**

Let $b>1$ be a fixed integer. Then every positive integer $n$ admits a *unique* expansion:

```math
n = a_k b^k + a_{k-1} b^{k-1} + \cdots + a_1 b + a_0,
```

where each digit $a_i \in \{0,1,\dots,b-1\}$ and the leading digit $a_k \neq 0$. We denote this by

```math
n = (a_k a_{k-1} \dots a_1 a_0)_b.
```

* **Special bases.**

  * **Binary** ($b=2$): digits $\{0,1\}$.
  * **Octal** ($b=8$): digits $\{0,\dots,7\}$.
  * **Hexadecimal** ($b=16$): digits $\{0,\dots,9,A,\dots,F\}$, where $A=10,\dots,F=15$.

**Example.** Consider the binary expansion:

```math
(10101111)_2 = 1\cdot2^7 + 0\cdot2^6 + 1\cdot2^5 + 0\cdot2^4 + 1\cdot2^3 + 1\cdot2^2 + 1\cdot2^1 + 1\cdot2^0 = 175.
```

---

## 4.2.2 Base Conversion Algorithm

**Procedure 4.2.2 (Conversion to Base-$b$).** Given $n\in\mathbb{N}$ and $b>1$, compute its base-$b$ digits:

1. **Initialization:**

   ```math
   q \leftarrow n, \quad k \leftarrow 0.
   ```

2. **Iteration:** While $q \neq 0$:

   ```math
   a_k \leftarrow q \bmod b, \quad
   q   \leftarrow \lfloor q/b \rfloor, \quad
   k   \leftarrow k + 1.
   ```

3. **Result:** The digits are $(a_{k-1},\dots,a_0)$, giving

   ```math
   n = (a_{k-1} a_{k-2} \dots a_1 a_0)_b.
   ```

**Example.** Convert $12345_{10}$ to octal ($b=8$):

```math
12345 = 8\cdot1543 + 1,\\
1543  = 8\cdot192  + 7,\\
192   = 8\cdot24   + 0,\\
24    = 8\cdot3    + 0,\\
3     = 8\cdot0    + 3.
```

Reading remainders bottom-up yields:

```math
12345_{10} = (30071)_8.
```

> **Remark.** To convert between binary and octal (or hexadecimal), group binary digits in blocks of 3 (or 4), padding with leading zeros.

---

## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3 (Addition of Two $n$-Bit Binaries).**

Let

```math
a = (a_{n-1}\dots a_0)_2, \quad b = (b_{n-1}\dots b_0)_2.
```

Compute sum $s$ as follows:

1. Initialize $c = 0$.

2. For $j = 0,\dots,n-1$:

   ```math
   d   = \lfloor (a_j + b_j + c)/2 \rfloor,\\
   s_j = (a_j + b_j + c) - 2d,\\
   c   = d.
   ```

3. Set $s_n = c$. Then $s=(s_n s_{n-1}\dots s_0)_2$.

> **Time complexity:** $O(n)$.

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4 (Schoolbook Multiplication).** Given two $n$-bit integers:

1. For $j = 0,\dots,n-1$:

   ```math
   c_j = \begin{cases}
     a\ll j, & b_j=1,\\
     0,      & b_j=0.
   \end{cases}
   ```

2. Sum all $c_j$.

> **Time complexity:** $O(n^2)$.

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Compute $b^n \bmod m$.

Write exponent:

```math
n = \sum_{j=0}^{k-1} a_j 2^j,\quad a_j\in\{0,1\}.
```

Then

```math
b^n = \prod_{a_j=1} b^{2^j} \pmod m,
```

reducing mod $m$ after each step.

> **Time complexity:** $O((\log m)^2 \log n)$.

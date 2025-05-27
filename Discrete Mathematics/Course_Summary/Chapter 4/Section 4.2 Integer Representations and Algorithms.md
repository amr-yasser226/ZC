Here’s a “pure-Markdown + Unicode” version that will render nicely on GitHub—no LaTeX needed:

````markdown
# 4.2 Base – $b$ Expansions and Integer Algorithms

## 4.2.1 Base-$b$ Expansions

**Theorem 4.2.1 (Uniqueness of Base-$b$ Expansion)**  
Let $b>1$ be an integer.  Every positive integer $n$ can be written uniquely as

```text
n = aₖ·bᵏ + aₖ₋₁·bᵏ⁻¹ + … + a₁·b + a₀
````

where each digit

```text
aᵢ ∈ {0,1,…,b−1},   aₖ ≠ 0.
```

We denote this by

```text
n = (aₖ aₖ₋₁ … a₁ a₀)₍b₎.
```

* **Binary** (\$b=2\$): digits `{0,1}`
* **Octal** (\$b=8\$): digits `{0,…,7}`
* **Hexadecimal** (\$b=16\$): digits `{0,…,9,A,…,F}` (A=10,…,F=15)

**Example**

```text
(10101111)₂ = 1·2⁷ + 0·2⁶ + 1·2⁵ + … + 1·2⁰ = 175
```

---

## 4.2.2 Base Conversion Algorithm

**Procedure 4.2.2**
To compute the base-\$b\$ digits of \$n∈ℕ\$:

1. ```text
   q = n
   k = 0
   ```
2. While `q ≠ 0` do:

   ```text
   aₖ = q mod b
   q  = floor(q / b)
   k += 1
   ```
3. The digits are then `(aₖ₋₁,…,a₀)`, i.e.

   ```text
   n = (aₖ₋₁ … a₀)₍b₎.
   ```

**Example** (12345₁₀ → octal):

```text
12345 = 8·1543 + 1  
1543  = 8·192  + 7  
192   = 8·24   + 0  
24    = 8·3    + 0  
3     = 8·0    + 3  

⇒ (30071)₈
```

> **Remark.**
> To convert between binary and octal/hex, group binary bits in blocks of 3 (for octal) or 4 (for hex), padding with leading zeros.

---

## 4.2.3 Algorithms for Integer Operations

### 4.2.3.1 Binary Addition

**Procedure 4.2.3**
Given two *n*-bit numbers

```text
a = (aₙ₋₁ … a₀)₂   and   b = (bₙ₋₁ … b₀)₂,
```

we want

```text
s = (sₙ sₙ₋₁ … s₀)₂ = a + b.
```

1. Initialize

   ```text
   c = 0   (carry)
   ```
2. For `j = 0` to `n−1`:

   ```text
   d   = floor((a_j + b_j + c) / 2)
   s_j = (a_j + b_j + c) − 2·d
   c   = d
   ```
3. Finally set

   ```text
   sₙ = c
   ```

**Complexity:** O(n) bit-adds

---

### 4.2.3.2 Binary Multiplication

**Procedure 4.2.4**
To multiply two *n*-bit integers `a` and `b`:

1. For each `j = 0…n−1`, form partial product

   ```text
   c_j = if b_j = 1 then (a << j) else 0
   ```
2. Sum all `c_j` to obtain `a·b`.

**Complexity:** O(n²) bit-adds

---

### 4.2.3.3 Binary Modular Exponentiation

**Goal.** Compute

```text
bⁿ mod m
```

efficiently.

**Idea.** Write `n` in binary

```text
n = (aₖ₋₁ … a₀)₂ = Σ (a_j·2^j).
```

Then

```text
bⁿ = Π_{j: a_j=1} (b^(2^j))  mod m,
```

reducing modulo `m` after each square/multiply.

**Complexity:** O((log m)² · log n) bit-operations

```

**Why this works on GitHub**  
- We used plain text and Unicode subscripts/superscripts.  
- Algorithms live in indented code-blocks so alignment stays perfect.  
- No `$…$` or `\(...\)` delimiters that GitHub itself won’t render.
```

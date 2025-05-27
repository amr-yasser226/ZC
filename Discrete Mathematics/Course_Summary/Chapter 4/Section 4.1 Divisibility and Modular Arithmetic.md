## 4.1.1 Divisibility

**Definition 4.1.1**

Let $a,b \in \mathbb{Z}$ with $a \neq 0$.  We say **“$a$ divides $b$”**, written

$$
a \mid b,
$$

if there exists $c \in \mathbb{Z}$ such that

$$
b = a\,c.
$$

- In that case, $a$ is a **factor** (or **divisor**) of $b$, and $b$ is a **multiple** of $a$.
- If no such $c$ exists, we write $a \nmid b$.
- Equivalently,

$$
a \mid b
\quad\Longleftrightarrow\quad
\frac{b}{a} \in \mathbb{Z}.
$$

---

**Theorem 4.1.2 (Basic Properties of Divisibility)**

Let $a,b,c \in \mathbb{Z}$ with $a \neq 0$.  Then:

1. If $a \mid b$ and $a \mid c$, then $a \mid (b+c)$.
2. If $a \mid b$, then for any $k\in\mathbb{Z}$,  $a \mid (b\,k)$.
3. If $a \mid b$ and $b \mid c$, then $a \mid c$.

**Corollary 4.1.3**

If $a \mid b$ and $a \mid c$, then for all $m,n\in\mathbb{Z}$,

$$
a \,\bigl\vert\, (m\,b + n\,c).
$$

---

## 4.1.2 The Division Algorithm

**Theorem 4.1.4 (Division Algorithm)**

For any $a\in\mathbb{Z}$ and any positive integer $d$, there exist **unique** integers $q$ (quotient) and $r$ (remainder) such that

$$
\begin{aligned}
a &= d\,q + r,\\
0 &\le r < d.
\end{aligned}
$$

We adopt the notation

$$
q := \big\lfloor \tfrac{a}{d}\big\rfloor,
\qquad
r := a \bmod d,
$$

so that $a = d\,q + r$ with $0 \le r < d$.

**Examples.**  
1. $q = \lfloor 101/11\rfloor = 9,\quad r = 101 \bmod 11 = 2$.  
2. $q = \lfloor -11/3\rfloor = -4,\quad r = (-11) \bmod 3 = 1$.

---

## 4.1.3 Congruence and Modular Arithmetic

### 4.1.3.1 Congruence Relation

**Definition 4.1.5**

Let $a,b\in\mathbb{Z}$ and $m\in\mathbb{Z}^+$.  We say

$$
a \equiv b \pmod m
$$

if

$$
m \mid (a - b).
$$

Otherwise $a \not\equiv b \pmod m$.  Equivalently, $a$ and $b$ have the same remainder upon division by $m$.

**Theorem 4.1.6 (Characterization)**

$a \equiv b \pmod m$ if and only if there exists $k\in\mathbb{Z}$ such that

$$
a = b + k\,m.
$$

**Theorem 4.1.7 (Remainder Characterization)**

For $a,b\in\mathbb{Z}$ and $m\in\mathbb{Z}^+$,

$$
a\equiv b\pmod m
\quad\Longleftrightarrow\quad
(a \bmod m) = (b \bmod m).
$$

---

### 4.1.3.2 Operations on Congruences

**Theorem 4.1.8**

If

$$
a \equiv b \pmod m
\quad\text{and}\quad
c \equiv d \pmod m,
$$

then

$$
a + c \equiv b + d \pmod m,
\qquad
a\,c \equiv b\,d \pmod m.
$$

**Corollaries.**

- For any $k\in\mathbb{Z}$:

  $$
  k\,a \equiv k\,b \pmod m,
  \quad
  a + k \equiv b + k \pmod m.
  $$

- **Caution:** Division is not generally valid.  
  E.g.\ $14\equiv8\pmod6$ but dividing by 2 gives $7\not\equiv4\pmod6$.

**Computing Remainders.**

$$
\begin{aligned}
(a+b)\bmod m &= \bigl[(a\bmod m)+(b\bmod m)\bigr]\bmod m,\\
(a\,b)\bmod m &= \bigl[(a\bmod m)\,(b\bmod m)\bigr]\bmod m.
\end{aligned}
$$

---

### 4.1.3.3 Arithmetic in $\mathbb{Z}_m$

**Definition 4.1.9**

Let

$$\mathbb{Z}_m:=\{0,1,2,\dots,m-1\}.$$

In $\mathbb{Z}_m$, define

$$a+_m b:=(a+b)\bmod m,\quad a\cdot_m b:=(a\,b)\bmod m.$$

Then $(\mathbb{Z}_m,+_m,\cdot_m)$ is a **commutative ring with unity**.

- **Key Properties.**  
  • Closure, associativity, commutativity of $+_m,\cdot_m$.  
  • Identities: $0$ for $+_m$, $1$ for $\cdot_m$.  
  • Additive inverse of $a$ is $m-a$.  
  • Distributivity of $\cdot_m$ over $+_m$.  
  • Multiplicative inverse exists precisely when $\gcd(a,m)=1$.

<!-- section_4.3.md -->

# Section 4.3 – Divisibility, Prime Factorization, and gcd/lcm

## 1. Divisibility and Primes

### Definitions
- **Divides:**  
  $d \mid n$ iff there exists $k\in\mathbb{Z}$ with $n = d\,k$.
- **Prime:**  
  A positive integer $p>1$ is **prime** if its only positive divisors are $1$ and $p$.
- **Composite:**  
  A positive integer $n>1$ that is not prime.

### Fundamental Theorem of Arithmetic
Every integer $n>1$ has a unique factorization


$$n = p_1^{e_1}\,p_2^{e_2}\,\cdots\,p_k^{e_k},$$



$$
p_1 < p_2 < \cdots < p_k,\; e_i\ge1.
$$

### Sieve of Eratosthenes
1. List the integers $2,3,\dots,N$.  
2. For each prime $p \le \sqrt{N}$, remove all multiples of $p$ (excluding $p$ itself).  
3. The remaining numbers are the primes $\le N$.

### Infinitude of Primes (Euclid’s Proof)
1. Assume finitely many primes $p_1,\dots,p_n$.  
2. Let  

$$
Q = p_1p_2\cdots p_n + 1.
$$

3. No $p_i$ divides $Q$ (each leaves remainder $1$), so $Q$ or one of its prime factors is new.  
4. **Therefore**, there are infinitely many primes.

---

## 2. Greatest Common Divisor (gcd)

### Definition
For $a,b\in\mathbb{Z}$, not both zero,  
$$
\gcd(a,b) = \max\{d>0 : d\mid a;
$$

$$
\text{and}\; d\mid b\}.
$$

### Relatively Prime
$\gcd(a,b)=1$.  
Pairwise relatively prime: $\gcd(a_i,a_j)=1$ for all $i\neq j$.

### Via Prime Factorization
If

$$a = \prod_i p_i^{\alpha_i}$$



$$
b = \prod_i p_i^{\beta_i},
$$
then
$$
\gcd(a,b) = \prod_i p_i^{\min(\alpha_i,\beta_i)}.
$$

---

## 3. Least Common Multiple (lcm)

### Definition
$$
\mathrm{lcm}(a,b) = \min\{m>0 : a\mid m \;\text{and}\; b\mid m\}.
$$

### Via Prime Factorization
$$
\mathrm{lcm}(a,b) = \prod_i p_i^{\max(\alpha_i,\beta_i)}.
$$

### Relationship
$$
a\,b = \gcd(a,b)\,\mathrm{lcm}(a,b).
$$

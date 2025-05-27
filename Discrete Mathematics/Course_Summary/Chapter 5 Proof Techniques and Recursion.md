## 1. Principle of Mathematical Induction

To prove that a property $P(n)$ holds for all integers $n \ge b$:

1. **Basis Step**
   Show that

   $$P(b)$$

   is true.

2. **Inductive Step**
   Assume for some arbitrary $k \ge b$ that

   $$
   P(k)
   $$

   holds (this is the *inductive hypothesis*), and then prove

   $$
   P(k+1).
   $$

3. **Conclusion**
   Having established

   $$
   P(b)
   \quad\text{and}\quad
   \forall k\ge b\,(P(k)\to P(k+1)),
   $$

   we conclude

   $$
   \forall n\ge b\,P(n).
   $$

---

## 2. Variants of Induction

### 2.1 Strong (Complete) Induction

* **Inductive Hypothesis:** Assume

  $$
  P(1),\,P(2),\,\dots,\,P(k)
  $$

  all hold.
* **Goal:** Prove

  $$
  P(k+1).
  $$

### 2.2 Well-Ordering Principle

* **Statement:** Every nonempty subset of the positive integers $mathbb{Z}^+$ has a least element.
* **Equivalence:** This principle is logically equivalent to the ordinary induction principle.

### 2.3 Structural Induction

* **Context:** Used for recursively defined structures (e.g., trees, lists, expressions).
* **Approach:**

  1. **Base Case:** Prove the property for each basic constructor.
  2. **Inductive Case:** Assume it holds for the immediate subcomponents, then prove it holds for the composite structure.

---

## 3. Common Summation Formulas

```math
\sum_{i=1}^n i = \frac{n(n+1)}{2}
````

```math
\sum_{i=1}^n (2i-1) = n^2
```

---

## 4. Typical Inductive Inequalities

* **Linear vs. Exponential**

  ```math
  n < 2^n,\quad n \ge 1
  ```
* **Exponential vs. Factorial**

  ```math
  2^n < n!,\quad n \ge 4
  ```

---

## 5. Divisibility via Induction

**Example:** Prove $n^3 - n$ is divisible by 3 for all $n \ge 1$.

1. **Basis:**
   $1^3 - 1 = 0$, divisible by 3.

2. **Inductive Step:**
   Assume $k^3 - k$ is divisible by 3. Then

   ```math
   (k+1)^3 - (k+1)
   = (k^3 + 3k^2 + 3k + 1) - (k+1)
   = (k^3 - k) + 3(k^2 + k),
   ```

   each term divisible by 3, so $(k+1)^3 - (k+1)$ is divisible by 3.

---

## 6. Combinatorial Counts

* **Number of Subsets**
  A set with $n$ elements has

  ```math
  2^n
  ```

  subsets.

* **Checkerboard Tiling**
  A $2^n \times 2^n$ board with one square removed can be tiled by right-triominoes via induction on $n$.

---

## 7. Guidelines & Pitfalls

* Never assume *all* $P(k)$ at once—only assume what the inductive step requires.
* Adjust the **base case** if the property first holds at some $b>1$.
* Watch for “holes” in the logic (e.g.\ flawed step from $2$ to $3$ in certain counter-examples).

---

## 8. Quick Reference Table

| Proof Type           | Base Case         | Inductive Hypothesis           | Goal               |
| -------------------- | ----------------- | ------------------------------ | ------------------ |
| Ordinary Induction   | $P(b)$            | Assume $P(k)$                  | Show $P(k+1)$      |
| Strong Induction     | $P(1),\dots,P(b)$ | Assume $P(1),\dots,P(k)$       | Show $P(k+1)$      |
| Structural Induction | Base constructors | Assume holds for substructures | Show for composite |


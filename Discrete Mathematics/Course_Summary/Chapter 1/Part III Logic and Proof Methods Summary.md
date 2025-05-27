## I. Preliminaries

### Argument

A sequence of statements:

```text
S₁, S₂, …, Sₙ  (premises)
C             (conclusion)
```

The argument is **valid** if the implication

```math
(S₁ ∧ S₂ ∧ ⋯ ∧ Sₙ) → C
```

is a tautology.

### Tautology

A formula that is true under every truth‐value assignment.

---

## II. Rules of Inference for Propositional Logic

For propositional variables $p,q,r$, the following are valid argument forms:

1. **Modus Ponens**

   ```math
   \frac{p,\quad p→q}{\therefore q}
   ```

   Tautology: `(p ∧ (p→q)) → q`

2. **Modus Tollens**

   ```math
   \frac{¬q,\quad p→q}{\therefore ¬p}
   ```

   Tautology: `(¬q ∧ (p→q)) → ¬p`

3. **Hypothetical Syllogism**

   ```math
   \frac{p→q,\quad q→r}{\therefore p→r}
   ```

   Tautology: `((p→q) ∧ (q→r)) → (p→r)`

4. **Disjunctive Syllogism**

   ```math
   \frac{p∨q,\quad ¬p}{\therefore q}
   ```

   Tautology: `(¬p ∧ (p∨q)) → q`

5. **Addition**

   ```math
   \frac{p}{\therefore p∨q}
   ```

   Tautology: `p → (p∨q)`

6. **Simplification**

   ```math
   \frac{p∧q}{\therefore p}
   ```

   Tautology: `(p∧q) → p`

7. **Conjunction**

   ```math
   \frac{p,\quad q}{\therefore p∧q}
   ```

   Tautology: `(p∧q) ← (p∧q)`

8. **Resolution**

   ```math
   \frac{¬p∨r,\quad p∨q}{\therefore q∨r}
   ```

   Tautology: `((¬p∨r) ∧ (p∨q)) → (q∨r)`

---

## III. Rules of Inference for Predicate Logic

Let the domain be nonempty and predicates $P(x), Q(x)$:

1. **Universal Instantiation (UI)**

   ```math
   \frac{∀x P(x)}{\therefore P(c)}  \quad\text{for arbitrary }c.
   ```

2. **Universal Generalization (UG)**

   ```math
   \frac{P(c)}{\therefore ∀x P(x)}  \quad\text{if }c\text{ was arbitrary.}
   ```

3. **Existential Instantiation (EI)**

   ```math
   \frac{∃x P(x)}{\therefore P(c)}  \quad\text{for some fresh }c.
   ```

4. **Existential Generalization (EG)**

   ```math
   \frac{P(c)}{\therefore ∃x P(x)}.
   ```

5. **Universal Modus Ponens**
   Combined UI + Modus Ponens in one step:

   ```math
   \frac{∀x (P(x)→Q(x)),\quad P(c)}{\therefore Q(c)}.
   ```

---

## IV. Proof Methods

Let $p,q$ be statements.

1. **Direct Proof**
   Assume $p$; derive $q$ via logical rules.

2. **Proof by Contraposition**
   To prove $p→q$, prove $¬q→¬p$.

3. **Proof by Contradiction**
   To prove $p$, assume $¬p$ and derive a contradiction $(r∧¬r)$.

4. **Proof by Cases**
   To prove $p→q$, partition into cases
   $C₁∨⋯∨Cₖ$; show each $Cᵢ→q$.

5. **Existence Proofs**

   * *Constructive:* exhibit $c$ with $P(c)$.
   * *Nonconstructive:* assume $¬∃x P(x)$ and derive a contradiction.

6. **Uniqueness Proofs**
   To prove $∃!x P(x)$:

   1. Show $∃x P(x)$.
   2. Show if $P(y)$ then $y=x$.

---

## V. Common Definitions & Examples

1. **Even / Odd Integers**

**Definition.**  
An integer _n_ is called **even** if there exists an integer _k_ such that _n = 2k_, and **odd** if there exists an integer _k_ such that _n = 2k + 1_.

```text
n is even  ⇔  ∃ k ∈ ℤ: n = 2k
n is odd   ⇔  ∃ k 
```

2. **Rational Numbers**

**Definition.**
A real number r is rational if there exist integers p and q (with q ≠ 0) such that r = p/q.

```text
r ∈ ℝ is rational  ⇔  ∃ p, q ∈ ℤ, q ≠ 0: r = p/q
```

3. **Biconditional Proof**
   To show $p↔q$, prove both $p→q$ and $q→p$.

---

## VI. Proof Strategies

1. **Choose a Method:**

   * Try **direct** first.
   * If stuck, try **contraposition** or **contradiction**.

2. **Forward vs. Backward Reasoning:**

   * *Forward:* start from premises $p$ and work to $q$.
   * *Backward:* assume target $q$ (or $¬q$) and find what is needed.

3. **“Without Loss of Generality” (WLOG):**
   When symmetric cases exist, prove for one representative.

---

## VII. Symbol Legend

| Symbol | Meaning                                 |
| :----- | :-------------------------------------- |
| $∧$    | logical AND                             |
| $∨$    | logical OR                              |
| $→$    | implication (‘if … then …’)             |
| $↔$    | biconditional                           |
| $¬$    | negation (‘not’)                        |
| $∀$    | universal quantifier (‘for all’)        |
| $∃$    | existential quantifier (‘there exists’) |
| $∃!$   | unique existence                        |

---

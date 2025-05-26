## 1. Basics of Predicate Logic

### Variables

* Denote objects in a *domain* `U`:

  ```
  x, y, z, …
  ```

### Predicates and Propositional Functions

* A **predicate** `P` of arity *n* is written:

  ```
  P(x₁, …, xₙ)
  ```
* A **propositional function** becomes a proposition when each variable is either:

  1. **Assigned** a value in `U`, e.g., `P(a)`, or
  2. **Bound** by a quantifier, e.g., `∀x P(x)`.
* **Example**:

  ```
  P(x) ≡ (x > 0),  U = ℤ
  ```

  * `P(-3)` is false
  * `P(3)` is true

### Compound Formulas

* All propositional connectives carry over:

  ```
  ¬, ∧, ∨, →, ↔
  ```
* Example:

  ```
  (P(x) ∧ Q(x)) → R(x)
  ```

---

## 2. Quantifiers

| Symbol | Name                   | Reading                             |
| ------ | ---------------------- | ----------------------------------- |
| `∀x`   | Universal quantifier   | “For **all** x, …”                  |
| `∃x`   | Existential quantifier | “There **exists** an x such that …” |
| `∃! x` | Uniqueness quantifier  | “Exactly **one** x such that …”     |

* **Binding**: In `∀x P(x)` and `∃x P(x)`, the quantifier *binds* `x`.
* **Semantics** over domain `U`:

  ```
  ∀x P(x):   P(a) holds for every a ∈ U
  ∃x P(x):   P(a) holds for some a ∈ U
  ∃!x P(x):  ∃x (P(x) ∧ ∀y (P(y) → y = x))
  ```

---

## 3. Equivalences & Negation Rules

### De Morgan’s Laws for Quantifiers

```text
¬∀x P(x) ≡ ∃x ¬P(x)
¬∃x P(x) ≡ ∀x ¬P(x)
```

### Double Negation

```text
∀x ¬¬P(x) ≡ ∀x P(x)
∃x ¬¬P(x) ≡ ∃x P(x)
```

### Precedence

* Quantifiers bind **tighter** than connectives:

  ```text
  ∀x P(x) ∨ Q(x)  ≡  (∀x P(x)) ∨ Q(x)
  ```

### Distribution (selective)

```text
∀x (P(x) ∧ Q(x)) ≡ (∀x P(x)) ∧ (∀x Q(x))
```

*Note: Distribution over `∨` does *not* generally hold.*

---

## 4. Translation Between English and Logic

1. **Choose** domain(s) `U`.
2. **Define** predicates, e.g., `P(x)`, `R(x,y)`.
3. **Map** English quantifiers (“every”, “some”, “exactly one”) to `∀`, `∃`, `∃!`.
4. **Use** connectives (`∧`, `∨`, `→`) for “and”, “or”, “if…then”.

### Examples

* **Every student in this class has taken Java.**

  ```text
  U = {students},  J(x): x has taken Java
  ∀x J(x)
  ```

* **Some people are mathematicians.**

  ```text
  U = all people,  M(x): x is a mathematician
  ∃x M(x)
  ```

* **Exactly one solution exists.**

  ```text
  ∃!x S(x)
  ```

  which expands to

  ```text
  ∃x (S(x) ∧ ∀y (S(y) → y = x))
  ```

---

## 5. Nested Quantifiers

### Form

```text
Q₁ x Q₂ y … P(x,y,…),  Qᵢ ∈ {∀, ∃}
```

### Interpretation via Loops (finite `U`)

* `∀x ∀y P(x,y)`: check every pair `(x,y)`.
* `∀x ∃y P(x,y)`: for each `x`, find some `y`.

### Order Matters

````text
∀x ∃y P(x,y)  ≠  ∃y ∀x P(x,y)
```` 
(in general)

### Examples

* **Additive Inverse**
  *English:* Every real number has an additive inverse.

  ```text
  ∀x ∈ ℝ ∃y ∈ ℝ (x + y = 0)
  ```

* **Loved by Everyone**
  *English:* There is someone who is loved by every person.

  ```text
  ∃y ∀x L(x,y)
  ```

---

### Negating Nested Quantifiers

Apply De Morgan’s Laws step by step to push negation inward:

```text
¬(∃w ∀a ∃f P(w,a,f))
≡ ∀w ¬(∀a ∃f P(w,a,f))
≡ ∀w ∃a ¬(∃f P(w,a,f))
≡ ∀w ∃a ∀f ¬P(w,a,f)
```

*Interpretation:* “For every woman `w`, there exists an airline `a` such that for all flights `f`, `w` has not taken `f`.”

---

### Notation & Glossary

| Symbol          | Meaning                                        |
| --------------- | ---------------------------------------------- |
| `U`             | Universe (domain)                              |
| `x, y, z, …`    | Variables                                      |
| `P(x), R(x, y)` | Predicates (propositional functions)           |
| `∀x, ∃x, ∃!x`   | Universal, existential, uniqueness quantifiers |
| `¬, ∧, ∨, →, ↔` | Logical connectives                            |

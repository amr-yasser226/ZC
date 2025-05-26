## 1. Propositions and Propositional Variables

* **Proposition**: A declarative sentence that is either true (`T`) or false (`F`).

  * Examples: “The Moon is made of green cheese.” (`p`), “1 + 0 = 1.” (`r`)
* **Non-propositions**: Commands, questions, or open formulas with free variables (e.g. `x + 1 = 2`).
* **Propositional Variables**: `p`, `q`, `r`, `s`, …
* **Constants**: `T` (always true), `F` (always false).

## 2. Logical Connectives and Compound Propositions

Given propositions `p` and `q`, we form new propositions:

|  Symbol | Name          | Truth Condition                                              |
| :-----: | :------------ | :----------------------------------------------------------- |
|   `¬p`  | Negation      | True if **not** `p` (`p` is false)                           |
| `p ∧ q` | Conjunction   | True if **both** `p` and `q` are true                        |
| `p ∨ q` | Disjunction   | True if **at least one** of `p`, `q` is true                 |
| `p ⊕ q` | Exclusive OR  | True if **exactly one** of `p`, `q` is true                  |
| `p → q` | Implication   | False only when `p` is true and `q` is false; otherwise true |
| `p ↔ q` | Biconditional | True when `p` and `q` share the same truth value             |

### 2.1 Truth Tables

#### Negation

|  p  |  ¬p |
| :-: | :-: |
|  T  |  F  |
|  F  |  T  |

#### Conjunction

|  p  |  q  | p ∧ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   F   |
|  F  |  F  |   F   |

#### Disjunction (Inclusive)

|  p  |  q  | p ∨ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   T   |
|  F  |  T  |   T   |
|  F  |  F  |   F   |

#### Exclusive Or

|  p  |  q  | p ⊕ q |
| :-: | :-: | :---: |
|  T  |  T  |   F   |
|  T  |  F  |   T   |
|  F  |  T  |   T   |
|  F  |  F  |   F   |

#### Implication

|  p  |  q  | p → q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   T   |
|  F  |  F  |   T   |

#### Biconditional

|  p  |  q  | p ↔ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   F   |
|  F  |  F  |   T   |

## 3. Implication Variants

From `p → q` we derive:

* **Converse**: `q → p`
* **Inverse**: `¬p → ¬q`
* **Contrapositive**: `¬q → ¬p`

> **Equivalence**: `p → q` ≡ `¬q → ¬p`

## 4. Operator Precedence

1. `¬` (highest)
2. `∧`
3. `∨`
4. `→`
5. `↔` (lowest)

> *Example*: `p ∨ q → ¬r` is parsed as `(p ∨ q) → (¬r)`.

## 5. Tautologies, Contradictions, Contingencies

* **Tautology**: Always true (e.g. `p ∨ ¬p`).
* **Contradiction**: Always false (e.g. `p ∧ ¬p`).
* **Contingency**: Neither a tautology nor a contradiction.

|  p  |  ¬p | p ∨ ¬p | p ∧ ¬p |
| :-: | :-: | :----: | :----: |
|  T  |  F  |    T   |    F   |
|  F  |  T  |    T   |    F   |

## 6. Fundamental Logical Equivalences

Let `p`, `q`, `r` be arbitrary propositions. The following equivalences hold:

| Law                  | Equivalence                                                            |
| -------------------- | ---------------------------------------------------------------------- |
| **Identity**         | `p ∧ T ≡ p`<br>`p ∨ F ≡ p`                                             |
| **Domination**       | `p ∨ T ≡ T`<br>`p ∧ F ≡ F`                                             |
| **Idempotent**       | `p ∨ p ≡ p`<br>`p ∧ p ≡ p`                                             |
| **Double Negation**  | `¬(¬p) ≡ p`                                                            |
| **Negation**         | `p ∨ ¬p ≡ T`<br>`p ∧ ¬p ≡ F`                                           |
| **Commutative**      | `p ∨ q ≡ q ∨ p`<br>`p ∧ q ≡ q ∧ p`                                     |
| **Associative**      | `(p ∨ q) ∨ r ≡ p ∨ (q ∨ r)`<br>`(p ∧ q) ∧ r ≡ p ∧ (q ∧ r)`             |
| **Distributive**     | `p ∧ (q ∨ r) ≡ (p ∧ q) ∨ (p ∧ r)`<br>`p ∨ (q ∧ r) ≡ (p ∨ q) ∧ (p ∨ r)` |
| **Absorption**       | `p ∨ (p ∧ q) ≡ p`<br>`p ∧ (p ∨ q) ≡ p`                                 |
| **De Morgan’s Laws** | `¬(p ∧ q) ≡ ¬p ∨ ¬q`<br>`¬(p ∨ q) ≡ ¬p ∧ ¬q`                           |

## 7. Equivalence Proof Techniques

* **Truth Table**: Demonstrate identical truth-value columns.
* **Algebraic**: Chain equivalences:

  ```
  A ≡ A₁ ≡ A₂ ≡ … ≡ B
  ```

## 8. Counting Rows in Truth Tables

* With `n` distinct propositional variables, there are `2^n` rows.
* Thus up to `2^n` distinct propositions (modulo equivalence).

---

*Comprehensive Study Guide*

---

## Table of Contents

1. [Access Control Lists & Capability Lists](#access-control-lists--capability-lists)

   * [Exercise A](#exercise-a-access-control-lists-and-capability-lists)
2. [Bell–LaPadula vs. Biba on Security & Integrity Labels](#bell–lapadula-vs-biba-on-security--integrity-labels)

   * [Exercise 1](#exercise-1-blp-vs-biba-on-s₁-s₂-s₃-and-o₁-o₂-o₃)
3. [Anas, Haneen & Omar Matrix Modifications](#anas-haneen--omar-matrix-modifications)

   * [Exercise 2](#exercise-2-anas-haneen--omar)
4. [Additional Exercises](#additional-exercises)

   * [Exercise 3: ACL & Capability Lists](#exercise-3-acl--capability-lists)
   * [Exercise 4: BLP & Biba on Four Subjects](#exercise-4-blp--biba-on-four-subjects)
   * [Exercise 5: Revocation Impact on ACL vs. Capabilities](#exercise-5-revocation-impact-on-acl-vs-capabilities)
   * [Exercise 6: Mixed DAC/MAC Scenario](#exercise-6-mixed-dacmac-scenario)
   * [Exercise 7: Multi-level Security with Hybrid Rights](#exercise-7-multi-level-security-with-hybrid-rights)

---

## Access Control Lists & Capability Lists

### Exercise A: Access Control Lists and Capability Lists

**Scenario**

* **Alice** can **read** and **write** file X, **read** file Y, and **execute** file Z.
* **Bob** can **read** file X, **read**/**write** file Y, and has **no access** to file Z.

#### a) Access Control Lists (ACL)

| **Object** | **ACL(object)**           |                        |
| ---------- | ------------------------- | ---------------------- |
| **file X** | Alice: `{read, write}`    |   Bob: `{read}`        |
| **file Y** | Alice: `{read}`           |   Bob: `{read, write}` |
| **file Z** | Alice: `{execute}`        |   Bob: `{}`            |

#### b) Capability Lists (CList)

| **Subject** | **CList(subject)**          |                             |                       |
| ----------- | --------------------------- | --------------------------- | --------------------- |
| **Alice**   | file X: `{read, write}`     |   file Y: `{read}`          |   file Z: `{execute}` |
| **Bob**     | file X: `{read}`            |   file Y: `{read, write}`   |   file Z: `{}`        |

---

## Bell–LaPadula vs. Biba on Security & Integrity Labels

### Exercise 1: BLP vs. Biba on S₁, S₂, S₃ and O₁, O₂, O₃

**Labels**

* **Subjects**:

  * S₁: **Low**
  * S₂: **High**
  * S₃: **Medium**

* **Objects**:

  * O₁: **High**
  * O₂: **Medium**
  * O₃: **Low**

#### 1. Bell–LaPadula Model

* **No Read Up**: allow **read** only if *Lₛ ≥ Lₒ*
* **No Write Down**: allow **write** only if *Lₛ ≤ Lₒ*

|               | **O₁ (High)** | **O₂ (Med)** | **O₃ (Low)** |
| ------------- | :-----------: | :----------: | :----------: |
| **S₁ (Low)**  |       —       |       —      |     R, W     |
| **S₂ (High)** |      R, W     |       R      |       R      |
| **S₃ (Med)**  |       —       |     R, W     |       R      |

#### 2. Biba Model

* **No Read Down**: allow **read** only if *Lₛ ≤ Lₒ*
* **No Write Up**: allow **write** only if *Lₛ ≥ Lₒ*

|               | **O₁ (High)** | **O₂ (Med)** | **O₃ (Low)** |
| ------------- | :-----------: | :----------: | :----------: |
| **S₁ (Low)**  |       R       |       R      |     R, W     |
| **S₂ (High)** |      R, W     |       —      |       —      |
| **S₃ (Med)**  |       R       |     R, W     |       —      |

---

## Anas, Haneen & Omar Matrix Modifications

### Exercise 2: Anas, Haneen & Omar

**Raw Access Rights**

1. **Anas**: no access to X, write Y, read Z
2. **Haneen**: read X, no access to Y, write Z
3. **Omar**: write X, read Y, no access to Z

#### A. Raw Access Control Matrix M

|        | **X** | **Y** | **Z** |
| ------ | :---: | :---: | :---: |
| Anas   |   –   |   W   |   R   |
| Haneen |   R   |   –   |   W   |
| Omar   |   W   |   R   |   –   |

#### B. Bell–LaPadula Modification

* **Subject Levels**:

  * Anas = **TS**, Haneen = **S**, Omar = **C**
* **Object Levels**:

  * X = **S**, Y = **TS**, Z = **U**

Apply **No Read Up** & **No Write Down**:

|        | **X (S)** | **Y (TS)** | **Z (U)** |
| ------ | :-------: | :--------: | :-------: |
| Anas   |     R     |    R, W    |     —     |
| Haneen |     R     |      —     |     —     |
| Omar   |     W     |      —     |     —     |

#### C. Biba Modification

* **Integrity Levels**:

  * Anas = **L**, Haneen = **H**, Omar = **M**
* **Object Levels**:

  * X = **M**, Y = **L**, Z = **H**

Apply **No Read Down** & **No Write Up**:

|        | **X (M)** | **Y (L)** | **Z (H)** |
| ------ | :-------: | :-------: | :-------: |
| Anas   |     —     |     W     |     R     |
| Haneen |     —     |     —     |     W     |
| Omar   |     W     |     —     |     —     |

---

## Additional Exercises

### Exercise 3: ACL & Capability Lists

**Scenario**

* **Cara**: read A, write B, execute C
* **Dave**: write A, read/write C, no access to B
* **Eli**: read B, execute C, no access to A

#### a) Access Control Lists

| **Object** | **ACL(object)**     |                           |                    |
| ---------- | ------------------- | ------------------------- | ------------------ |
| **A**      | Cara: `{read}`      |   Dave: `{write}`         |   Eli: `{}`        |
| **B**      | Cara: `{write}`     |   Dave: `{}`              |   Eli: `{read}`    |
| **C**      | Cara: `{execute}`   |   Dave: `{read, write}`   |   Eli: `{execute}` |

#### b) Capability Lists

| **Subject** | **CList(subject)** |                  |                      |
| ----------- | ------------------ | ---------------- | -------------------- |
| **Cara**    | A: `{read}`        |   B: `{write}`   |   C: `{execute}`     |
| **Dave**    | A: `{write}`       |   B: `{}`        |   C: `{read, write}` |
| **Eli**     | A: `{}`            |   B: `{read}`    |   C: `{execute}`     |

### Exercise 4: BLP & Biba on Four Subjects

**Subjects & Objects**

|        | **Sec. Level** | **Int. Level** |
| ------ | :------------: | :------------: |
| **P₁** |     Secret     |      High      |
| **P₂** |  Confidential  |     Medium     |
| **P₃** |   Top Secret   |       Low      |
| **P₄** |  Unclassified  |      High      |

|       | **Sec. Level** | **Int. Level** |
| ----- | :------------: | :------------: |
| **A** |  Confidential  |     Medium     |
| **B** |   Top Secret   |       Low      |
| **C** |  Unclassified  |      High      |
| **D** |     Secret     |     Medium     |

#### 1. Bell–LaPadula

|        | **A (C)** | **B (TS)** | **C (U)** | **D (S)** |
| :----: | :-------: | :--------: | :-------: | :-------: |
| **P₁** |     R     |      W     |     R     |    R, W   |
| **P₂** |    R, W   |      W     |     R     |    R, W   |
| **P₃** |     R     |    R, W    |    R, W   |     R     |
| **P₄** |     —     |      —     |    R, W   |     R     |

#### 2. Biba

|        | **A (M)** | **B (L)** | **C (H)** | **D (M)** |
| :----: | :-------: | :-------: | :-------: | :-------: |
| **P₁** |     —     |    R, W   |     R     |     —     |
| **P₂** |    R, W   |     —     |     R     |    R, W   |
| **P₃** |     R     |    R, W   |     R     |     R     |
| **P₄** |     —     |     —     |    R, W   |     —     |

### Exercise 5: Revocation Impact on ACL vs. Capabilities

**Scenario**

* Subjects S₁, S₂, S₃; Objects O₁, O₂.
* Initial rights:

  * S₁: R/W on O₁, R on O₂
  * S₂: W on O₁, R/W on O₂
  * S₃: R on O₁, – on O₂

#### 1. Initial ACLs and Capability Lists

**Access Control Lists (ACLs):**

| **Object** | **ACL(Object)**                                  |
| ---------- | ------------------------------------------------ |
| **O₁**     | S₁: `{read, write}`, S₂: `{write}`, S₃: `{read}` |
| **O₂**     | S₁: `{read}`, S₂: `{read, write}`, S₃: `{}`      |

**Capability Lists (CapLists):**

| **Subject** | **CapList(Subject)**               |
| ----------- | ---------------------------------- |
| **S₁**      | O₁: `{read, write}`, O₂: `{read}`  |
| **S₂**      | O₁: `{write}`, O₂: `{read, write}` |
| **S₃**      | O₁: `{read}`, O₂: `{}`             |

#### 2. Revoke All Access to O₁

**Updated ACLs:**

| **Object** | **ACL(Object)** |
| ---------- | --------------- |
| **O₁**     | —               |
| **O₂**     | Unchanged       |

**Updated CapLists:**

| **Subject** | **CapList(Subject)** |
| ----------- | -------------------- |
| **S₁**      | O₂: `{read}`         |
| **S₂**      | O₂: `{read, write}`  |
| **S₃**      | O₂: `{}`             |

#### 3. Revoke All Rights of S₂

**Updated ACLs:**

| **Object** | **ACL(Object)**                   |
| ---------- | --------------------------------- |
| **O₁**     | S₁: `{read, write}`, S₃: `{read}` |
| **O₂**     | S₁: `{read}`, S₃: `{}`            |

**Updated CapLists:**

| **Subject** | **CapList(Subject)**              |
| ----------- | --------------------------------- |
| **S₁**      | O₁: `{read, write}`, O₂: `{read}` |
| **S₂**      | —                                 |
| **S₃**      | O₁: `{read}`, O₂: `{}`            |

### Exercise 6: Mixed DAC/MAC Scenario

**Scenario**

* Subjects: U (Unclassified), C (Confidential), S (Secret).
* Objects: F (Confidential), G (Secret), H (Unclassified).
* **Discretionary rights** from ACL:

  * U: `{read}` on H
  * C: `{read, write}` on F
  * S: `{read}` on G, `{write}` on H

**Mandatory levels** (for BLP): same as confidentiality labels above.

#### a) Initial ACL Matrix

|       | **F (C)** | **G (S)** | **H (U)** |
| ----- | :-------: | :-------: | :-------: |
| **U** |     —     |     —     |     R     |
| **C** |    R, W   |     —     |     —     |
| **S** |     —     |     R     |     W     |

#### b) Apply Bell–LaPadula Rules

1. **No Read Up**: allow read only if *Lₛ ≥ Lₒ*.
2. **No Write Down**: allow write only if *Lₛ ≤ Lₒ*.

|           |    **F (C)**    |      **G (S)**     |              **H (U)**              |
| --------- | :-------------: | :----------------: | :---------------------------------: |
| **U (U)** |  — (no rights)  |          —         |               R (U≥U)               |
| **C (C)** |     R (C≥C)     | — (cannot read up) |           — (W★ forbidden)          |
| **S (S)** | — (no R in ACL) |       R (S≥S)      | W (S≤U ★ forbidden)? ✗ remove write |

* **Resulting effective rights**:

  * U: H: `{read}`
  * C: F: `{read}`
  * S: G: `{read}`

#### c) Combined DAC+MAC Matrix

|       | **F** | **G** | **H** |
| ----- | :---: | :---: | :---: |
| **U** |   —   |   —   |   R   |
| **C** |   R   |   —   |   —   |
| **S** |   —   |   R   |   —   |

---

### Exercise 7: Multi-level Security with Hybrid Rights

**Scenario**
Extend Exercise 4 subjects (P₁–P₄) and objects (A–D) by adding two rights: **execute (X)** and **append (A)**.

* **Execute** is treated like **read** for BLP (subject must have discretionary execute right plus satisfy read-level rule).
* **Append** is treated like **write**.

**Assumed discretionary rights** (ACL):

|        | **A (C)** | **B (TS)** |  **C (U)** | **D (S)** |
| ------ | :-------: | :--------: | :--------: | :-------: |
| **P₁** |  R, W, X  |    X, A    |    R, A    |  R, W, A  |
| **P₂** |    R, A   |   R, W, X  |      X     |    W, A   |
| **P₃** |     X     |    R, A    |    R, W    |  R, X, A  |
| **P₄** |     R     |      —     | R, W, X, A |     A     |

**Levels** same as Exercise 4.

#### a) Apply Bell–LaPadula (BLP)

* **No Read Up** & **No Write Down**, extended to X/A.

|             |  **A (C)**  |           **B (TS)**          |  **C (U)**  |              **D (S)**              |
| ----------- | :---------: | :---------------------------: | :---------: | :---------------------------------: |
| **P₁ (S)**  |   R, W, X   | — (C< TS → no read up; X✗,A✗) | R (S≥U), A✗ |               R, W, A               |
| **P₂ (C)**  |     R, A    |   — (C< TS → no read up X✗)   |   X (C≥U)   |                 W, A                |
| **P₃ (TS)** | R (TS≥C), X |            R, A, X            |   R, W, A   |             R, X (TS≥S)             |
| **P₄ (U)**  |      R      |               —               |  R, W, X, A | A (U ≤ S ✗ write-down) remove A → — |

#### b) Apply Biba

* **No Read Down** & **No Write Up** on same rights.

|            |             **A (M)**             |  **B (L)** |                   **C (H)**                  |     **D (M)**    |
| ---------- | :-------------------------------: | :--------: | :------------------------------------------: | :--------------: |
| **P₁ (H)** | X (H≤M ✗? remove X) → —, no R ⟶ — | X, A (H≥L) | R, W, X, A (H≤H) remove W Up? remove W → X,A |         —        |
| **P₂ (M)** |              R, W, A              | X, A (M≥L) |                    X (M≤H)                   |    R, A (M≥M)    |
| **P₃ (L)** |              R, X, A              |   R, A, X  |               — (no read-down)               |         —        |
| **P₄ (H)** |                 —                 |  X,A (H≥L) |                     X, A                     | — (no read-down) |

*(Students should verify enforcement of integrity policies.)*

**Scenario**

* Extend Exercise 4 by adding execute (X) and append (A) rights.
* Choose labels and determine which rights survive BLP & Biba.

---


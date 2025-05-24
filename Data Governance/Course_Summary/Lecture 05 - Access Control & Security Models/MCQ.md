### Question 1:  
*In an access control list (ACL), permissions are:*  

   A. Assigned per subject (subject-focused)  
   B. Assigned per object (object-focused)  
   C. Enforced by MAC (mandatory access control)  
   D. Always symmetric between read/write  

<details>  
<summary>Answer</summary>  
B. ACLs list subjects and their rights for each object, making them object-focused.  
</details>  

---  

### Question 2:  
*A capability list differs from an ACL in that it:*  

   A. Is object-focused  
   B. Lists rights per subject  
   C. Cannot represent write permissions  
   D. Is synonymous with RBAC  

<details>  
<summary>Answer</summary>  
B. Capability lists enumerate objects and rights for each subject, making them subject-focused.  
</details>  

---  

### Question 3:  
*The Bell–LaPadula “No Read Up” rule prevents a subject from:*  

   A. Reading objects at a lower security level  
   B. Reading objects at a higher security level  
   C. Writing to objects at a higher security level  
   D. Writing to objects at a lower security level  

<details>  
<summary>Answer</summary>  
B. “No Read Up” disallows reading data above a subject’s clearance.  
</details>  

---  

### Question 4:  
*Under Bell–LaPadula, which scenario is **allowed**?*  

   A. Subject level = Confidential, object level = Secret, action = read  
   B. Subject level = Secret, object level = Unclassified, action = write  
   C. Subject level = Low, object level = Medium, action = write  
   D. Subject level = Top Secret, object level = Secret, action = read  

<details>  
<summary>Answer</summary>  
D. Top Secret ≥ Secret allows read; write-down is forbidden but read-down is allowed.  
</details>  

---  

### Question 5:  
*The Biba “No Write Up” rule ensures:*  

   A. Subjects cannot write to objects with lower integrity  
   B. Subjects cannot write to objects with higher integrity  
   C. Subjects cannot read down  
   D. Mandatory access control is bypassed  

<details>  
<summary>Answer</summary>  
B. It prevents low-integrity subjects from contaminating high-integrity objects.  
</details>  

---  

### Question 6:  
*Under Biba, a subject with Medium integrity may read:*  

   A. A High-integrity object  
   B. A Low-integrity object  
   C. Both High and Low  
   D. Neither  

<details>  
<summary>Answer</summary>  
A. No Read Down means only read objects of equal or higher integrity.  
</details>  

---  

### Question 7:  
*Given S₁ (Low), S₂ (High), O₃ (Low) in Bell–LaPadula, which right is granted based solely on mandatory rules?*  

   A. S₁ reads O₃  
   B. S₁ writes O₃  
   C. S₂ reads O₃  
   D. S₂ writes O₃  

<details>  
<summary>Answer</summary>  
A. Low ≥ Low allows read; write requires discretionary permission.  
</details>  

---  

### Question 8:  
*Revoking all access to object O₁ in an ACL will:*  

   A. Remove O₁ entries from ACL only  
   B. Remove O₁ from all subjects’ capability lists  
   C. Both A and B  
   D. Neither  

<details>  
<summary>Answer</summary>  
A. ACL revocation alters only the object’s ACL; capabilities remain until explicitly updated.  
</details>  

---  

### Question 9:  
*Which of the following structures is **subject-focused** and stores for each user a list of objects and allowed operations?*  

   A. Access Control List  
   B. Capability List  
   C. Security label  
   D. Access Control Matrix  

<details>  
<summary>Answer</summary>  
B. Capability lists enumerate, per subject, the objects and permitted operations.  
</details>  

---  

### Question 10:  
*Revoking all access rights for a specific user is generally easier in:*  

   A. ACL-based systems  
   B. Capability-based systems  
   C. Both equally  
   D. Neither  

<details>  
<summary>Answer</summary>  
A. In ACLs, remove the user from each object’s ACL; capabilities require token invalidation.  
</details>  

---  

### Question 11:  
*Under Bell–LaPadula, a Secret-level subject wants to write to a Secret-level object. This action is:*  

   A. Allowed (discretionary and mandatory conditions satisfied)  
   B. Denied by simple security  
   C. Denied by star property  
   D. Allowed only if discretionary write is granted  

<details>  
<summary>Answer</summary>  
A. Same-level write is allowed under the star-property and discretionary rights.  
</details>  

---  

### Question 12:  
*A subject with Low integrity tries to read a Medium-integrity object. According to Biba, this is:*  

   A. Allowed  
   B. Denied  
   C. Only allowed if discretionary read is granted  
   D. Up to administrator discretion  

<details>  
<summary>Answer</summary>  
A. No Read Down prohibits reading lower; reading higher (Low→Medium) is allowed.  
</details>  

---  

### Question 13:  
*The Access Control Matrix is most naturally implemented by:*  

   A. A global table in memory  
   B. Distributing rows to subjects (capabilities)  
   C. Distributing columns to objects (ACLs)  
   D. Both B and C  

<details>  
<summary>Answer</summary>  
D. The full matrix can be represented via ACLs (columns) or capabilities (rows).  
</details>  

---  

### Question 14:  
*In a combined DAC+MAC environment, if discretionary rights allow a read but mandatory BLP denies it, the read:*  

   A. Is allowed  
   B. Is denied  
   C. Logged and deferred  
   D. Becomes discretionary only  

<details>  
<summary>Answer</summary>  
B. Both discretionary and mandatory checks must pass for access to be granted.  
</details>  

---  

### Question 15:  
*In the extended BLP model, treating execute like read means:*  

   A. Subject must satisfy No Read Up to execute  
   B. Execute always bypasses security levels  
   C. Execute is governed by No Write Down  
   D. Execute is not discretionary  

<details>  
<summary>Answer</summary>  
A. Execute is controlled like read, so the No Read Up rule applies.  
</details>  

---

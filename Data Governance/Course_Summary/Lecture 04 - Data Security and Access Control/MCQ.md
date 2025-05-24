### Question 1:  
*What is the primary goal of access controls in data governance?*  

   A. To maximize data sharing across the organization  
   B. To restrict and control user actions and data visibility  
   C. To automate all user permissions  
   D. To eliminate all administrative overhead  

<details>  
<summary>Answer</summary>  
B. Access controls ensure only authorized individuals can access or modify data, restricting user actions and visibility.  
</details>  

---

### Question 2:  
*Which principle ensures users only receive the minimum permissions necessary for their role?*  

   A. Defense in Depth  
   B. Principle of Least Privilege  
   C. Zero Trust  
   D. Separation of Duties  

<details>  
<summary>Answer</summary>  
B. The Principle of Least Privilege grants users only the rights needed to perform their tasks.  
</details>  

---

### Question 3:  
*Which of the following is _not_ a standard access control model covered in the lecture?*  

   A. Discretionary Access Control (DAC)  
   B. Token-Based Access Control (TBAC)  
   C. Mandatory Access Control (MAC)  
   D. Role-Based Access Control (RBAC)  

<details>  
<summary>Answer</summary>  
B. TBAC was not mentioned; the lecture listed DAC, MAC, RBAC, ABAC, rule-based, identity-based, history-based, and AI-driven models.  
</details>  

---

### Question 4:  
*In DAC, who decides which users can access a given data object?*  

   A. System Administrator  
   B. Data Owner  
   C. Security Administrator  
   D. Role Manager  

<details>  
<summary>Answer</summary>  
B. In Discretionary Access Control, the data owner creates and manages the ACL for their objects.  
</details>  

---

### Question 5:  
*Which example illustrates DAC in everyday applications?*  

   A. Military classification labels  
   B. WordPress user roles  
   C. Google Docs sharing settings  
   D. Firewall rule sets  

<details>  
<summary>Answer</summary>  
C. Google Docs allows the document owner to grant or revoke access, a classic DAC scenario.  
</details>  

---

### Question 6:  
*A disadvantage of DAC is that:*  

   A. It is too centralized  
   B. Owners cannot share data easily  
   C. There is no central authority, making it hard to manage at scale  
   D. It requires mandatory security labels  

<details>  
<summary>Answer</summary>  
C. Lack of central control in DAC can complicate management in large organizations.  
</details>  

---

### Question 7:  
*What characteristic defines Mandatory Access Control (MAC)?*  

   A. Data owners set permissions via ACLs  
   B. Users inherit permissions from roles  
   C. Administrators centrally assign labels and clearances that cannot be changed by users  
   D. Access is granted based on user and resource attributes  

<details>  
<summary>Answer</summary>  
C. MAC uses a centralized model where only administrators assign and enforce labels.  
</details>  

---

### Question 8:  
*Which environment is MAC most suited for?*  

   A. Small startups  
   B. Social media platforms  
   C. Government and military organizations  
   D. Peer-to-peer networks  

<details>  
<summary>Answer</summary>  
C. MAC’s high security and centralized control fit government, military, and law enforcement.  
</details>  

---

### Question 9:  
*In MAC, which of these labels might be used?*  

   A. Reader, Writer, Editor  
   B. Public, Confidential, Secret, Top Secret  
   C. Guest, User, Admin  
   D. Bronze, Silver, Gold  

<details>  
<summary>Answer</summary>  
B. MAC commonly uses confidentiality levels like Public, Confidential, Secret, Top Secret.  
</details>  

---

### Question 10:  
*Which is _not_ a pro of MAC?*  

   A. High data protection  
   B. Users cannot declassify data  
   C. Low administrative complexity  
   D. Centralized control  

<details>  
<summary>Answer</summary>  
C. MAC is complex to set up and maintain, so administrative complexity is high, not low.  
</details>  

---

### Question 11:  
*Role-Based Access Control (RBAC) primarily assigns permissions based on:*  

   A. User attributes (e.g., location, time)  
   B. Discretionary lists owned by users  
   C. System-generated rules  
   D. User roles within the organization  

<details>  
<summary>Answer</summary>  
D. RBAC grants permissions by assigning users to roles that have defined rights.  
</details>  

---

### Question 12:  
*Which rule is *not* part of Core RBAC?*  

   A. Role Assignment  
   B. Authority  
   C. Permission Grants  
   D. Attribute Evaluation  

<details>  
<summary>Answer</summary>  
D. Core RBAC rules are Role Assignment, Authority, and Permission Grants; attribute evaluation is ABAC.  
</details>  

---

### Question 13:  
*What does Hierarchical RBAC allow?*  

   A. Roles to be dynamically assigned per session  
   B. Roles organized so higher roles inherit permissions of lower ones  
   C. Users to bypass approval processes  
   D. Separation of duties constraints  

<details>  
<summary>Answer</summary>  
B. Hierarchical RBAC structures roles in a hierarchy, with inheritance of lower-level permissions.  
</details>  

---

### Question 14:  
*Static Separation of Duty (SSD) in Constrained RBAC means:*  

   A. Opposing roles can be assumed in different sessions  
   B. A user cannot hold two mutually exclusive roles concurrently  
   C. Users can self-assign roles temporarily  
   D. Permissions change based on system load  

<details>  
<summary>Answer</summary>  
B. SSD prevents one user from holding conflicting roles at the same time.  
</details>  

---

### Question 15:  
*Which implementation step is _first_ in deploying RBAC?*  

   A. Testing and Validation  
   B. Deployment and Monitoring  
   C. Assessment and Planning  
   D. Design and Development  

<details>  
<summary>Answer</summary>  
C. You must assess the current state and plan roles/permissions before design.  
</details>  

---

### Question 16:  
*A key advantage of RBAC is:*  

   A. It requires no administrative setup  
   B. It streamlines permission management by grouping rights into roles  
   C. It provides the most granular, attribute-based control  
   D. It enforces mandatory labels on all data  

<details>  
<summary>Answer</summary>  
B. RBAC reduces overhead by assigning permissions to roles rather than individual users.  
</details>  

---

### Question 17:  
*Attribute-Based Access Control (ABAC) decisions are based on:*  

   A. Predefined user roles only  
   B. Data owner discretion  
   C. A combination of user, resource, action, and environmental attributes  
   D. Historical access logs  

<details>  
<summary>Answer</summary>  
C. ABAC evaluates attributes of users, resources, actions, and context against policies.  
</details>  

---

### Question 18:  
*Which is an example of an attribute in ABAC?*  

   A. User’s department  
   B. Confidentiality label  
   C. ACL entry  
   D. Role assignment  

<details>  
<summary>Answer</summary>  
A. Department is a user attribute; labels and ACLs belong to other models.  
</details>  

---

### Question 19:  
*A major challenge of ABAC implementation is:*  

   A. Lack of available policies  
   B. Simple, inflexible design  
   C. Complexity in defining and assigning numerous attributes and policies  
   D. Too few customization options  

<details>  
<summary>Answer</summary>  
C. ABAC requires defining many attributes, assigning them, and building a policy engine.  
</details>  

---

### Question 20:  
*Compared to RBAC, ABAC is typically:*  

   A. Less granular  
   B. Easier to implement  
   C. More dynamic and fine-grained  
   D. Based solely on user roles  

<details>  
<summary>Answer</summary>  
C. ABAC’s use of multiple attributes allows more dynamic, fine-grained control.  
</details>  

---

### Question 21:  
*Which scenario suggests choosing ABAC over RBAC?*  

   A. A small team with static roles  
   B. A large, geographically distributed organization needing context-aware policies  
   C. A single-site company with fixed departments  
   D. A volunteer group with few resources for implementation  

<details>  
<summary>Answer</summary>  
B. ABAC suits large, dynamic environments requiring granular, context-aware access.  
</details>  

---

### Question 22:  
*Which is _not_ one of the ten challenges in managing access permissions?*  

   A. Role Explosion  
   B. Granularity  
   C. Infinite Privilege  
   D. Compliance and Auditing  

<details>  
<summary>Answer</summary>  
C. “Infinite Privilege” is not listed; challenges include complexity, granularity, role explosion, etc.  
</details>  

---

### Question 23:  
*History-Based Access Control bases decisions on:*  

   A. Current user attributes  
   B. Data owner discretion  
   C. Past user behavior or transaction logs  
   D. Predefined security labels  

<details>  
<summary>Answer</summary>  
C. History-based models use recorded actions and logs to inform access decisions.  
</details>  

---

### Question 24:  
*AI-Driven Identity Management in access control refers to:*  

   A. Static ACLs created by data owners  
   B. Machine-learning systems that adaptively grant or revoke access  
   C. Enforcing zero trust via mandatory labels  
   D. Role hierarchies defined in advance  

<details>  
<summary>Answer</summary>  
B. AI-driven systems use ML to analyze identity and behavior for dynamic access decisions.  
</details>  

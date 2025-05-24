### Question 1:  
*What is the primary purpose of **Data Lineage**?*  

   A. Encrypt data at rest  
   B. Track origin, movement, and transformations of data  
   C. Visualize data trends over time  
   D. Manage user access rights  

<details>  
<summary>Answer</summary>  
B. Data lineage is specifically about tracing data’s source, flow, and transformations from origin to destination.  
</details>  

---

### Question 2:  
*Which of the following is NOT listed as a popular data lineage tool?*  

   A. Collibra  
   B. Informatica Axon  
   C. Apache Atlas  
   D. Tableau  

<details>  
<summary>Answer</summary>  
D. Tableau is a BI/visualization tool; Collibra, Informatica Axon, and Apache Atlas are data lineage tools.  
</details>  

---

### Question 3:  
*Which task is NOT a core Data Lineage task mentioned in the lecture?*  

   A. Identifying data field changes  
   B. Classifying sensitive data sets  
   C. Encrypting data in transit  
   D. Troubleshooting data errors  

<details>  
<summary>Answer</summary>  
C. Encrypting data in transit is a security task, not a lineage task.  
</details>  

---

### Question 4:  
*In “Lineage by Data Tagging,” what is the main challenge?*  

   A. Performance overhead  
   B. Designing and enforcing consistent tags  
   C. Lack of metadata collected  
   D. Requires no system integration  

<details>  
<summary>Answer</summary>  
B. The difficulty lies in creating and uniformly applying a standard tagging taxonomy.  
</details>  

---

### Question 5:  
*Self-contained lineage is characterized as:*  

   A. Capturing cross-system transformations  
   B. Documenting history within a single system only  
   C. Inferring lineage from metadata patterns  
   D. Automating logic parsing across pipelines  

<details>  
<summary>Answer</summary>  
B. Self-contained lineage only covers history within one system and does not span multiple systems.  
</details>  

---

### Question 6:  
*Lineage by Parsing is best described as:*  

   A. Manual tagging of each data element  
   B. Automation that reads code/queries to map transformations  
   C. Simple pattern matching on file names  
   D. Using spreadsheets to track data flow  

<details>  
<summary>Answer</summary>  
B. Parsing uses software to understand processing logic in code, queries, or ETL.  
</details>  

---

### Question 7:  
*Pattern-based lineage relies primarily on:*  

   A. System logs  
   B. Metadata pattern recognition  
   C. Manual documentation  
   D. Real-time event streaming  

<details>  
<summary>Answer</summary>  
B. It infers lineage by detecting patterns in metadata and data values.  
</details>  

---

### Question 8:  
*Which lineage perspective traces data from destination back to its origin?*  

   A. Forward Lineage  
   B. Reverse Lineage  
   C. Vertical Lineage  
   D. Horizontal Lineage  

<details>  
<summary>Answer</summary>  
B. Reverse lineage follows the path from destination back to the source.  
</details>  

---

### Question 9:  
*Vertical Lineage captures relationships between:*  

   A. Systems at the same architectural layer  
   B. Tables in different databases  
   C. Hierarchical data elements (e.g., columns within tables)  
   D. Files across network shares  

<details>  
<summary>Answer</summary>  
C. Vertical lineage maps hierarchical dependencies within a dataset.  
</details>  

---

### Question 10:  
*Horizontal Lineage is most useful for understanding:*  

   A. Field-level transformations  
   B. Data sharing across systems at the same layer  
   C. Table-to-column mappings  
   D. Root-cause impact analysis  

<details>  
<summary>Answer</summary>  
B. It shows how data flows laterally across applications or processes.  
</details>  

---

### Question 11:  
*Column-level lineage differs from table-level lineage by:*  

   A. Capturing only schema changes  
   B. Detailing transformations of individual fields  
   C. Mapping only file-level movements  
   D. Excluding metadata  

<details>  
<summary>Answer</summary>  
B. Column-level lineage drills down to each field’s origin, transformation, and destination.  
</details>  

---

### Question 12:  
*In the British Airways breach example, data lineage helped to:*  

   A. Encrypt user passwords  
   B. Trace the breach to a malicious website script  
   C. Migrate data to a new platform  
   D. Anonymize customer records  

<details>  
<summary>Answer</summary>  
B. Lineage traced the breach’s origin to the malicious script, enabling quick remediation.  
</details>  

---

### Question 13:  
*Standard Chartered used data lineage primarily to:*  

   A. Speed up customer onboarding  
   B. Track transactions globally for regulatory compliance  
   C. Reduce IT infrastructure costs  
   D. Create marketing dashboards  

<details>  
<summary>Answer</summary>  
B. They needed end-to-end trace of transactions to comply with varied regional regulations.  
</details>  

---

### Question 14:  
*Which company built a lineage system to analyze ATM transaction data accurately?*  

   A. Spiral Universe  
   B. NCR Corporation  
   C. Air France  
   D. Georgia DOT  

<details>  
<summary>Answer</summary>  
B. NCR Corporation’s traditional warehouse couldn't meet accuracy needs, so they built lineage.  
</details>  

---

### Question 15:  
*Data lineage in auditing & compliance enables organizations to:*  

   A. Automate data collection  
   B. Demonstrate masking and privacy steps in regulatory audits  
   C. Optimize query performance  
   D. Store backup copies of data  

<details>  
<summary>Answer</summary>  
B. Lineage shows how and where data was masked or virtualized, essential for audits.  
</details>  

---

### Question 16:  
*Which use case describes proactively detecting downstream breakages before code changes?*  

   A. Root-cause analysis  
   B. Impact analysis  
   C. Data modeling  
   D. Data cataloging  

<details>  
<summary>Answer</summary>  
B. Impact analysis uses lineage to simulate changes and detect potential breakages ahead of deployment.  
</details>  

---

### Question 17:  
*A key challenge in maintaining data lineage is:*  

   A. Lack of open-source tools  
   B. Continuously updating lineage as systems evolve  
   C. Data encryption standards  
   D. User interface design  

<details>  
<summary>Answer</summary>  
B. As data pipelines and systems change, lineage must be updated via profiling and metadata management.  
</details>  

---

### Question 18:  
*Integrating lineage into a data catalog improves:*  

   A. Data encryption strength  
   B. Discoverability and context of data assets  
   C. Real-time streaming performance  
   D. Network throughput  

<details>  
<summary>Answer</summary>  
B. Embedding lineage in the catalog links sources, owners, definitions, and quality metrics for better discovery.  
</details>  

---

### Question 19:  
*Linking lineage to data quality metrics enables:*  

   A. Automated table backups  
   B. Real-time compliance certification  
   C. Tracking the impact of quality issues on downstream processes  
   D. Faster report rendering  

<details>  
<summary>Answer</summary>  
C. It shows where quality checks should be applied and how quality changes affect consumers.  
</details>  

---

### Question 20:  
*In change management, data lineage helps to:*  

   A. Encrypt data in transit  
   B. Evaluate downstream dependencies and risks before implementing changes  
   C. Automatically refactor ETL code  
   D. Remove obsolete datasets  

<details>  
<summary>Answer</summary>  
B. Lineage analysis reveals which downstream assets a change will impact, informing decision-making.  
</details>  

### Question 1:  
*Which of the following best defines **Data Quality**?*  

   A. The volume of data generated over time  
   B. The fitness of data for its intended use  
   C. The speed at which data is processed  
   D. The number of data sources integrated  

<details>  
<summary>Answer</summary>  
B. Data Quality is defined as the fitness of data for its intended use, encompassing dimensions like accuracy and completeness.  
</details>  

---

### Question 2:  
*Which is *not* one of the five key dimensions of Data Quality?*  

   A. Accuracy  
   B. Relevance  
   C. Security  
   D. Timeliness  

<details>  
<summary>Answer</summary>  
C. The five dimensions are Accuracy, Completeness, Consistency, Timeliness, and Relevance; Security is important but not a primary quality dimension.  
</details>  

---

### Question 3:  
*What is the primary goal of **Data Quality Management**?*  

   A. To increase data storage capacity  
   B. To ensure data meets desired quality standards  
   C. To develop new data formats  
   D. To reduce data volume  

<details>  
<summary>Answer</summary>  
B. Data Quality Management aims to ensure that data satisfies quality requirements, supporting reliable insights and decisions.  
</details>  

---

### Question 4:  
*Which activity is part of **Data Profiling**?*  

   A. Encrypting sensitive fields  
   B. Collecting descriptive statistics (min, max, count, sum)  
   C. Designing new database schemas  
   D. Monitoring system performance  

<details>  
<summary>Answer</summary>  
B. Data Profiling includes gathering descriptive statistics to understand data distributions and detect issues.  
</details>  

---

### Question 5:  
*In Data Profiling, **Structure Discovery** involves:*  

   A. Detecting functional dependencies  
   B. Validating correct data formats and computing basic statistics  
   C. Identifying outliers and anomalies  
   D. Discovering metadata accuracy  

<details>  
<summary>Answer</summary>  
B. Structure Discovery focuses on format consistency (e.g., date patterns) and basic statistical measures like min, max, mean.  
</details>  

---

### Question 6:  
*An example of a **Content Discovery** issue is:*  

   A. Discovering that the `Date` field uses both `YYYY-MM-DD` and `MM/DD/YYYY` formats  
   B. Detecting that the `State` field contains both “CA” and “California” entries  
   C. Identifying foreign-key relationships between tables  
   D. Calculating the mean and median of transaction amounts  

<details>  
<summary>Answer</summary>  
B. Content Discovery examines individual values for inconsistencies, such as mixed state abbreviations and full names.  
</details>  

---

### Question 7:  
*Relationship Discovery in profiling helps primarily to:*  

   A. Compute summary statistics  
   B. Visualize data distributions  
   C. Identify key relationships for schema design and joins  
   D. Clean corrupt data  

<details>  
<summary>Answer</summary>  
C. Relationship Discovery uncovers how tables or spreadsheet cells are related, guiding schema design and ETL joins.  
</details>  

---

### Question 8:  
*Which of the following is *not* a benefit of Data Profiling?*  

   A. Predictive decision-making  
   B. Proactive crisis management  
   C. Real-time data streaming  
   D. Identifying quality problems  

<details>  
<summary>Answer</summary>  
C. Real-time data streaming is a technology capability, not a direct benefit of data profiling.  
</details>  

---

### Question 9:  
*Which technique is used to understand the central tendency and variability of a dataset?*  

   A. Data completeness checks  
   B. Summary statistics  
   C. Data dependency analysis  
   D. Relationship discovery  

<details>  
<summary>Answer</summary>  
B. Summary statistics (mean, median, standard deviation) reveal central tendency and spread.  
</details>  

---

### Question 10:  
*Which visualization is commonly employed in **Data Distribution Analysis**?*  

   A. Pie charts  
   B. Histograms  
   C. Sankey diagrams  
   D. Heat maps  

<details>  
<summary>Answer</summary>  
B. Histograms and box plots are standard tools for examining distributions and detecting outliers.  
</details>  

---

### Question 11:  
*Data Completeness checks involve:*  

   A. Detecting duplicate records  
   B. Calculating percentage of missing values  
   C. Exploring functional dependencies  
   D. Validating data types  

<details>  
<summary>Answer</summary>  
B. Completeness analysis measures how many values are missing in each variable.  
</details>  

---

### Question 12:  
*Identifying duplicate customer records falls under which technique?*  

   A. Data uniqueness  
   B. Data validation  
   C. Data transformation  
   D. Structure discovery  

<details>  
<summary>Answer</summary>  
A. Data uniqueness checks are focused on detecting duplicate records.  
</details>  

---

### Question 13:  
*Which is a true statement about **Data Cleaning**?*  

   A. It always increases dataset size  
   B. It converts data from one format to another  
   C. It fixes or removes incorrect and improperly formatted data  
   D. It is identical to Data Validation  

<details>  
<summary>Answer</summary>  
C. Data Cleaning addresses incorrect, corrupted, duplicate, or incomplete data; transformation handles format conversion.  
</details>  

---

### Question 14:  
*Step 2 of the Data Cleaning process involves:*  

   A. Filtering unwanted outliers  
   B. Fixing structural errors (typos, inconsistent naming)  
   C. Removing duplicate observations  
   D. Validating cleaned data  

<details>  
<summary>Answer</summary>  
B. Structural errors are naming or formatting inconsistencies corrected in Step 2.  
</details>  

---

### Question 15:  
*Which approach is *not* a valid strategy for handling missing data?*  

   A. Dropping observations with missing values  
   B. Imputing missing values based on other observations  
   C. Encrypting missing values  
   D. Altering usage to navigate nulls  

<details>  
<summary>Answer</summary>  
C. Encrypting missing data does not resolve the absence of values; dropping or imputing are standard strategies.  
</details>  

---

### Question 16:  
*Data Validation ensures that data:*  

   A. Is stored in cloud-based systems  
   B. Meets quality standards and business rules  
   C. Is visualized in dashboards  
   D. Encrypts at-rest data  

<details>  
<summary>Answer</summary>  
B. Validation checks confirm data accuracy, consistency, and compliance with rules.  
</details>  

---

### Question 17:  
*The first step in Data Validation is to:*  

   A. Perform Data Profiling  
   B. Define Data Validation Requirements  
   C. Implement Validation Checks  
   D. Audit and document procedures  

<details>  
<summary>Answer</summary>  
B. Gathering requirements from stakeholders defines scope and criteria before profiling.  
</details>  

---

### Question 18:  
*Establishing data quality rules for **uniqueness**, **validity**, and **timeliness** occurs in which validation step?*  

   A. Step 2: Data Profiling  
   B. Step 3: Establish Data Quality Rules and Expectations  
   C. Step 5: Perform Data Validation  
   D. Step 7: Audit and Documentation  

<details>  
<summary>Answer</summary>  
B. Step 3 formalizes quality rules applied in subsequent validation checks.  
</details>  

---

### Question 19:  
*Continuous Improvement in the Validation process refers to:*  

   A. Automating all validation checks without human oversight  
   B. Periodically refining validation based on feedback and evolving needs  
   C. Archiving all validation scripts indefinitely  
   D. Disabling validation for legacy data  

<details>  
<summary>Answer</summary>  
B. Continuous improvement adapts processes based on lessons learned and changing requirements.  
</details>  

---

### Question 20:  
*Which tool is *not* explicitly mentioned for real-time Data Monitoring?*  

   A. Apache Kafka  
   B. Splunk  
   C. Elasticsearch  
   D. Tableau  

<details>  
<summary>Answer</summary>  
D. Kafka, Splunk, and Elasticsearch are named; Tableau is a BI tool, not a monitoring platform.  
</details>  

---

### Question 21:  
*Defining KPIs and acceptable ranges for data quality metrics is part of:*  

   A. Data Profiling  
   B. Data Cleaning  
   C. Implementing Monitoring Metrics  
   D. Setting Monitoring Metrics and Thresholds  

<details>  
<summary>Answer</summary>  
D. Step 4 of monitoring sets metrics and thresholds for alerting and quality measurement.  
</details>  

---

### Question 22:  
*Monitoring data flows to detect bottlenecks and vulnerabilities falls under which step?*  

   A. Step 5: Set Up Infrastructure  
   B. Step 6: Monitor Data Flows and Processes  
   C. Step 7: Analyze and Respond to Alerts  
   D. Step 8: Iterate and Improve  

<details>  
<summary>Answer</summary>  
B. Continuous observation of pipelines is Step 6 in the monitoring process.  
</details>  

---

### Question 23:  
*Which dimension of data quality does “average time taken to update data after an event occurs” measure?*  

   A. Consistency  
   B. Accuracy  
   C. Timeliness  
   D. Completeness  

<details>  
<summary>Answer</summary>  
C. Timeliness is quantified by the latency between an event and its data update.  
</details>  

---

### Question 24:  
*“Percentage of data records that conform to predefined rules or constraints” is the metric for:*  

   A. Integrity  
   B. Validity  
   C. Relevance  
   D. Precision  

<details>  
<summary>Answer</summary>  
B. Validity measures the conformity of data records to predefined rules and constraints.  
</details>  

---

### Question 25:  
*Performing root-cause analysis and updating governance policies to prevent recurrence of issues corresponds to which metric implementation step?*  

   A. Step 3: Implement Data Quality Assessment Processes  
   B. Step 5: Monitor  
   C. Step 7: Take Corrective Actions  
   D. Step 8: Continuously Improve  

<details>  
<summary>Answer</summary>  
C. Step 7 involves corrective actions, including root-cause analysis and policy updates to address quality issues.  
</details>  

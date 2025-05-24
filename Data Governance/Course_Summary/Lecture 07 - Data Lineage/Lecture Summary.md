## Definition & Overview

* **Data Lineage**: The ability to track and trace the origin, movement, and transformation of data from its source to its destination.
* Provides:

  * **Visibility** into how data flows through systems, processes, and transformations.
  * **Understanding** of data provenance and processing steps.
* Popular tools: `Collibra`, `Informatica Axon`, `Apache Atlas`, `IBM InfoSphere`.

## Key Data Lineage Tasks

* Identify changes in data fields (e.g., renaming, deleting, editing).
* Classify sensitive data sets for restricted access.
* Troubleshoot data errors or mis-entries.
* Verify data accuracy and completeness.

## Approaches to Capturing Lineage

### Lineage by Data Tagging

* Add metadata tags to business data to record source, transformations, and usage.
* Append new tags as data passes through successive systems.
* Challenges:

  * Designing a consistent tagging taxonomy.
  * Ensuring uniform application across all data assets.

### Self-Contained Lineage

* Document the complete history of a data set within a single system or entity.
* Advantages:

  * Simple, quick implementation.
* Limitations:

  * Does not capture cross-system data flows or transformations.

### Lineage by Parsing

* Use software and automation to parse the logic used in data processing.
* Tracks data as it moves across systems.
* Requires:

  * Advanced understanding of ETL tools, programming languages, and system architectures.

### Pattern-Based Lineage

* Infer lineage from patterns in metadata and data values.
* Flexible across any system or technology.
* May miss complex or nuanced transformations due to its simplistic approach.

## Types of Lineage Perspectives

### Forward vs. Reverse

* **Forward Lineage**: Trace data flow from source → downstream systems, applications, or reports.
* **Reverse Lineage**: Trace data flow from destination → original source, identifying upstream dependencies.

### Vertical vs. Horizontal

* **Vertical Lineage**: Captures hierarchical relationships among data elements (e.g., columns→tables).
* **Horizontal Lineage**: Captures data flow across systems at the same architectural layer without strict source→destination ordering.

### Table-Level vs. Column-Level

* **Table-Level Lineage**: Maps data dependencies at the table or dataset level.
* **Column-Level Lineage**: Details the origin, transformations, and destinations of individual fields.

## Real-World Use Cases

### British Airways

* **2018 Breach**: 380,000 customer records exposed.
* **Application**: Traced breach to a malicious website script; enabled rapid remediation.

### Financial Services

* **Standard Chartered**:

  * Traced every transaction globally to ensure compliance with varied regional regulations.
* **Slovenská Sporiteľňa**:

  * Automated security audits and permissions to reduce manual effort and costs.

### Technology

* **NCR Corporation**:

  * Built lineage to analyze ATM and kiosk transactions with high accuracy.
* **Spiral Universe**:

  * Enabled rapid report generation for educators and real-time parent access.

### Marketing & Media

* **Sky Deutschland**:

  * Used lineage for instant content authorization and subscription/profile management.
* **Allant Group**:

  * Adopted lineage to handle diverse data formats, improve QA, and accelerate deliverables.

### Government

* **Georgia Department of Transportation**:

  * Integrated lineage into a Variable Speed Limit pilot for safety and efficiency.
* **Gendarmerie Nationale**:

  * Unified multiple security databases for rapid suspect cross-checking ahead of Euro 2016.

### Transportation

* **Air France**:

  * Tracked 2.5 million daily web visitors’ data for personalized advertising while maintaining GDPR compliance.
* **Keolis**:

  * Consolidated 2.5 million daily messages from 70+ systems into a single lineage-enabled platform.

## Use Cases & Benefits

### Issue Resolution & Debugging

* **Root-Cause Analysis**: Trace data anomalies (e.g., null values, formatting errors) back to source.
* **Impact Analysis**: Pre-commit checks detect downstream breakages, reducing debugging efforts.

### Data Modeling

* Reveal hidden relationships and dependencies among data elements.
* Provide real-time flow context to refine data models.

### Data Quality & Reliability

* Track transformations, enrichments, and backfills to assess data trustworthiness.
* Link lineage to quality metrics for continuous monitoring.

### Data Movement & Transformations

* Capture aggregations, joins, filters, and calculations across pipelines.
* Enhance compliance and integration insights.

### Auditing & Compliance

* Demonstrate masking, virtualization, and privacy controls for regulatory audits (e.g., GDPR, CCPA).
* Prove data integrity, accuracy, and privacy throughout its lifecycle.

## Challenges & Considerations

* **Data Complexity**: Distributed systems, big-data platforms, hybrid clouds complicate end-to-end visibility.
* **Transformation Tracking**: Machine-learning models and complex ETL processes require specialized techniques.
* **Lineage Maintenance**: Continuous updates via profiling, metadata management, and documentation are essential as systems evolve.

## Integrating Lineage into Data Governance

### Data Catalog & Metadata Management

* Embed lineage information in a central catalog.
* Link to sources, owners, definitions, and quality metrics.

### Data Quality Management

* Tie lineage points to quality rules and dashboards.
* Monitor trends and identify improvement areas.

### Data Privacy & Compliance

* Associate lineage with classification and sensitivity labels.
* Support privacy-impact assessments and compliance reporting.

### Data Access & Security

* Align lineage with role-based access controls.
* Audit access patterns based on data sensitivity and lineage.

### Change Management & Impact Analysis

* Evaluate downstream dependencies and risks before implementing changes.
* Incorporate lineage into change-management workflows.

### Data Stewardship & Ownership

* Use lineage to assign stewards and define ownership responsibilities.
* Ensure accountability for data accuracy, completeness, and governance.

### Governance Reporting & Dashboards

* Generate visuals of lineage coverage, data quality, compliance, and stewardship.
* Provide stakeholders with actionable insights into governance effectiveness.

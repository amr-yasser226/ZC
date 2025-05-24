## Data Security and Access Control

* **Access Controls**: Tools to restrict and control user actions and data visibility
* Ensures only **authorized** individuals/entities can access, modify, or use data
* Employs the **Principle of Least Privilege** (`PoLP`) to grant minimal necessary rights based on roles

## Types of Data Access Control

* **Discretionary Access Control** (`DAC`)
* **Mandatory Access Control** (`MAC`)
* **Role-Based Access Control** (`RBAC`)
* **Attribute-Based Access Control** (`ABAC`)
* **Rule-Based Access Control**
* **Identity-Based Access Control**
* **History-Based Access Control**
* **AI-Driven Identity Management**

## Discretionary Access Control (DAC)

* **Definition**: Data owner creates and manages **Access Control Lists** (`ACLs`)
* **Mechanism**:

  * Owner assigns privileges to users
  * Users access data according to owner-defined rights
* **Examples**:

  * Social media privacy settings
  * Sharing in Google Docs/Sheets
  * Mobile app permissions granted by users
* **Pros**:

  * Simple, flexible, fine-grained, user-friendly
  * Ideal for small to medium organizations
* **Cons**:

  * Least restrictive—owners may over-share
  * Decentralized control complicates large-scale management

## Mandatory Access Control (MAC)

* **Definition**: Centralized model with administrator-enforced classifications
* **Mechanism**:

  * Admins label users/resources (e.g., **Public**, **Confidential**, **Secret**, **Top Secret**)
  * Operating system enforces access; users cannot alter labels
  * Implements **zero-trust**, **need-to-know** principles
* **Use Cases**:

  * Government, military, law enforcement
  * Regulated industries (banking, insurance)
  * Database object protection (tables, views, procedures)
* **Pros**:

  * Centralized control; high data protection
  * Users cannot declassify or improperly share data
  * Reduces over-privilege errors
* **Cons**:

  * Complex initial setup; ongoing maintenance
  * Inflexible—users must request new access
  * Often combined with other models

## Role-Based Access Control (RBAC)

* **Definition**: Permissions assigned to **roles**; users inherit rights via roles
* **Core Rules**:

  1. **Role Assignment**: Users must be assigned roles before exercising privileges
  2. **Authority**: Active role must authorize requested actions
  3. **Permission Grants**: Privileges used only if role permits
* **Variants**:

  * **Hierarchical RBAC**: Roles organized in a hierarchy; higher roles inherit lower-level rights
  * **Constrained RBAC**:

    * **Static Separation of Duty** (`SSD`): Mutually exclusive roles cannot be held by same user
    * **Dynamic Separation of Duty** (`DSD`): Opposing roles allowed but not in same session
* **Implementation Steps**:

  1. **Assessment & Planning**: Identify current state; define roles/permissions
  2. **Design & Development**: Create role hierarchy; assign precise permissions
  3. **Testing & Validation**: Detect conflicts; confirm correct behavior
  4. **Deployment & Monitoring**: Roll out and continuously audit
* **Advantages**:

  * Enhanced security; clear boundaries
  * Reduced administrative overhead
  * Improved compliance and auditability
  * Scalable and adaptable

## Attribute-Based Access Control (ABAC)

* **Definition**: Access based on **attributes** of users, resources, environment, and actions
* **Mechanism**:

  * Attributes (e.g., job title, clearance, time, location) feed into a **policy engine**
  * Engine evaluates attribute combinations against policies
* **Benefits**:

  * Supports virtually any policy; highly fine-grained
  * Intuitive; fast onboarding via attribute assignment
  * Contextual flexibility (e.g., restrict off-hours access)
  * Promotes compliance; reusable attribute sets
* **Challenges**:

  * Complex implementation: defining/assigning attributes, building policy engine
  * Mapping comprehensive, conflict-free policies
* **ABAC vs. RBAC**:

  * **ABAC**: Attribute-driven, dynamic, highly granular
  * **RBAC**: Role-driven, simpler, broader permissions
* **Selection Criteria**:

  * **ABAC**: Large, dynamic, distributed environments needing deep control
  * **RBAC**: Static roles, limited growth, centralized workforce, resource-constrained

## Managing Access Permissions: Key Challenges

1. **Complexity**: Scaling user/resource counts
2. **Granularity**: Balancing fine control and administrative ease
3. **Dynamic Environments**: Timely provisioning/deprovisioning
4. **Role Explosion**: Excessive role creation
5. **Least Privilege**: Defining minimal required permissions
6. **Request/Approval Processes**: Secure, timely evaluations
7. **Policy Consistency**: Aligning policies across resources
8. **Compliance & Auditing**: Regulatory adherence, audit trails
9. **User Education**: Awareness of access control importance
10. **Integration & Interoperability**: Harmonizing diverse systems

## More Detailed Access Control Models

* **Rule-Based Access Control**: System-defined rules (e.g., firewall policies)
* **Identity-Based Access Control**: Tied to user credentials/identities
* **History-Based Access Control**: Decisions influenced by past behavior
* **AI-Driven Identity Management**: Emerging ML-driven adaptive access decisions

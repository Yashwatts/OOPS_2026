---

# The Four Pillars of OOP

---

## 1. Encapsulation

The process of wrapping data and member functions into a single unit (the class).  
It leads to **Data Hiding** by making sensitive data private and providing access only through Getters and Setters.

- **Getter:** A public function that returns the value of a private variable.
- **Setter:** A public function that sets or updates the value of a private variable, often including validation logic.

---

## 2. Inheritance (Code Reusability)

Allows a class (**Child/Derived**) to acquire properties and behaviors from another class (**Parent/Base**).

- **Modes of Inheritance:** Defines how the accessibility of base class members changes in the derived class (Public, Private, or Protected).

| Base Class  | Private Mode     | Protected Mode   | Public Mode      |
|-------------|------------------|------------------|------------------|
| Private     | Not inherited    | Not inherited    | Not inherited    |
| Protected   | Private          | Protected        | Protected        |
| Public      | Private          | Protected        | Public           |

- **Types of Inheritance:**
    - Single: One parent, one child.
    - Multi-level: A chain of inheritance (Grandparent → Parent → Child).
    - Multiple: One child inheriting from multiple parents (e.g., a "TA" class inheriting from both "Student" and "Teacher").
    - Hierarchical: One parent, multiple children.
    - Hybrid: A combination of multiple types of inheritance.

---

## 3. Polymorphism

Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

- **Compile-time Polymorphism:**
    - Constructor Overloading
    - Function Overloading: Multiple functions with the same name but different parameters.
    - Operator Overloading: Giving special meaning to an operator (like `+` or `<<`) for user-defined types.

- **Runtime Polymorphism:**
    - Function Overriding: A child class providing a specific implementation of a function already defined in the parent class. (Inheritance)
    - Virtual Functions: Used to ensure the correct function is called for an object, regardless of the type of pointer used for the function call.
        - Virtual functions are dynamic in nature.
        - Defined by the keyword `virtual` inside a base class and are always declared with a base class and overridden in a child class.

---

## 4. Abstraction

Hiding all unnecessary complex implementation details and showing only the essential features to the user.  
(Using access modifiers/specifiers is one example of Abstraction).

- **Abstract Class:** A class that cannot be used to create objects. It exists only to be inherited by other classes.
- **Pure Virtual Functions:** A function defined in a base class with no implementation:
    ```cpp
    virtual void draw() = 0;
    ```
    Any class containing at least one pure virtual function becomes an abstract class.
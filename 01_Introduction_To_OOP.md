---

# Introduction to Object-Oriented Programming (OOP)

Object-Oriented Programming is a paradigm centered around **Objects** and **Classes**. It is designed to map real-world scenarios into code, enhancing reusability and organization.

---

## Practical Implementation

In C++, libraries like `vector`, `string`, and `stack` exist in the STL (Standard Template Library) because of OOPs. To implement these, OOPs concepts are used.

---

# Classes and Objects

- **Objects** are entities in the real world (e.g., a "Toyota Camry").
    - It has state (data) and behavior (functions).
    - It is an *instance* of a class and occupies space in the computer's memory.

- **Classes** are like blueprints of these entities (e.g., a "Car" design).
    - It defines what data an object will hold and what operations it can perform.
    - Classes do not occupy memory until an object is created.

- **Properties / Attributes:** Data variables within a class.  
    (e.g., values associated with an entity like: Name, Department, Subject, Salary for a "Teacher").

- **Methods / Member Functions:** Functions defined inside a class.  
    (e.g., `changeDept()`, `taxCalc()` are some functions associated with the real-world entity "Teacher").

### Syntax Example

```cpp
class Teacher {
        // Properties
        // Methods
};
```

---

# Practical and Real-World Example: Amazon

Instead of creating thousands of individual variables for every item, developers create a **Product** class as a blueprint.

## The Amazon "Product" Class Example

Imagine Amazon needs to store information for millions of items like electronics, books, and clothing.

### 1. The Blueprint (The Class)
The class defines what data every product must have (**Properties**) and what it can do (**Methods**).

```cpp
class Product {
public:
        // Properties (Attributes)
        string name;
        double price;
        string description;
        double discount;

        // Methods (Member Functions)
        void displayDetails() {
                cout << "Product: " << name << endl;
                cout << "Price: $" << price << endl;
                cout << "Description: " << description << endl;
        }

        void applyDiscount(double percent) {
                price = price - (price * percent / 100);
                cout << "New Price after discount: $" << price << endl;
        }
};
```

### 2. The Objects (Real Entities)
When a customer views a specific page, the system creates an **Object** from that blueprint.

```cpp
int main() {
    // Creating an object for a Laptop
    Product laptop;
    laptop.name = "Gaming Laptop";
    laptop.price = 1200.00;
    laptop.description = "High-performance laptop with 16GB RAM.";

    // Creating an object for Headphones
    Product headphones;
    headphones.name = "Wireless Headphones";
    headphones.price = 150.00;

    // Using methods
    laptop.displayDetails();
    laptop.applyDiscount(10); // 10% off

    return 0;
}
```

---

## Benefits

- **Code Reusability:** You write the Product logic once, and you can use it for billions of products on the platform.
- **Organization:** If Amazon decides to add a "Rating" system, they only need to update the Class once, and every product object automatically gets that new feature.
- **Scalability:** This allows a small team of engineers to manage a massive database of diverse items efficiently.
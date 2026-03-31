
---

# The Diamond Problem

The Diamond Problem is a famous ambiguity that arises in C++ and other object-oriented languages that support **Multiple Inheritance**. It occurs when a class inherits from two different classes that both inherit from a single common "grandparent" class.

This creates a diamond-shaped inheritance hierarchy:

---

## 1. How the Problem Occurs

Imagine the following structure:

1. **Class A (Grandparent):** Has a method called `display()`.
2. **Class B and Class C (Parents):** Both inherit from Class A. They both now have a copy of `display()`.
3. **Class D (Child):** Inherits from both Class B and Class C.

When you try to call `obj.display()`, the compiler gets confused. It doesn't know whether to call the version of `display()` that came through Class B or the one that came through Class C.

**Technical Conflict:**  
In memory, Class D actually contains two separate copies of Class A's variables and methods. This leads to data redundancy and ambiguity.

---

## 2. Example Code (The Issue)

```cpp
class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {};

int main() {
    D obj;
    // obj.display(); // ERROR: Request for member 'display' is ambiguous
}
```

---

## 3. The Solution: Virtual Inheritance

To solve this, C++ introduces **Virtual Base Classes**. By using the `virtual` keyword during inheritance, you tell the compiler to only keep one shared instance of the grandparent class.

```cpp
class A {
public:
    void display() { 
        cout << "Class A" << endl;
    }
};

// Use the 'virtual' keyword here
class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.display(); // Works perfectly! Only one copy of Class A exists.
}
```
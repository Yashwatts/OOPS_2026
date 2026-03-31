---

# Constructors

A special member function invoked automatically at the time of object creation. Used for initialization.

- It has the same name as the class and no return type.
- Memory allocation happens when constructor is called.

**Types of Constructors:**
- **Non-Parameterized:** The default constructor provided if none are defined.
- **Parameterized:** Takes arguments to initialize an object with specific values.
- **Copy Constructor:** Special constructor (default) used to copy properties of one object into another.

---

# Constructor Overloading

It is the phenomenon where a class contains multiple constructors with the same name (the class name) but different parameters.

The compiler distinguishes between these constructors based on the number, type, or sequence of the arguments passed during object creation.  
This allows an object to be initialized in different ways depending on the data available at the time of instantiation.

> It is a primary example of **Compile-time Polymorphism**.

---

# The `this` Pointer

A hidden pointer inside every member function that points to the object that invoked the function. It is used to distinguish between local variables and class properties when they have the same name (e.g., `this->name = name;`).

> `this->prop` is the same as `*(this).prop`

---

# Shallow & Deep Copy

- **Shallow Copy:** A shallow copy of an object copies all of the member values from one object to another.  
    If a member is a pointer, it copies the memory address, meaning both objects point to the same location. This is the default behavior.
- **Deep Copy:** A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members point to.

## 1. Static vs. Dynamic Memory Allocation
To understand the difference between copies, you must first understand where data lives in memory:

- **Stack Memory:** Used for static memory allocation. Local variables and function calls are stored here. It is managed automatically by the compiler.
- **Heap Memory:** Used for dynamic memory allocation. This is used when you use the `new` keyword (e.g., `new int[5]`, allocated at runtime). This memory stays allocated until you manually delete it and is the primary reason why "Deep Copies" are needed.

## 2. Shallow Copy Memory Behavior
In a shallow copy, the compiler simply copies the values of the member variables from one object to another.

- **The Problem:** If an object contains a pointer to dynamic memory (on the Heap), a shallow copy only copies the address stored in that pointer.
- **Result:** Both the original object and the copied object now point to the exact same memory location on the Heap. If one object changes the data, it changes for both.

## 3. Deep Copy Memory Behavior
A deep copy is required when your class uses dynamic memory. Instead of sharing a memory address, a deep copy performs two steps:
    1. **New Allocation:** It allocates a completely new, separate block of memory on the Heap for the new object.
    2. **Value Copy:** It copies the actual data from the original memory block to the new one.

        - **Result:** The two objects are entirely independent. Changes to the "Heap" data of one object will not affect the other.

### Summary Table

| Feature         | Shallow Copy (Static Focus)      | Deep Copy (Dynamic Focus)         |
|-----------------|----------------------------------|-----------------------------------|
| Memory Location | Copies data on the Stack.        | Allocates new memory on the Heap. |
| Pointers        | Copies the address (both point to same data). | Copies the data (each has its own copy). |
| Usage           | Default behavior of C++.         | Must be manually defined by the programmer. |

---

# Destructors

## 1. Definition and Purpose

- **Opposite of Constructor:** While a constructor is used to allocate memory and initialize an object, a destructor is used to deallocate memory and "clean up" the object when it is no longer needed.
- **Automatic Invocation:** You do not need to call a destructor manually; C++ calls it automatically when an object goes out of scope (e.g., when a function ends or the program finishes).

## 2. Syntax and Rules

- **Same Name as Class:** Like a constructor, it has the same name as the class.
- **Tilde Symbol (~):** It is always prefixed with a tilde symbol (e.g., `~Student()`).
- **No Parameters or Return Type:** A destructor cannot take any arguments and does not return any value. Because it takes no parameters, destructors cannot be overloaded.

## 3. Memory Management (The `delete` Keyword)

- **Static vs Dynamic:** For static memory (variables on the stack), the default destructor handles everything.
- **Manual Deallocation:** If you have used the `new` keyword to allocate memory on the Heap, you must use the `delete` keyword inside the destructor to prevent memory leaks.

## 4. Order of Execution in Inheritance

- Order of destructors is the reverse of constructors.
- When a child object is destroyed:
        1. The Child Destructor is called first.
        2. The Parent Destructor is called second.
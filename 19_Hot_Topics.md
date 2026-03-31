---

# Hot Topics in OOP

---

## 1. Object Slicing

Object Slicing occurs when a Derived class object is assigned to a Base class object by value. In this process, the extra information (properties and methods) specific to the Derived class is "sliced off" because the Base class object does not have enough memory to store them.

- **The Issue:** Only the part of the object that belongs to the Base class is copied. The object loses its identity as a "Derived" object and polymorphism stops working for that specific instance.
- **The Solution:** To avoid slicing and maintain polymorphism, you should always pass or assign objects using pointers or references.

---

## 2. Virtual Destructors

- **The Problem:** If you delete a Derived class object using a Base class pointer and the Base class destructor is not virtual, only the Base class destructor will be called. The Derived class destructor is skipped, leading to memory leaks if the Derived class had allocated any dynamic memory.
- **The Solution:** Always declare the destructor in the Base class as virtual. This ensures the destructor chain starts from the most-derived class and moves up to the base, cleaning everything properly.

---

## 3. VTABLE and VPTR

- **VPTR (Virtual Pointer):** Every object of a class with virtual functions contains a hidden pointer called the vptr.
- **VTABLE (Virtual Table):** A static table created by the compiler for each class. It contains the addresses of all the virtual functions for that class.
- **How it works:** When a virtual function is called, the program uses the vptr to find the class's vtable and then looks up the correct function address to execute. This is the mechanism that enables Runtime Polymorphism.

---

## 4. Friend Functions and Friend Classes

- **Concept:** Normally, private members cannot be accessed outside the class. However, if a class declares a function or another class as a friend, that "friend" gains full access to its private and protected members.
- **Interview Tip:** Remember that friendship is not inherited. If a Parent class has a friend, that friend is not automatically a friend of the Child class.
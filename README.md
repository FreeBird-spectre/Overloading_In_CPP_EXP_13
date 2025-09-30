# 📘 C++ Overloading and Object-Oriented Concepts

## 🧪 Aim
To study and implement the concepts of function overloading, operator overloading, and constructor overloading in C++, understanding their behavior, usage, and practical applications.

## 🧰 Apparatus
- VS Code or any C++ IDE
- Online C++ Compiler (e.g., cpp.sh, OnlineGDB)

---

## 📚 Theory

In C++, **overloading** allows multiple functions or operators to have the same name but behave differently based on input parameters. This is a key feature of object-oriented programming that improves code readability and flexibility.

### 🔑 Key Concepts

- **Function Overloading**: Multiple functions with the same name but different parameter types or counts.
- **Operator Overloading**: Redefining how operators like `+`, `-`, etc. work for user-defined types.
- **Constructor Overloading**: Multiple constructors with different parameters to initialize objects in various ways.

---

## 🧮 Programs and Algorithms

### 1️⃣ Function Overloading – Calculator

**Description**: Demonstrates function overloading with different versions of `add()` to handle integers, decimals, and multiple parameters.

**Algorithm**:
- Define a class `Calculator` with multiple `add()` functions.
- Each function handles different types or counts of parameters.
- Call each version from `main()` and

**Output**:
No numbers to add. Sum is 0.
Sum of two integers: 37 
Sum of two decimals: 10 
Sum of three integers: 8


---

### 2️⃣ Operator Overloading – Book Combination

**Description**: Uses operator overloading to combine two books using the `-` operator.

**Algorithm**:
- Define a class `Book` with title and pages.
- Overload `-` operator to merge titles and add pages.
- Display original and combined books.

**Output**:
Title: C++, Pages: 100 
Title: Python, Pages: 150
Title: C++ & Python, Pages: 250


---

### 3️⃣ Constructor Overloading – Shape Area

**Description**: Demonstrates constructor overloading to calculate area of different shapes.

**Algorithm**:
- Define a class `Shape` with overloaded constructors.
- Use one constructor for square, another for rectangle, and a default.
- Display shape type and area.

**Output**:
Shape: Undefined, Area: 0 
Shape: Rectangle, Area: 70
Shape: Square, Area: 36


---

### 4️⃣ Function Overloading – User Info

**Description**: Uses function overloading to display user details with different combinations of name, age, and city.

**Algorithm**:
- Define a class `User` with multiple `show()` functions.
- Each function handles different combinations of parameters.
- Call each version from `main()`.

**Output**:
Name: Abir
Name: Abir, Age: 19
Name: Abir, City: Pune
Name: Abir, Age: 19, City: Pune


---

### 5️⃣ Operator Overloading – Complex Number Addition

**Description**: Demonstrates operator overloading using `+` to add complex numbers.

**Algorithm**:
- Define a class `Complex` with real and imaginary parts.
- Overload `+` operator to add two complex numbers.
- Display the result.

**Output**:
21 + 28i


---

### 6️⃣ Function Overloading – Math Operations

**Description**: Uses function overloading to add integers and decimals.

**Algorithm**:
- Define a class `Math` with multiple `add()` functions.
- Each function handles different types and counts of parameters.
- Display results from each call.

**Output**:
Adding 2 numbers: 19
Adding 3 numbers: 33 
Adding decimals: 14


---

## 🎯 Key Learning Outcomes

- Understand how overloading improves code flexibility.
- Learn how to define multiple functions or constructors with the same name.
- Implement operator overloading for custom object behavior.
- Apply object-oriented principles in practical examples.

---

## 🧠 Applications

- **Object-Oriented Programming**: Core to class-based design.
- **Mathematical Computations**: Flexible function design.
- **Data Modeling**: Real-world entities like books, shapes, users.
- **System Design**: Efficient object creation and manipulation.

---

## ✅ Code Execution Status
All programs compiled and executed successfully with expected outputs.

---

## 📂 Suggested Folder Structure


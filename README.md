# Large Integer Arithmetic Calculator in C++

This project implements a high-precision integer calculator in C++ that supports basic and advanced arithmetic operations on numbers with up to **200 digits**. All computations are done using strings to overcome limitations of built-in numeric data types (`int`, `long`, etc.).

## Features

- Addition
- Subtraction
- Multiplication
- Division (integer division only)
- Power (exponentiation)
- Square root (integer approximation)
- Handles negative numbers and input validation

## Highlights

- Built from scratch using only standard C++ (no external libraries)
- Simulates arithmetic logic with string manipulation
- Supports arbitrarily large integers (tested up to 200 digits)
- Displays a user-friendly interactive menu
- Handles edge cases like division by zero and 0⁰ correctly
- Modular functions: clean separation of logic for each operation

## How to Run

### 1. Compile the code

```bash
g++ main.cpp -o bigcalc
````

### 2. Run the program

```bash
./bigcalc
```

> You'll be prompted to select an operation and input the numbers interactively.

## File Structure

```
main.cpp            # Complete source code
README.md           # Project documentation
calculate.exe       # compiled desktop app

```

## Example Usage

```
-------------------------------------welcome----------------------------------
please choose one of these operators:
1. summation
2. submit
3. multiplication
4. division
5. power
6. square root

enter an integer number with maximum 200 digits:
...
```

## Future Improvements

* Add floating-point support using fixed-point logic
* Improve square root precision using Newton-Raphson method
* Add modular arithmetic (useful in cryptography)

## License

This project is open-source and free to use under the MIT License.

---

Developed by Reza

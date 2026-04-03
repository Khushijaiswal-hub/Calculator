# Calculator
A simple C program calculator that performs addition, subtraction, multiplication, and division using conditional statements (if-else). Handles invalid operators and division by zero safely.
🧮 Simple Calculator (C Language)

📌 Overview

This is a simple calculator program built using C and conditional statements ("if-else").
It can perform basic arithmetic operations like addition, subtraction, multiplication, and division.

---

🚀 Features

- ➕ Addition
- ➖ Subtraction
- ✖ Multiplication
- ➗ Division
- ✅ User-friendly input and output

---

🛠️ Technologies Used

- Language: C
- Concepts: Conditional Statements ("if-else"), User Input

---

📂 Project Structure

Calculator/
│── calculator.c
│── README.md

---

▶️ How to Run

1. Install a C compiler (GCC / Turbo C++)
2. Open terminal / command prompt
3. Compile the program:

gcc calculator.c -o calculator

4. Run the program:

./calculator

---

🧠 Program Logic

1. Ask the user to enter two numbers
2. Ask the user to choose an operation ("+", "-", "*", "/")
3. Use "if-else" to perform the chosen operation
4. Display the result

---

💻 Sample Code

#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if(op == '+') {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    } else if(op == '-') {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    } else if(op == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    } else if(op == '/') {
        if(num2 != 0)
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        else
            printf("Error! Division by zero.\n");
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}

---

📸 Output Example

Enter an operator (+, -, *, /): *
Enter two numbers: 5 4
5.00 * 4.00 = 20.00

---

🎯 Future Improvements

- Add support for multiple operations in one calculation
- Include more mathematical functions (power, modulus, etc.)
- Make a menu-driven interface

---

👨‍💻 Author 
Khushi Jaiswal

---

📜 License

This project is for educational purposes only.

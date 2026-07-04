# Practical 2 - Infix to Postfix Expression Conversion

## 🎯 Aim

To implement Infix to Postfix Expression Conversion using Stack in C++.

---

## 📖 Theory

An infix expression is the normal mathematical expression in which the operator is written between two operands, for example `A+B`.

A postfix expression is an expression in which the operator is written after the operands, for example `AB+`.

A stack is used to temporarily store operators during the conversion process. The conversion follows operator precedence and associativity rules.

---

## ⚙️ Operations

- Read the infix expression.
- Push operators into the stack.
- Add operands directly to the output.
- Pop operators according to precedence.
- Generate the postfix expression.

---

## 📝 Algorithm

1. Start.
2. Read the infix expression.
3. Scan the expression from left to right.
4. If the character is an operand, add it to the output.
5. If the character is '(', push it into the stack.
6. If the character is ')', pop operators until '(' is found.
7. If the character is an operator, compare its precedence with the top of the stack.
8. Pop higher or equal precedence operators and add them to the output.
9. Push the current operator.
10. Repeat until the expression ends.
11. Pop all remaining operators.
12. Display the postfix expression.
13. Stop.

---

## 💻 Language

- C++

---

## 👨‍💻 Author

Roshan Sawant
B.Tech Artificial Intelligence & Data Science
Parul University
Semester 3

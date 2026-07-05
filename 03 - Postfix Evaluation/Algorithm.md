# Algorithm – Postfix Evaluation

## 🎯 Aim

To evaluate a Postfix Expression using Stack in C++.

---

## Algorithm

### Step 1
Start the program.

### Step 2
Read the postfix expression from the user.

### Step 3
Create an empty stack.

### Step 4
Scan the postfix expression from left to right.

### Step 5
If the current character is an operand (digit):
- Convert it into an integer.
- Push it onto the stack.

### Step 6
If the current character is an operator (+, -, *, /):
- Pop the top two elements from the stack.
- Perform the required operation.
- Push the result back onto the stack.

### Step 7
Repeat Steps 5 and 6 until the entire expression is processed.

### Step 8
The top element of the stack is the final result.

### Step 9
Display the evaluated result.

### Step 10
Stop the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Evaluation | O(n) |
| Push | O(1) |
| Pop | O(1) |

---

## Space Complexity

**O(n)**

where **n** is the number of operands stored in the stack.

# Algorithm – Infix to Postfix Conversion

## Step 1
Start the program.

## Step 2
Read the infix expression from the user.

## Step 3
Create an empty stack to store operators.

## Step 4
Read the expression from left to right.

## Step 5
If the character is an operand (A-Z or a-z), add it directly to the postfix expression.

## Step 6
If the character is an operator (+, -, *, /):
- Compare its precedence with the operator on the top of the stack.
- While the stack is not empty and the top operator has higher or equal precedence:
  - Remove the operator from the stack.
  - Add it to the postfix expression.
- Push the current operator onto the stack.

## Step 7
Repeat Steps 5 and 6 until all characters of the infix expression are processed.

## Step 8
Pop all remaining operators from the stack and add them to the postfix expression.

## Step 9
Display the postfix expression.

## Step 10
Stop the program.

---

# Time Complexity

| Operation | Complexity |
|-----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Conversion | O(n) |

---

# Space Complexity

**O(n)** (for storing operators in the stack)

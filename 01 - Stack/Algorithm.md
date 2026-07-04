# 📋 Algorithm – Stack Operations

## Aim
To implement Stack operations (Push, Pop, Peek and Display) using arrays in C++.

---

## Algorithm

### Step 1
Start the program.

### Step 2
Define the maximum size of the stack.

### Step 3
Create an array to store stack elements.

### Step 4
Initialize the variable `top = -1`.

### Step 5
Display the menu:
- Push
- Pop
- Peek
- Display
- Exit

### Step 6
Read the user's choice.

### Step 7
If the choice is **Push**:
- Check whether the stack is full.
- If full, display **Stack Overflow**.
- Otherwise, increment `top` and insert the new element.

### Step 8
If the choice is **Pop**:
- Check whether the stack is empty.
- If empty, display **Stack Underflow**.
- Otherwise, display the deleted element and decrement `top`.

### Step 9
If the choice is **Peek**:
- Check whether the stack is empty.
- If empty, display **Stack is Empty**.
- Otherwise, display the top element.

### Step 10
If the choice is **Display**:
- Check whether the stack is empty.
- If empty, display **Stack is Empty**.
- Otherwise, display all stack elements from top to bottom.

### Step 11
Repeat Steps 5–10 until the user chooses Exit.

### Step 12
Stop the program.

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| Display | O(n) |

---

## Space Complexity

**O(n)**

where **n** is the size of the stack.

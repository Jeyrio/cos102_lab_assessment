# COS 102 - Lab Assessment: Problem Solving

This repository contains solutions to the COS 102 Lab Assessment project, written in C.

## Project Assignment

1. Write a program to input two angles of a triangle and check whether the triangle is a right-angled triangle or not.
2. Write a program to find whether a given number is a Palindrome or not.

## Problem 1: Right-Angled Triangle Checker

**File:** `triangle.c`

### Description
This program takes two angles of a triangle as input, calculates the third angle, and determines:
- Whether the three angles form a **valid triangle**
- If valid, whether the triangle is **right-angled** (i.e., one of its angles is exactly 90°)

### Logic
- The sum of all three angles in any triangle is always 180°.
- Third angle = `180 - angle1 - angle2`
- A triangle is invalid if any angle is zero or negative.
- A triangle is right-angled if any one of the three angles equals 90°.

### How to Compile and Run
```bash
gcc triangle.c -o triangle
./triangle
```

### Sample Run
```
Enter the first angle: 50
Enter the second angle: 40
The triangle is right-angled.
```

## Problem 2: Palindrome Checker

**File:** `palindrome.c`

### Description
This program takes an integer as input and determines whether it is a **Palindrome** (reads the same forwards and backwards, e.g., `121`) or not (e.g., `1234`).

### Logic
- Store a copy of the original number before processing (since reversing consumes the number).
- Use a `while` loop to reverse the number digit by digit:
  - `digit = number % 10` — extracts the last digit
  - `reversed = (reversed * 10) + digit` — rebuilds the number in reverse
  - `number = number / 10` — removes the last digit, shrinking the number
  - Loop continues until `number` becomes `0`
- Compare the original number to the reversed number. If they match, it's a palindrome.

### How to Compile and Run
```bash
gcc palindrome.c -o palindrome
./palindrome
```

### Sample Run
```
Enter a number: 121
121 is a Palindrome.
```
```
Enter a number: 1234
1234 is NOT a Palindrome.
```

## Author

Jennifer — COS 102, Miva Open University
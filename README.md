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
_(In progress — will check whether a given number reads the same forwards and backwards.)_

### How to Compile and Run
```bash
gcc palindrome.c -o palindrome
./palindrome
```

## Author

Jennifer — COS 102, Miva Open University

## Notes

Each program includes basic input validation and clear prompts, written and tested step by step as part of a beginner-friendly walkthrough of C fundamentals (variables, `scanf`/`printf`, conditionals, and pointers/address-of operator).
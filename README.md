# Recursive Programming Exercises

## Overview
This project consists of three advanced programming exercises focused on recursive problem-solving techniques. Each problem requires a recursive approach to achieve the correct solution.

## Problems
### 1. **Chess n Queen with Obstacle Problem**
   - Given a chessboard with obstacles (`*`), determine the number of valid ways to place n queens such that they do not threaten each other.
   - **Input:** A 8x8 board representation.
   - **Output:** The number of valid knight placements.

### 2. **Mathematical Expression Evaluation**
   - Given a mathematical expression containing numbers and operators (`+`, `-`, `*`), determine the number of unique ways to parenthesize the expression to achieve a valid result.
   - **Input:** The number of operands followed by a mathematical expression.
   - **Output:** The number of distinct evaluation results.

### 3. **Minimum Peresents Cost**
   - Given a sequence of university campuses with varying distances, determine the minimum cost required to distribute presents while moving between campuses.
   - **Input:** Number of campuses and their respective distances.
   - **Output:** Minimum cost to distribute peresents.

## Installation & Compilation
Ensure you have `g++` installed with C++20 support.

```sh
g++ -std=c++20 -o solution Q1.cpp Q2.cpp Q3.cpp

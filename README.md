# Cash Calculator

## About

**This project was created as part of Harvard University's CS50x course.**

Cash Calculator is a C program that determines the minimum number of coins needed to make a given amount of change using a greedy algorithm.

This project introduced me to algorithmic problem-solving, functions, loops, and breaking down problems into smaller, reusable pieces of code.

## Features

- Prompts the user for a non-negative amount of change
- Calculates the minimum number of coins required
- Uses the greedy algorithm for efficient calculations
- Organizes the logic into separate functions

## Technologies Used

- C
- CS50 Library

## How It Works

The user enters an amount of change in cents. The program repeatedly uses the largest possible coin value (25¢, 10¢, 5¢, then 1¢) until the remaining amount reaches zero.

The total number of coins used is then displayed.

## Image Demo:
<img width="168" height="38" alt="image" src="https://github.com/user-attachments/assets/3c2d0aa8-d1f4-4b97-98f1-1966d7f39d90" />

## Installation

Clone the repository:

```bash
git clone https://github.com/Behrad01/Cash-Calculator.git
```

Navigate to the project folder:

```bash
cd Cash-Calculator
```

Compile the program:

```bash
make calculator
```

Run the program:

```bash
./calculator
```

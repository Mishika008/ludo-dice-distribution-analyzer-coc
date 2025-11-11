# ludo-dice-distribution-analyzer-coc

## Project Overview
This C program simulates rolling two six-sided dice one million times to determine the true probability distribution of the sums (from 2 to 12). The project aims to scientifically verify common observations in the game of Ludo, such as rolling 7s more often than extreme sums like 2 or 12.

## Features
- Uses a `for` loop and the `rand()` function to simulate one million dice rolls.
- Stores the count of each possible sum using an array.
- Calculates both simulated and theoretical probabilities for each sum.
- Presents the results in a clean, formatted probability distribution table.
- Modular code structure with a function `roll_one_die()` to simulate a single die roll.
- Demonstrates foundational C programming concepts filtered through stochastic modeling.

## Concepts Used
- **C Programming**: for loops, arrays, functions, decision-making statements (`if`-`else`), pointers (array indexing), variables, constants, `printf` formatting.
- **Mathematics**: probability distribution, combinatorics (calculating the number of dice combinations per sum), percentage calculations.
- **Software Practices**: modular code for clarity, proper comments, and clean output formatting.
- ## How to Compile and Run
Compile the program using GCC:

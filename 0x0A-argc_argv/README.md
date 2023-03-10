# 0x0A. C - argc, argv
## In This Repo you will find:
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

100-change.c: C program that prints the minimum number of coins to make change for an amount of money.

Usage: ./change cents where cents is the amount of cents needed to give back.
Change can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent.
If the number passed as the argument is negative, the program prints 0 followed by a new line.
If the number of arguments passed to the program is not exactly one, it prints Error followed by a new line and returns 1.

# push\_swap project

You've got to sort that stack.

## Description

This project taught me optimisation and a few sorting algorithms, notably
quick-sort.

The project contains 2 programs: the sorter and the checker.

The sorter (`push_swap`) sorts a stack of numbers given in arguments.

The checker validates that the stack is correctly sorted at the end.

## How to use

run `make` to compile both projects.

run `./push_swap` and give as arguments a list of numbers that will be sorted by `push_swap`.
There shouldn't be any duplicates.

`push_swap` will print a list of commands to sort the stack.
You can check that the commands lead to a sorted stack by piping the result into `./checker`.

*Example:* `./push_swap 4 2 6 5 1 9 | ./checker`

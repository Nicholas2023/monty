# Monty Interpreter

Monty is a scripting language that uses Monty byte codes to execute instructions on a stack -based data structure. This project implements an interpreterr for Monty byte code files.


## Table of Contents

* Description
* Installation
* Usage
* Supported Operations
* Examples
* Contributing
* License


## Description

The Monty Intepreter is designed to read and execute Monty byte code files with specific instructions. It uses a stack data structure to manipulate and and process the data.

The interpreter supports various operations such as pushing elements onto the stack, printing stack values, performing arithmetic operations, manipulating the stack and more.


## Installation

To compile the Monty Interpreter, follow these steps:

1. Clone the Github repository:

```
$ git clone https://github.com/Nicholas2023/monty.git
```

2. Navigate to the project directory:

```
$ cd monty
```

3. Compile the source files using the provided Makefile:

```
$ make
```


After successful compilation, an executable file named `monty` will be generated.

## Usage

To execute Monty byte code files, use the following command:

```
$ ./monty <file>
```

Replace `<file>` with the path to the Monty byte code file you want to execute.


## Supported Operations

The Monty Interpreter supports the following operations:
* `push <int>` : Pushes an element  onto the stack.
* `pall` : Prints all the values on the stack.
* `pint` : Prints the value at the top of the stack.
* `pop` : Removes the top element of the stack.
* `swap` : Swaps the top two elements of the stack.
* `add` : Adds the top two elements of the stack.
* `nop` : No operation (does nothing)
* `sub` : Subtracts the top two elements of the stack from the second top elements
* `div` : Divides the second top element of the stack by the top element.
* `mul` : Multiplies the second top element of the stack with the top element.
* `mod` : Computes the remainder of the division of the second top element by the top element
* `pchar` : Prints the ASCII character represented by the top element of the stack.
* `pstr`: Prints the string starting from the top of the stack
* `rot1`: Rotates the stack, moving the top element to the bottom

## Examples

Here are some examples of using Monty Interpreter:

1. Pushing values onto the stack and printing them:
```
$ cat bytecodes/00.m
push 1
push 2
push 3
pall
$ ./monty bytecodes/00.m
3
2
1
```

2. Performing arithmetic operations:

```
$ cat bytecodes/12.m
push 1
push 2
push 3
pall
add
pall
$ ./monty bytecodes/12.m
3
2
1
5
1
```

3. Printing ASCII characters and strings:

```
$ cat bytecodes/28.m
push 72
pchar
$ ./monty bytecodes/28.m
H

$ cat bytecodes/31.m
push 1
push 2
push 3
push 4
push 0
push 72
pstr
$ ./monty bytecodes/31.m
Hol
```

## Contributing

Contributions to the Monty Interpreter project are welcom! if you ecounter any issues, have suggestions, or want to contribute code, Please create an issue or submit a pull request on the Github repository.


## License

This project is licensed under the MIT License. See the LICENSE file for more information.

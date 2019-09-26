TACK & QUEUE

### Stack
A linear data structure in which elements can only be inserted and removed from the top. It follows the LIFO or FILO principle. There are three main operations performed in the stack:
- Push: Adds an item to the stack.
- Peek or Top: Returns elements of the stack.
- Pop: Removes items from the stack.

## What it does

The following are opcodes that the interpreter takes and operates.

- push: Inserts an item to the top.
- pall: Prints all the values.
- pint: Prints the top value.
- pop: Deletes the top two values.
- swap: Swaps the top two values.
- add: Adds the top two values.
- nop: Does not do anything.


## :open_file_folder: Files

Files | Description
---- | ----
README.md | Readme for the program
monty.h | Prototypes of functions and structures
main.c | Main
opcodes.c | Functions for push, pall, pint, pop, nop
opcode_aux.c | Auxiliar functions for opcodes

## Installation

Clone this repository on an empty directory

```git
$ git clone https://github.com/dabrabgellak/monty.git
```

Compile it with this command

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
Use it with this command

```bash
$ monty <file>
```

## Examples

This are some examples on how to use the interpreter.

```bash
   push 1        
   push 2       
   push 3           push 1$
   pall             push 2$
   add              push 3$
   pall             pall$
-- -- -- --       -- -- -- --
   3                3
   2                2
   1                1
   5
   1
```

## :dancers: Author
- [Barbara Calle](@dabrabgellak)
- [Diahan Hudgson](@caroll1889)

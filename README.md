# printf Project
## Table of Contents
*   [Description](#description)
*   [Project Features](#project-features)
*   [Man Page](#man-page)
*   [Authors](#authors)
## Description

`_printf` is a group project that recreates the core functionality of the standard C library's `printf` function. It provides a versatile tool for formatted output to the standard output stream. This implementation focuses on efficiency by using a local buffer to minimize `write` system calls.

The function is designed to handle a wide range of conversion specifiers and flags, offering a robust and reliable alternative to the built-in `printf`. This project serves as an excellent demonstration of low-level programming concepts in C, including variadic functions and memory management.

## Project Features

Our version of `_printf` handles the following conversion specifiers and flags:

| Specifier | Description |
| --- | --- |
| `c` | Prints a single character.|
| `s` | Prints a string of characters.|
| `%` | Prints a percent sign. |
| `d `| print a decimal base 10 number|
| `i` | print an integer in base 10|
| `b` | Converts and prints an unsigned integer to its binary representation.|
| `u` | Converts and prints an unsigned integer to its decimal representation.|
| `o` | Converts and prints an unsigned integer to its octal representation.|
| `x` | Converts and prints an unsigned integer to its hexadecimal representation in lowercase.|
| `X` | Converts and prints an unsigned integer to its hexadecimal representation in uppercase.|
| `S` | Prints the string, with non-printable characters represented as \xHH.|
| `p` | Prints a pointer address in hexadecimal format.|
| `space` | Places a space before a signed number if no sign is present.|
| `+` | Forces the output to be preceded by a sign `+ or -` for signed numbers.|
| `#` | Alternate form: forces a leading 0 for octals and 0x or 0X for hexadecimal numbers.|

## Man Page

A manual page for _printf is provided in the man_3_printf file. To view it, copy the file to the appropriate manual page directory `e.g., /usr/local/man/man3` or use the man command with the file directly.

## Authors
* **Lamyaa Alghaihab** <a href="https://github.com/Lamyaa439" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* **Hadeel Almutairi** <a href="https://github.com/had271" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>

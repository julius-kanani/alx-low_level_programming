# 0x0A-argc_argv
The argument count and argument vector.

## 0-whatsmyname.c
> A program that prints its name followed by a new line.
> - If the program is renamed, it will print the new name without having to recompile it.

## 1-args.c
> A program that prints the number of arguments passed into it followed by a new line.

## 2-args.c
> A program that prints all arguments it receives.
> - One argument per line.

## 3-mul.c
> A program that multiplies 2 numbers, prints the result follwed by a new line. 
> - Assumes that the two numbers and the result of multiplication can be stored in an integer.
> - If two arguments are not passed,, the program prints ``` Error ``` followed by a new line and return ``` 1 ```.

## 4-add.c
> A program that adds positive numbers and prints the result followed by a new line.
> - If no number is passed to the program, ``` 0 ``` is printed follwed by a new line.
> - if one number contains symbols that are not digits, ``` Error ``` is printed followed by a new line and return ``` 1 ```.
> - Assumes numbers and their sum can be stored in an integer.

## 100-change.c
>  A program that prints the minimum number of coins to make change for an amount of money.
> - Usage: ``` ./change cents ```.
> - ``` cents ``` is the amount of cents you need to give back.
> - If number of arguments passed to program is not exactly ``` 1 ```, the program prints ``` Error ``` followed by a new line and returns ``` 1 ```.
> ``` atoi ``` is used to parse the parameter parsed to the program.
> - If number passed as argument is negative, the program prints ``` 0 ```, followed by a new line.
> - Coin values are: ``` 25, 10, 5, 2, 1 ``` cents

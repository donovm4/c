# C Programming

C is a foundational pillar and is still important, even in the 2020s.

C gives programmers access to features of CPU architectures 
- kernels
- device drivers
- protocol stacks
- application software
- memory

## Workflow

### 1: Compile (or build)

### 2: Run

## Variable types

`int`: stores an integer (or whole number)

```c
int year = 2026;
```

`char`: stores a single character

> [!IMPORTANT]
>
> `char <name-of-variable>[]` allows for string/array of characters

```c
char fruit[] = "apple";
```

`double`: stores a decimal number

```c
double gpa = 3.85;
```

`float`: TBD

```c
float price = 237.99
```

## Understanding `printf`

### Usage

`printf`: a _function_ used to print something to console/screen

```c
printf("Hello World\n");
```

### Format specifiers

`%c` for single characters

`%s` for strings

`%d` for integers

`%f` for doubles and floats

```c
// main.c:

printf("I have %d siblings.\n", 4);

char string[] = "brothers";
printf("I have 2 %s and 2 %s.\n", "sisters", string);

printf("Together we have $ %.2f.\n", 237.56);

// Output:

I have 4 siblings. 
I have 2 sisters and 2 brothers. 
Together we have $ 237.56.
```

# C-Programming
C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
It is a very popular language, despite being old.
C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Why Learn C?
- It is one of the most popular programming language in the world.
- If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar.
- C is very fast, compared to other programming languages, like Java and Python.
- C is very versatile; it can be used in both applications and technologies.

## Variables
Variables are containers for storing data values, like numbers and characters. In C, there are different types of variables (i.e., Data Types) these are as follows:

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes.

Syntax:
```
int var1 = 1;
```
```
char var2[] = "Hello";
```
```
float var3 = 2.324;
```

## Arrays
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces:
Syntax:

```
int myNumbers[] = {};
```

## Functions
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times. There are two types of functions:

**Predefined Functions**
- `main()` is a function, which is used to execute code.

Syntax:
```
void main()
{
// body of main
}
```
OR
```
int main()
{
//body of main
return(0)
}
```
- `printf()` is a function used to output/print text to the screen.

Syntax:
```
printf("");
```
AND
```
printf("\n%d \n%c \n%s \n%f",intvar,charvar,charvar1,floatvar);
```
- `clrscr()` is a function used to clear the previous screen output before the new output is showed on the screen.

Syntax:
```
clrscr();
```
- `scanf()` is a function used to fetch the input from the user.

Syntax:
```
scanf("%d %c %s %f",&intvar,&charvar,&charvar1[],&floatvar)
```
- `getch()` is a function used to hold the output screen for some time until the user passes a key from the keyboard to exit the console screen.

Syntax:
```
getch();
```

**User-Defined Functions**

[NOTE: Will be updated soon]

### TAKINGUSERINPUTS.C File

This file shows a simple program that takes input from the user and displays it to the user.

- We define a set of Variables and Array with its corresponding data types as per needs.
- We accept the values from the user.
- We print those accepted values. 

#### Output

![image](https://github.com/Shubham-Diwadkar/C-Programming/assets/125255910/b48c6e71-103f-49d4-a320-939840e52c6d)

### ACCEPTINGMARKS.C File

This file shows a simple program that takes input from the user and displays the total and average of all the subject's marks.

- We define a set of Variables and Array with its corresponding data types as per needs.
- We accept the values from the user.
- We calculate the total and average of the marks given by the user.
- We print those values.

#### Output

![image](https://github.com/Shubham-Diwadkar/C-Programming/assets/125255910/990c9413-7e1d-4fcb-97e9-57fe8398a1a9)

![Thankyou](https://github.com/Shubham-Diwadkar/C-Programming/assets/125255910/8c9d1253-af66-45b1-af25-6e61fabef61a)

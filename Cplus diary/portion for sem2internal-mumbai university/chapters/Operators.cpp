/*Operators
Arithmetic operator
Relational Operator
Logical Operator
Bitwise Operator*/


/*### Operators in C++

C++ is a programming language that supports various types of operators, which are symbols that represent computations or operations. These operators can be classified into several categories, including arithmetic, relational, logical, bitwise, assignment, and more.
*/
/*### Arithmetic Operator

Arithmetic operators in C++ perform mathematical operations on variables or values. The basic arithmetic operators include addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), and modulus (`%`). These operators work with numerical data types and are used to perform common mathematical calculations.

```cpp*/
int a = 10, b = 3;
int sum = a + b;    // Addition
int difference = a - b;    // Subtraction
int product = a * b;    // Multiplication
int quotient = a / b;    // Division
int remainder = a % b;    // Modulus
/*```

### Relational Operator

Relational operators in C++ are used to compare two values and determine the relationship between them. These operators include equality (`==`), inequality (`!=`), greater than (`>`), less than (`<`), greater than or equal to (`>=`), and less than or equal to (`<=`).

```cpp */
int x = 5, y = 8;
bool isEqual = (x == y);    // Equality
bool isNotEqual = (x != y);    // Inequality
bool isGreaterThan = (x > y);    // Greater than
bool isLessThan = (x < y);    // Less than
bool isGreaterOrEqual = (x >= y);    // Greater than or equal to
bool isLessOrEqual = (x <= y);    // Less than or equal to
/*```

### Logical Operator

Logical operators in C++ perform logical operations on boolean values. The logical operators include AND (`&&`), OR (`||`), and NOT (`!`). These operators are often used to combine multiple conditions in control flow statements.

```cpp */
bool condition1 = true, condition2 = false;
bool resultAnd = (condition1 && condition2);    // Logical AND
bool resultOr = (condition1 || condition2);    // Logical OR
bool resultNot = !condition1;    // Logical NOT
/*```

### Bitwise Operator

Bitwise operators in C++ perform operations at the bit level. They manipulate individual bits of integers. The bitwise operators include AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), left shift (`<<`), and right shift (`>>`).

```cpp */
int num1 = 5, num2 = 3;
int resultAnd = num1 & num2;    // Bitwise AND
int resultOr = num1 | num2;    // Bitwise OR
int resultXor = num1 ^ num2;    // Bitwise XOR
int resultNot = ~num1;    // Bitwise NOT
int resultLeftShift = num1 << 1;    // Left shift by 1
int resultRightShift = num1 >> 1;    // Right shift by 1
/*```

Understanding and utilizing these operators is fundamental for effective C++ programming, as they provide powerful tools for manipulating data and controlling program flow.*/

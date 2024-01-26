//1.Fundamental Datatypes:
//int: Integer type,used for storing whole number
//float: floating point type used for storing whole number
//double: Doube precision floating point type,for more precision than "float".
//char: Charater type,used for storing single characters

//2.Modifiers
//short: shortens the data type
//long: lengthens the data type
//signed and unsigned: Modifiers used for integer data types

//3.Derived Data types
//array: A collection of similar data types
//pointer: A variable that stores the address of another variable 
//structure: A Collection of different data types under a single name.
//union:similar to structure but uses the same memory location for all its members

//////////////////////////////////////////////////////////////////////////////////////////////////

/*'Int' (Integer type)
The int datatype is used to store whole numbers*/
//Example:
#include<iostream>
using namespace std;

int main() {
    int myNumber = 42;
    cout << "Integer value: " << myNumber << endl;
    return 0;
}

/*Test
what is the purpose of int data type in c++
answer:
In C++, the `int` data type is used to represent integer values. It is a fundamental data type that can store whole numbers, both positive and negative, without any fractional or decimal part. The size of an `int` can vary depending on the compiler and the system, but it is typically designed to accommodate a wide range of integer values.

Here's a simple example code that declares an integer variable, assigns a value to it, and then prints the result:

```cpp*/
#include <iostream>

int main() {
    // Declare an integer variable
    int myNumber;

    // Assign a value to the integer variable
    myNumber = 42;

    // Print the value of the integer variable
    std::cout << "The value of myNumber is: " << myNumber << std::endl;

    return 0;
}
/*```

In this example:
- We declare an integer variable named `myNumber` using the `int` data type.
- We assign the value `42` to the `myNumber` variable.
- We use `std::cout` to print the value of `myNumber` to the console.

This code will output:

```
The value of myNumber is: 42
```

You can modify the value assigned to `myNumber` or perform various arithmetic operations using `int` variables based on your program's requirements.
*/

/*
2.Float(Floating-point type):
The float datatype is used to store decimal numbers 
*/

#include<iostream>
using namespace std;

int main() {
    float myFloat = 3.14;
    cout << "Float Value: " << myFloat << endl;
    return 0;
}

/*Test
1.Explain the purpose of Float data type?
Answer:
The `float` data type in programming languages like C++ is used to represent floating-point numbers. Floating-point numbers are used to store real numbers, including both integer and fractional parts. Unlike the `int` data type, which is limited to storing whole numbers, the `float` data type allows for the representation of numbers with decimal points.

The term "floating-point" refers to the fact that the decimal point can "float"; it is not fixed and can be placed anywhere within the number. The `float` data type typically provides a compromise between precision and storage space. It uses 32 bits to represent a floating-point number, with a certain number of bits allocated for the mantissa (the significant digits) and the exponent (to represent the scale or magnitude).

Here's a brief summary of the purpose of the `float` data type:

1. **Real Numbers:** The `float` data type is suitable for representing real numbers that may have a fractional component.

2. **Precision and Range:** It provides a compromise between precision and range. While it can represent a wide range of values, the precision (number of decimal places) is limited compared to double-precision floating-point types.

3. **Applications:** `float` is commonly used in applications where memory is a concern, and the trade-off between precision and storage efficiency is acceptable. Examples include graphics processing, physics simulations, and situations where real-time processing is crucial.

Here's a simple example code in C++ that declares a `float` variable and assigns it a value:

```cpp*/
#include <iostream>

int main() {
    // Declare a float variable named myFloat and assign it the value 3.14
    float myFloat = 3.14;

    // Print the value of myFloat to the console
    std::cout << "The value of myFloat is: " << myFloat << std::endl;

    return 0;
}
/*```

This code declares a `float` variable named `myFloat` and assigns it the value `3.14`. The program then prints the value of `myFloat` to the console.

2.Declare a float variable named myDecimal and assign it the value 5.7.
Answer:
*/
#include <iostream>

int main() {
    // Declare a float variable named myDecimal and assign it the value 5.7
    float myDecimal = 5.7;

    // Print the value of myDecimal to the console
    std::cout << "The value of myDecimal is: " << myDecimal << std::endl;

    return 0;
}
/*```

In this example:

- The `float` data type is used to declare a variable named `myDecimal`.
- The value `5.7` is assigned to the `myDecimal` variable.
- The program then prints the value of `myDecimal` to the console using `std::cout`.

When you run this program, it will output:

```
The value of myDecimal is: 5.7
```
*/

/*3. double (Double-precision Floating-point Type):
The double data type is used for double-precision floating-point numbers.

*/
#include <iostream>
using namespace std;

int main() {
    double myDouble = 123.456;
    cout << "Double Value: " << myDouble << endl;
    return 0;
}

/*
Test Paper:
What is the difference between float and double in C++?
Answer:
In C++, both `float` and `double` are data types used to represent floating-point numbers, which include real numbers with decimal points. However, they differ in terms of precision and storage size.

1. **Precision:**
   - **float:** Typically, the `float` data type is a single-precision type, which uses 32 bits to represent a floating-point number. It provides about 7 decimal digits of precision.
   - **double:** The `double` data type is double-precision, using 64 bits. It offers higher precision compared to `float`, providing approximately 15 decimal digits.

2. **Storage Size:**
   - **float:** Requires 4 bytes (32 bits) of storage.
   - **double:** Requires 8 bytes (64 bits) of storage.

3. **Range:**
   - **float:** Covers a wide range of values but with lower precision.
   - **double:** Has a larger range and higher precision, making it suitable for applications requiring high accuracy.

4. **Usage:**
   - **float:** Used when memory efficiency is critical or when the precision requirement is not very high, such as in graphics programming or situations with limited memory resources.
   - **double:** Commonly used when higher precision is essential, for example, in scientific computations, financial applications, or any scenario where accurate representation of real numbers is crucial.

In summary, the key difference between `float` and `double` lies in their precision and storage size, with `double` providing higher precision at the cost of larger memory consumption. The choice between them depends on the specific requirements of the application.
*/

/*
2.Declare a double variable named myPrecision and assign it the value 456.789.
Certainly! In C++, you can declare a `double` variable named `myPrecision` and assign it the value `456.789` as follows:
*/
```cpp
#include <iostream>

int main() {
    // Declare a double variable named myPrecision and assign it the value 456.789
    double myPrecision = 456.789;

    // Print the value of myPrecision to the console
    std::cout << "The value of myPrecision is: " << myPrecision << std::endl;

    return 0;
}
/*```

In this example:

- The `double` data type is used to declare a variable named `myPrecision`.
- The value `456.789` is assigned to the `myPrecision` variable.
- The program then prints the value of `myPrecision` to the console using `std::cout`.

When you run this program, it will output:

```
The value of myPrecision is: 456.789

```
*/

/*
char (Character Type):
The char data type is used to store single characters.
*/
#include <iostream>
using namespace std;

int main() {
    char myChar = 'A';
    cout << "Character Value: " << myChar << endl;
    return 0;
}

/*
The `char` data type in C++ is used to represent individual characters. Unlike other numeric data types, `char` is specifically designed to store single characters, such as letters, digits, punctuation marks, or special symbols.

Here are key points regarding the purpose of the `char` data type in C++:

1. **Character Representation:**
   - `char` is primarily used for storing individual characters, and it is commonly employed when dealing with strings, where each character is stored in a separate `char` variable.

2. **ASCII Representation:**
   - In C++, `char` is often associated with the ASCII (American Standard Code for Information Interchange) character set, where each character is assigned a unique numeric code. For example, the character 'A' corresponds to the ASCII code 65.

3. **Memory Efficiency:**
   - `char` is memory-efficient, requiring only one byte of storage (8 bits) to represent a character.

4. **String Termination:**
   - In C and C++ programming, strings are often represented as arrays of characters, with the last element being the null character `'\0'` (ASCII code 0). The null character is used to mark the end of a string.

5. **Usage in Input/Output:**
   - `char` is commonly used in input/output operations, especially when dealing with single characters from standard input (keyboard) or when displaying characters to standard output (console).

Here's a simple example code that declares a `char` variable and assigns it the value 'A':

```cpp
*/
#include <iostream>

int main() {
    // Declare a char variable named myChar and assign it the value 'A'
    char myChar = 'A';

    // Print the value of myChar to the console
    std::cout << "The value of myChar is: " << myChar << std::endl;

    return 0;
}
/*
```

This code declares a `char` variable named `myChar` and assigns it the character 'A'. The program then prints the value of `myChar` to the console using `std::cout`.
*/

/*
2.declare a char variable named myLetter and assign it the value 'B'. without plagarism
Answer:
Certainly! In C++, you can declare a `char` variable named `myLetter` and assign it the value 'B' as follows:

```cpp*/
#include <iostream>

int main() {
    // Declare a char variable named myLetter and assign it the value 'B'
    char myLetter = 'B';

    // Print the value of myLetter to the console
    std::cout << "The value of myLetter is: " << myLetter << std::endl;

    return 0;
}
/*
```

In this example:

- The `char` data type is used to declare a variable named `myLetter`.
- The character 'B' is assigned to the `myLetter` variable.
- The program then prints the value of `myLetter` to the console using `std::cout`.

When you run this program, it will output:
*/

```
The value of myLetter is: B
```
/*
Feel free to use and modify this code according to your specific needs.
*/

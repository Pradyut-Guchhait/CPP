#include <iostream>
#include <string>
using namespace std;
//\\\\\\\\\\\\\\\\\\\DATATYPES\\\\\\\\\\\\\\\\//

// All variable use a dataype at the time of declaration
/*C++ Supports:
    *1.PRIMITIVE OR BUILT-IN OR FUNDAMENTAL DATATYPE
        #Integer(int)
        #Character(char)
        #Boolean(bool)
        #Floating Point(float)
        #Double Floating Point(double)
        #Valueless or Void(void)
        #Wide Character(wchar_t)

            <>Size of char : 1 byte
            <>char minimum value: -128
            <>char maximum value: 127
            <>Size of int : 4 bytes
            <>Size of short int : 2 bytes
            <>Size of long int : 8 bytes
            <>Size of signed long int : 8 bytes
            <>Size of unsigned long int : 8 bytes
            <>Size of float : 4 bytes
            <>Size of double : 8 bytes
            <>Size of wchar_t : 4 bytes
*/
int main()
{
    // Integer data types
    int a = 10;
    short b = 20;
    long c = 30;
    long long d = 40;
    cout << "Integer data types: " << endl;
    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;
    cout << "long long: " << d << endl;

    // Floating-point data types
    float e = 3.14f;
    double f = 3.141592;
    long double g = 3.14159265358979L;
    cout << "Floating-point data types: " << endl;
    cout << "float: " << e << endl;
    cout << "double: " << f << endl;
    cout << "long double: " << g << endl;

    // Character data types
    char h = 'a';
    wchar_t i = L'b';
    char16_t j = u'c';
    char32_t k = U'd';
    cout << "Character data types: " << endl;
    cout << "char: " << h << endl;
    wcout << "wchar_t: " << i << endl;
    cout << "char16_t: " << j << endl;
    cout << "char32_t: " << k << endl;

    // Boolean data type
    bool l = true;
    bool m = false;
    cout << "Boolean data type: " << endl;
    cout << "true: " << l << endl;
    cout << "false: " << m << endl;

    // String data type
    string n = "Hello, world!";
    cout << "String data type: " << endl;
    cout << n << endl;

    return 0;
}

/*
    *2.DERIVED DATATYPE
        ^Function: FunctionType FunctionName(parameters)
        ^Array: DataType ArrayName[size_of_array];
        ^Pointer: datatype *var_name;
        ^Reference: data_type &ref = variable;
*/
// Function
int add(int a, int b) { return a + b; }

// Array
int numbers[5] = {1, 2, 3, 4, 5};

// Pointer
int value = 10;
int *ptr = &value;

// Reference
int &ref = value;

int main()
{
    // Function usage
    int sum = add(5, 3);

    // Array usage
    int thirdElement = numbers[2];

    // Pointer usage
    int dereferencedValue = *ptr;

    // Reference usage
    ref = 20;

    cout << "Sum: " << sum << "\n";
    cout << "Third Element: " << thirdElement << "\n";
    cout << "Dereferenced Value: " << dereferencedValue << "\n";
    cout << "Value after reference change: " << value << "\n";

    return 0;
}

/*
    *3.ABSTRACT OR USER DEFINED DATATYPE
        #Class: class className{
                Access Spcifiers;      can be private, public or protected
                Data Memebers;         variables to be used
                Member Function(){}};  Methods to access datd members

        #Structure: struct structName{
                    char  varName[size];
                    int varName;
                    };

        #Union: Union_Name{
                    Declaration of data members
                }; union_variables;

        #Enumeration: enum  nameOfEnum{
                        varName1 = 1, varName2 = 0
                        };

        #Typedef Defined Datatype: typedef typeName;
*/
// Class
class MyClass
{
public:
    int x;
    void display() { std::cout << "Class x: " << x << "\n"; }
};

// Structure
struct MyStruct
{
    int y;
    void show() { std::cout << "Struct y: " << y << "\n"; }
};

// Union
union MyUnion
{
    int intValue;
    float floatValue;
};

// Enumeration
enum MyEnum
{
    RED,
    GREEN,
    BLUE
};

// Typedef
typedef unsigned long ulong;

int main()
{
    // Class usage
    MyClass objClass;
    objClass.x = 10;
    objClass.display();

    // Structure usage
    MyStruct objStruct;
    objStruct.y = 20;
    objStruct.show();

    // Union usage
    MyUnion objUnion;
    objUnion.intValue = 30;
    std::cout << "Union intValue: " << objUnion.intValue << "\n";

    // Enumeration usage
    MyEnum color = GREEN;
    std::cout << "Enum color: " << color << "\n";

    // Typedef usage
    ulong bigNumber = 1234567890;
    std::cout << "Typedef ulong: " << bigNumber << "\n";

    return 0;
}
//\\\\\\\\\\\\\\\\\\\\Data Type Ranges and their macros in C++\\\\\\\\\\\\\\\\\\\\\\\\\\//
/*
 *char ranges from: -128 to 127
 *short char ranges from: -128 to 127
 *unsigned char ranges from: 0 to 255
 *short int ranges from: -32768 to 32767
 *unsigned short int ranges from: 0 to 65535
 *int ranges from: -2147483648 to 2147483647
 *unsigned int ranges from: 0 to 4294967295
 *long int ranges from: -9223372036854775808 to 9223372036854775807
 *unsigned long int ranges from: 0 to 18446744073709551615
 *long long int ranges from: -9223372036854775808 to 9223372036854775807
 *unsigned long long int ranges from: 0 to 18446744073709551615
 *float ranges from: 1.17549e-38 to 3.40282e+38
 *negative float ranges from: -1.17549e-38 to -3.40282e+38
 *double ranges from: 2.22507e-308 to 1.79769e+308
 *negative double ranges from: -2.22507e-308 to -1.79769e+308
 */

//\\\\\\\\\\\\\\\\\\\\\\\\TYPE MODIFIERS\\\\\\\\\\\\\\\\\\//
/*
    <>signed Modifier: Signed variables can store positive, negative integers, and zero.
    <>unsigned Modifier: Unsigned variables can store only non-negative integer values.
    <>short Modifier: The short keyword modifies the minimum values that a data type can hold. It is used for small integers that lie in the range of −32,767 to +32,767.
    <>long Modifier: The long keyword modifies the maximum values that a data type can hold. It is used for large integers that are in the range of -2147483647 to 2147483647.
*/

/*Important Points about Data Type Modifiers:
    =>The modifiers for a data type can be combined.
    =>The long modifier can be used as twice as long long.
*/

//\\\\\\\\\\\\\\\\\\\\\\\\TYPE QUALIFIERS\\\\\\\\\\\\\\\\\\//
/*Type qualifiers are used to provide more information about a value while also guaranteeing that the data is used correctly.
    #const: Objects of type const cannot be altered during execution.
    #volatile: The modifier volatile tells the compiler that a variable’s value can be changed in ways that are not explicitly defined by the program.
    #restrict: A pointer qualified by restricting is initially the only means by which the object it points to can be accessed.
*/

//\\\\\\\\\\\\\\\\\\\\\\\\TYPE CONVERSION\\\\\\\\\\\\\\\\\\//
// There are two types of type conversion:
/*
    <>Implicit Type Conversion:
        -Implicit type conversion is a type of type conversion that occurs automatically when a value of one data type is assigned to a variable of another data type.
        -bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
        -signs can be lost and overflow can occur.
*/
int main()
{
    int x = 10;   // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;

    return 0;
}
/*
    <>Explicit Type Conversion:
    -Explicit type conversion is a type of type conversion that occurs when a value of one data type  is explicitly converted to another data type.
    -Explicit type conversion is used to prevent loss of data and overflow.
*/

/*Converting by assignment:
    =>Synatx: (type) expression
*/
int main()
{
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    cout << "Sum = " << sum;

    return 0;
}

/*Conversion using Cast operator:
  C++ supports four types of casting:
    <>Static Cast
    <>Dynamic Cast
    <>Const Cast
    <>Reinterpret Cast
     *read more during placements
*/
int main()
{
    float f = 3.5;

    // using cast operator
    int b = static_cast<int>(f);

    cout << b;
}

//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\LITERALS\\\\\\\\\\\\\\\\\\\\\\//
/*Here are a few key points about literals in C++:
    <>Integer Literals: Whole numbers, e.g., 42, 0x1A (hex), 052 (octal), 0b101 (binary).
    <>Floating-Point Literals: Numbers with decimals or in exponential form, e.g., 3.14, 2e5.
    <>Character Literals: Single characters enclosed in single quotes, e.g., 'A', '1', '\n'.
    <>String Literals: A sequence of characters enclosed in double quotes, e.g., "Hello", "World".
    <>Boolean Literals: Either true or false.
    <>Null Pointer Literal: The literal nullptr represents a null pointer.
    <>Constants: Literals are often used to define constant values in code.
    <>Literals represent fixed values that are directly written into the code.
*/
// Integer Literals
int decimal = 42;   // Decimal
int hex = 0x1A;     // Hexadecimal
int octal = 052;    // Octal
int binary = 0b101; // Binary

// Floating-point Literals
float pi = 3.14f;      // Float
double expValue = 2e5; // Exponential notation

// Character Literals
char ch = 'A';       // Character literal
char newline = '\n'; // Escape sequence

// String Literals
const char *str = "Hello, World!";

// Boolean Literals
bool flag = true;

// Null Pointer Literal
int *ptr = nullptr;
//\\\\\\\\\\\\\\\\\\\\\\\OPERATORS\\\\\\\\\\\\\\\\\\\\\\//
/*Types:
    ->Arithmetic Operators: Perform basic math operations: +, -, *, /, %.
    ->Relational Operators: Compare values: ==, !=, <, >, <=, >=.
    ->Logical Operators: Perform logical operations: &&, ||, !.
    ->Bitwise Operators: Operate on bits: &, |, ^, ~, <<, >>.
    ->Assignment Operators: Assign values: =, +=, -=, *=, /=, %=.
    ->Increment/Decrement Operators: Increase or decrease a value by one: ++, --.
    ->Conditional (Ternary) Operator: Shortcut for if-else: condition ? expr1 : expr2.
    ->Unary Operators: Operate on a single operand: +, -, ++, --, !.
    ->Sizeof Operator: Returns the size of a type or variable: sizeof.
    ->Comma Operator: Evaluates two expressions and returns the result of the second: ,.
*/
#include <iostream>

int main() {
    int a = 10, b = 5, result;

    // Arithmetic Operators
    result = a + b;   // Addition
    std::cout << "a + b = " << result << "\n";

    result = a - b;   // Subtraction
    std::cout << "a - b = " << result << "\n";

    result = a * b;   // Multiplication
    std::cout << "a * b = " << result << "\n";

    result = a / b;   // Division
    std::cout << "a / b = " << result << "\n";

    result = a % b;   // Modulo
    std::cout << "a % b = " << result << "\n";

    // Relational Operators
    std::cout << "a == b: " << (a == b) << "\n"; // Equal to
    std::cout << "a != b: " << (a != b) << "\n"; // Not equal to
    std::cout << "a > b: " << (a > b) << "\n";   // Greater than
    std::cout << "a < b: " << (a < b) << "\n";   // Less than
    std::cout << "a >= b: " << (a >= b) << "\n"; // Greater than or equal to
    std::cout << "a <= b: " << (a <= b) << "\n"; // Less than or equal to

    // Logical Operators
    std::cout << "(a > b && b > 0): " << ((a > b) && (b > 0)) << "\n"; // Logical AND
    std::cout << "(a > b || b > 10): " << ((a > b) || (b > 10)) << "\n"; // Logical OR
    std::cout << "!(a > b): " << !(a > b) << "\n";  // Logical NOT

    // Bitwise Operators
    std::cout << "a & b: " << (a & b) << "\n";  // Bitwise AND
    std::cout << "a | b: " << (a | b) << "\n";  // Bitwise OR
    std::cout << "a ^ b: " << (a ^ b) << "\n";  // Bitwise XOR
    std::cout << "~a: " << (~a) << "\n";        // Bitwise NOT
    std::cout << "a << 1: " << (a << 1) << "\n";  // Bitwise Left Shift
    std::cout << "a >> 1: " << (a >> 1) << "\n";  // Bitwise Right Shift

    // Assignment Operators
    result = a;    // Assign
    std::cout << "result = a: " << result << "\n";

    result += b;   // Add and assign
    std::cout << "result += b: " << result << "\n";

    result -= b;   // Subtract and assign
    std::cout << "result -= b: " << result << "\n";

    result *= b;   // Multiply and assign
    std::cout << "result *= b: " << result << "\n";

    result /= b;   // Divide and assign
    std::cout << "result /= b: " << result << "\n";

    result %= b;   // Modulo and assign
    std::cout << "result %= b: " << result << "\n";

    // Increment/Decrement Operators
    std::cout << "a++: " << a++ << "\n";   // Post-increment
    std::cout << "++a: " << ++a << "\n";   // Pre-increment
    std::cout << "b--: " << b-- << "\n";   // Post-decrement
    std::cout << "--b: " << --b << "\n";   // Pre-decrement

    // Conditional (Ternary) Operator
    int max = (a > b) ? a : b;
    std::cout << "Max of a and b: " << max << "\n";

    // Sizeof Operator
    std::cout << "Size of a: " << sizeof(a) << " bytes\n";

    // Comma Operator
    int x = (a = 2, b = 4, a + b);   // Evaluates left to right
    std::cout << "Result of comma operator: " << x << "\n";

    return 0;
}

/*In C++, the scope resolution operator is "::" . 
    #It is used for the following purposes.
        <>To access a global variable when there is a local variable with same name.
        <>To define a function outside a class. 
        <>To access a class’s static variables. 
        <>In case of multiple Inheritance.
        <>For namespace.
        <>Refer to a class inside another class.
        <>Refer to a member of the base class in the derived object.
*/

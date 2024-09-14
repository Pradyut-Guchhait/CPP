/*
*How to declare a variable:
    data_type variable_name;
*Multiple variable:
    data_type variable1, variable2, variable3;
*/

//Variable Declaration,initialisation and defination
int main(){
    int a; //declaration
    a=10; //initialisation

    int b = 20; //defination = declaration + initialisation

    char a123 = 'a'; //declaration and defination of a variable a123

    float c; //both declaration and defination as some garbage value iss being assigned

    return 0;

}

/*Types of variable:
1.Local  variable: A variable defined within a block or method or constructor is called a local variable.
2.Instance  variable: A variable defined within a class but outside any method or constructor is called an instance variable.
3.Static variable:  A variable defined with the static keyword is called a static variable, also known as class variable. 
*/
class Ex{

    int a; //instance variable
    static int b; //static variable
};

/*Constants:  Once declared and initialized can not be modified
*How to declare:
    const data_type variable_name = value;
*/
const int int_const = 5; //integer
const char char_const = 'A'; //char
const float float_const = 15.66; //float

/*Defining Constant using #define Preprocessor
    #define const_name value
*/
#define pi 3.14 //now the value of pi is 3.14 and cannot be changed

//\\***/Scope of Variables/***\\//
/*Two types of variable scopes
1.Local: ^The variables defined within a block or method or constructor are called local variables. 
         ^Can be accessed only within the block or method or constructor.

2.Global:^The variables defined outside any block or method or constructor are called global variables.
         ^Can be accessed from any block or method or constructor.
*/
// global variable 
int global = 5; 
  
int main() 
{    
    // local variable with same  
    // name as that of global variable 
      
    int global = 2; 
    cout << global << endl; 
} 
//Compiler will give precedence to local variable over global variable. 

//\**What if we want to acces the Global variable**\// 
// Global x   
int x = 0;   
    
int main() 
{ 
  // Local x     
  int x = 10;  

  //We will use  scope resolution operator to access the global variable.
  cout << "Value of global x is " << ::x;
  cout<< "\nValue of local x is " << x;   
  return 0; 
} 

//\\***/STORAGE CLASSES IN C++/***\\//
/*Used to describe the characteristics of a variabl/function.
*Syntax:storage-class var_data_type var_name;
*/

/*///*Types of Storage Classes in C++*///*/
/*1.Auto: ^The variable declared inside a block or function is called an auto variable.
        ^It is the default storage class in C++.
        ^Properties of auto Storage Class Objects
            =>Scope: Local
            =>Default Value: Garbage Value
            =>Memory Location: RAM
            =>Lifetime: Till the end of its scope
*/
void autoStorageClass()
{
    cout << "Demonstrating auto class\n";

    // Declaring an auto variable
    int a = 32;
    float b = 3.2;
    char* c = "GeeksforGeeks";
    char d = 'G';

    // printing the auto variables
    cout << a << " \n";
    cout << b << " \n";
    cout << c << " \n";
    cout << d << " \n";
}

int main()
{
    // To demonstrate auto Storage Class
    autoStorageClass();

    return 0;
}

/*2.Register: ^The variable declared inside a function and stored in the register is called a register variable.
            ^It is used to store the variable in the CPU register.
            ^An important and interesting point to be noted here is that we cannot obtain the address of a register variable using pointers.
            ^Properties of register Storage Class Objects
                =>Scope: Local
                =>Default Value: Garbage Value
                =>Memory Location: Register of CPU or RAM
                =>Lifetime: Till the end of its scope
*/
void registerStorageClass()
{

    cout << "Demonstrating register class\n";

    // declaring a register variable
    register char b = 'G';

    // printing the register variable 'b'
    cout << "Value of the variable 'b'"
         << " declared as register: " << b;
}
int main()
{

    // To demonstrate register Storage Class
    registerStorageClass();
    return 0;
}

/*3.Static: ^The variable declared inside a function or block and retains its value between function calls is called a static variable.
          ^It is used to preserve the value of a variable between function calls.
          ^Properties of static Storage Class
                =>Scope: Local
                =>Default Value: Zero
                =>Memory Location: RAM
                =>Lifetime: Till the end of the program
          ^Note: Global Static variable can be accesed in any function
*/
// Function containing static variables
// memory is retained during execution
int staticFun()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;
}
// Function containing non-static variables
// memory is destroyed
int nonStaticFun()
{
    cout << "For Non-Static variables: ";

    int count = 0;
    count++;
    return count;
}

int main()
{
    // Calling the static parts
    cout << staticFun() << "\n";
    cout << staticFun() << "\n";
    
    // Calling the non-static parts
    cout << nonStaticFun() << "\n";
    cout << nonStaticFun() << "\n";
    
    return 0;
}

/*4.External: ^The variable declared outside any function or block and can be accessed from any block or function is called an external variable.
            ^It is used to share the value of a variable among different functions.
            ^Properties of extern Storage Class Objects
                =>Scope: Global
                =>Default Value: Zero
                =>Memory Location: RAM
                =>Lifetime: Till the end of the program.
*/
// declaring the variable which is to
// be made extern an initial value can
// also be initialized to x
int x;
void externStorageClass()
{

    cout << "Demonstrating extern class\n";

    // telling the compiler that the variable
    // x is an extern variable and has been
    // defined elsewhere (above the main
    // function)
    extern int x;

    // printing the extern variables 'x'
    cout << "Value of the variable 'x'"
         << "declared, as extern: " << x << "\n";

    // value of extern variable x modified
    x = 2;

    // printing the modified values of
    // extern variables 'x'
    cout << "Modified value of the variable 'x'"
         << " declared as extern: \n"
         << x;
}

int main()
{
    // To demonstrate extern Storage Class
    externStorageClass();

    return 0;
}

/*5.Mutable: ^The variable declared as mutable can be modified inside a const object.
             ^When we declare a function as const, this pointer passed to the function becomes const.
              Adding a mutable to a variable allows a const pointer to change members.
             ^Properties of mutable Storage Class Objects
                =>Scope: Block
                =>Default Value: Not Applicable
                =>Memory Location: RAM
                =>Lifetime: Till the end of the block.
*/
class Test {
public:
    int x;
    // defining mutable variable y
    // now this can be modified
    mutable int y;
    Test()
    {
        x = 4;
        y = 10;
    }
};

int main()
{
    // t1 is set to constant
    const Test t1;

    // trying to change the value
    t1.y = 20;
    cout << t1.y;

    // Uncommenting below lines
    // will throw error
    // t1.x = 8;
    // cout << t1.x;
    return 0;
}

/*6.Thread Local:  ^The variable declared as thread_local is local to each thread in a program.
^It is used to store data that is unique to each thread.
^Properties of thread_local Storage Class Objects
=>Scope: Thread
=>Default Value: Not Applicable
=>Memory Location: RAM
=>Lifetime: Till the end of the thread.
*/
// Defining thread-local variable
thread_local int value = 10;
// Mutex for synchronization
mutex mtx;

int main()
{
    // Created 3 threads
    // Modify value in thread 1
    thread th1([]() {
        value += 18;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 1 value: " << value << '\n';
    });

    thread th2([]() {
        // Modify value in thread 2
        value += 7;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 2 value: " << value << '\n';
    });

    thread th3([]() {
        // Modify value in thread 3
        value += 13;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 3 value: " << value << '\n';
    });

    // Wait for all threads to finish
    th1.join();
    th2.join();
    th3.join();

    // Print the value of value in the main thread
    cout << "Main thread value: " << value << '\n';

    return 0;
}

//\\***STATIC KEYWORD IN C++***\\//
/*Static Variables: Variables in a function, Variables in a class
*Static Members of Class: Class objects and Functions in a class.
*/
/*
*Static variables in a Function: 
    When a variable is declared as static, 
    space for it gets allocated for the lifetime of the program. 
    Even if the function is called multiple times, 
    space for the static variable is allocated only once and 
    the value of the variable in the previous call gets carried through the next function call. 
*/
void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";
 
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}
 
int main()
{
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}


/*
*Static  Variables in a Class: 
    The static variables in a class are shared by the objects. 
    There can not be multiple copies of the same static variables for different objects. 
    Also because of this reason static variables can not be initialized using constructors. 

*/
class GfG {
public:
    static int i;
 
    GfG(){
        // Do nothing
    };
};
 
int GfG::i = 1;
 
int main()
{
    GfG obj;
    // prints value of i
    cout << obj.i;
}

/*
*Class objects as static: 
    Just like variables, objects also when declared as static 
    have a scope till the lifetime of the program.
*/
class GfG {
    int i;
 
public:
    GfG()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
    ~GfG() { cout << "Inside Destructor\n"; }
};
 
int main()
{
    int x = 0;
    if (x == 0) {
        GfG obj;
    }
    cout << "End of main\n";
}

/*
*Static functions in a class:
    Static member functions are allowed to access only the static data members or 
    other static member functions they can not access the non-static data members 
    or member functions of the class. 
*/
class GfG {
public:
    // static member function
    static void printMsg() { cout << "Welcome to GfG!"; }
};
 
// main function
int main()
{
    // invoking a static member function
    GfG::printMsg();
}
C++ Language:
-------------
[references]:
  1. [cplusplus.com](https://cplusplus.com/doc/tutorial/program_structure/)
  2. 

# Introduction
---------------
## Compilers
Compilers translate human-readable high-level programming languages to machine language which computers understand.
More on code how code gets executed: [Code to execution](https://github.com/Protyasha-Roy/ICPC/blob/main/code-execution.md)

# Basics of C++
---------------
## Structure of a program
```c++
  #include <iostream>

  using namespace std;

  int main() {
    cout << "Hello world!" << endl; // prints hello world to the screen
    return 0;
  }
```

Elements in the code above:
1. Comments: Lines are '//' are single line comments. To write comments in multiple lines c++ uses '/* some comment in multiple lines */'

2. Lines starting with '#' are directives. There are multiple preprocessor and compiler directives. #include is a preprocessor directive that
includes a section of the standard c++ code, named as header iostream.

3. using namespace std: namespaces are rules to wrap declarations under a single name. It's to avoid naming collisions(entities with different
functionalities but with same name will cause collision). The 'using' keyword gives us access to the whole std namespace and lets us qualify
name of an entity in an unqualified manner(without the prefix 'std::'). '::' this is known as scope resolution operator. It's to access an object/entity
/properties of entities.

4. int main(){}: this is a function, specifically main function, this is where the program gets executed from. Everything inside the curly braces
gets executed one by one following the statements. Statements are expressions. Ends with a semicolon(;).

5. cout << "Hello world!" << endl; This is a statement that says, "Insert the string Hello world! to the character-output device(the console in this case)
and end the line/go to the next line". 'endl' is a manipulator here that prints a new line and flushes the stream. A manipulator is a special function
in C++ that is used with input/output
streams (like cin, cout ) to change the way data is shown or read

6. return 0; Non-void functions always return a value of the function's type. In this case the function is of type 'int' and so it returns an integer
return value 0. 0 means successful execution in this case. It's to indicate that the program reached it's last line and was successfully compiled.
No errors were found before this line.

## Variables and types
Computers have memories. Memories store values. CPU can perform tasks based on the values stored in these memories.
In programming, we can define portion of  memories as variables in our program, in order to store different types of values.
And each variable needs to be named. So now we can give names to those portions of memories.
Names of the variables help the compiler identify them. So they need to be unique as well as follow certain naming conventions/rules.
Because they are used to identify portion of memories, they are also called **identifiers**.

Naming of Identifiers:
1. Can contain-
  a. Letters (capital or small)
  b. Digits
  c. Underscores
2. Must start with letter or underscore, not a digit. Though underscores are considered to be reserved for compiler-specific-keywords.
3. Can't contain spaces, symbols, punctuation marks
4. Can't be language-specific reserved keywords.
5. Case-sensitive.

Declaring variables:
Declaraing a variable can be easily done with the following syntax-
[type] [identifier]
```c++
  int number; // We can assign value to this variable later
```

First we need to tell what kind of data we want to store in this portion of memory. And then the name/identifier of the variable.
Variables declared without initialization(giving default values to store) store garbage value in that memory portion.
So to avoid storing garbage value, we can initialize a variable with some value. For example:
```c++
  int number = 10; // the equal sign is an operator here. Operators let us perform certain tasks with variables.
```
There are multiple ways to declare and initialize a variable in c++.
Other ways are-
```c++
  // Declaring variables of the same type in a single line
  int number_one, number_two, sum;

  // Different ways to initialize a variable in c++
  int number = 120; // c-like initialization
  int number(120); // constructor initialization
  int number {120}; // uniform initialization
```

Fundamental data types:
Since variables store data and there are multiple types of data, there are
multiple data types in c++. The most basic data types can be classified into:
  1. Character type: single characters.
  2. Integer type: whole numbers.
  3. Floating-point type: numbers with decimal point. Can hold values of
  different precision levels.
  4. Boolean type: can hold true or false.

Complete list of fundamental types in C++:
Character types:
char  
char16_t 
char32_t 
wchar_t - can represent the largest supported character


Integer types(signed):
signed char 
signed short it 
signed int 
signed long int 
signed long long int

Integer types(unsigned): sizes same as signed counterparts
unsigned char
unsigned short int
unsigned int
unsigned long int
unsigned long long int

Floating:
float
double - more precision than float
long double - more precision than double

Booleunsignedan type:
bool

Others:Void type:
void - no storage.

Null pointer:
decltype(nullptr)

The signed, unsigned long, short keywords are also known as type modifiers.
Whereas, int, float etc are type specifiers.

The properties of fundamental types in a particular system and compiler implementation
can be obtained by using the numeric_limits classes (see standard header <limits>). If
for some reason, types of specific sizes are needed, the library defines certain fixed-size
type aliases in header <cstdint>.


The above types are also known as the 'arithmetic types' except the void and nullptr types.
Many other types are derived based on these types known as 'compound data types'(derived and user-defined).
One compound type is the class string. To use string types, we need to include the header where the type
is defined within the standard library.

Type deduction: auto and decltype:
For initialized variables, using the type specifier 'auto' is used to automatically figure out the type of the variable.
For example: auto foo = 45; // automatically figures out its an integer type.

For uninitialized variables, the 'decltype()' is used.
For example:
int foo = 23;
decltype(foo) bar; // same type as foo.

## Constants
Literals are the most obvious kinds of contants. These are:
  - Integer literals(numerical constant)
  - Octal and hexadecimal numerals.
  - String/character literals.
  - nulltpr
  - true/false.
Their types can be specified too. For that we need to use suffix letters for different types.
For example: u(unsigned), U, l, L, e, F, f, j, u8, R. Though these are different for different types.
Octal and hexadecmial need prefix.
For octal it starts with 0 and for hexadecimal it starts with 0x.

We can directly use these literals, as well as keep them in variables as constants with the
'const' keyword.
const [type] [identifier]

Another way is to use the preprocessor directive 'define' to define the constants.
Like : #define [identifier] [replacement-value]

Though there are differences between defining a constant with the define directive and
declaring a constant variable.



## Operators
There are a lot of operators to operate variables and constants that define the direction
of the program. These operators are:

  1. Assignment operator(=): assigns value to one or multiple variables.
  2. Arithmetic operators(+, -, *, /, %): Used to perform arithmetical operations.
  3. Compound assignment(+=, -=, *=, /=, %=): Used to perform an arithmetic and assignment
  operation at the same time. x += 5; // is equivalent to x = x + 5;
  4. Increment and decrement(++, --): Used to increment or decrement a variable by 1.
  Has two ways to use. Pre-increment/decrement and post-increment/decrement.
  In case of prefix it first increases/decreses the value and then assigns.
  In case of suffix it first assigns and then increases/decreses.
  5. Relational and comparison operators(==, !=, >, <, <=, >=): Used to compare two expressions.
  6. Logical operators(!, &&, ||): Used to make relational evaluations. The || operator never checks
  the second expression if the first expression is true. This is called 'short-circuit evaluation'
  Same happens for && operator. If the left hand-side is false the whole expression becomes false
  ignoring the right side expression.
  7. Conditional ternary operator(?): condition ? result1 : result2
  8. Comma operator(,): It's to separate two or more expressions where only one expression is expected
  and the right-most expression gets considered. For example: a = (b=3, b+2) // here b is assigned
  3 and a is assigned 5.
  9. Bitwise operators(&, |, ^, ~, <<, >>): 
  10. Explicit type casting operator(()): Used to value of one type to another type. Example:
  int i;
  float f = 2.23;
  i = (int) f; // here the value of f gets converted to int, so anything after the decimal point gets excluded.

  Another way to express this is using the functional notation.
  i = int (f);
   
  11. sizeof operator: sizeof(char) returns 1 because char takes one byte of space. So sizeof
  operator is used to get the size of a specific type.
  12. Other operators referring to pointers and object-oriented programming.


These operators have precedence too. Most grouping happens left-to-right except
Prefix(unary) and assignment-level expressions happen right-to-left.
We can change precedence by enclosing expressions inside parenthesis.
When an expression has two operators with the same precedence level,
grouping determines which one is evaluated first: either left-to-right or right-to-left
  
## Basic Input/Output
C++ handles input/output devices through objects called 'stream'.
We receive/pass character to/from these streams in order to access differnt input/output
devices. On most environments an output device is a screen. And the C++ stream object to access it
is 'cout' and input device is the keyboard, and the stream object to access it is 'cin'

cout is used with the insertion operator(<<)
cin is used with the extraction opeartor(>>)

Using the cin has some drawbacks. For example, it can't handle inputs that are not appropriate
for the variable type the cin is taking input for. It also considers spaces(whitespaces, tabs,
new lines..) as terminating value. So can't handle strings as well.

To handle strings with multiple words, the getline(cin, [variable]) function is used.
To handle user input with better control stringstreams are used.

Stringstream:
The standard header <sstream> defines a type called 'stingstream' that allows a string to be
treated as a stream, thus allowing extraction and insertion operations from/to strings in the
samen way they are performed in cin and cout.
For example:
```c++
    string mystr("123");
    int myint;
    stringstream(mystr) >> myint;
```


# Program Structure
---------------------
## Statements and flow control
There are statements to control the flow of a program. These are:
  1. Selection statements: if and else, switch-case.
  2. Iteration statements: for, range-based for, while, do while loops.
  3. Jump statements: break, continue, goto label.


Switch-case requires a constant, not a variable as expression, as well as literals as cases to check.
Also requires break statements at the end of each case so that it can go to the next case if the current
case does not match and also if it matches, it just breaks out of the switch statement.
If no cases match, then there is option to add default, though this is optional.
Continue statements skips rest of the code (from where the continue statement appears) and goes to
the next iteration.

Example of range-based for loops:
string str {"some string"}
for(char c : str) { statements; }

Examples of goto-label:
[identifier]:
  statements here..;

  [condition] goto [identifier];


## Functions
Functions are blocks of statements meant to do a single task. It increases reusability of chunks of code and reduces repetition.
Syntax:
[return-type] [identifier]([type of parameter] [identifier], ...) {
  code statements here..
  [return something of the return type]
}

A function is needed to be called from somewhere. When calling a function, we need to pass arguments of the same type as the parameters
and sequentially. These values get copied to the paramenters respectively. This is called arguments passed by value.
We can also pass by reference using the & sign in the parameters list in the function's header.
Passing by reference creates an alias for the variables being passed on as arguments. So any change made from within the function
affects the variable's values directly from the function its being passed from.
exmaple:
```c++
  int myfun(int& a, int&b) { // it doesn't create copy, it aliases.
    return 1;
  }
```

Functions with no type have the return type of 'void'.
The main function have return values: 0, EXIT_SUCCESS, EXIT_FAILIURE

Sometimes its more efficient to pass arguments by reference as passing by value copies the whole argument to the parameters
causing an overhead. And somtimes it's not required to use passing by reference.

For functions that are too short or straightforward, we can just use the keyword 'inline' before the function's
return type. Adding inline doesn't make a regular function call for this function, rather it just replaces the call
with the actual code of this function.

We can set default values for parameters too. Like a regular assignment operation.

If we want to define function's after the main function, we need to create prototype before the main function.
A prototype is just the declaration of the function's types and structure. Only the header and ends with a semicolon.
[type] [identifier]([types of parameters with or without their identifiers]);


We can call function's from within the same function. This is called recursivity. Used in sorting elements and in finding factorials.

## Overloads and templates
Two or more functions can have the same name in C++ if there is difference in their parameters either by-
  1. Number of parameters
  2. Parameter types
This is called function overload/overloaded functions.
Overloaded functions may or may not have same definition.

For overloaded functions with the same definition it's possible in C++ to create a template for generic types.
It's called function templates. And have almost the same sytax as defining a function.
It's preceeded with a 'template' keyword along with some parameters enclosed in angle brackets <>.

template <template-parameters> function-declaration

```c++
    template <class SomeType, class AnotherType, int N> // we can also use the keyword typename to define the name of the generic type
    SomeType sum (SomeType a, SomeType b)
    {
      return a+b;
    }

    int main() {
      cout << sum<int, double>(2, 23.22); // we can also leave the angle brackets, it automatically detects from the arguments types passed.
      cout << sum<int, int, 3>(32,33); // Non-type template arguments. So we can directly declare a typed variable inside the template and fix a value during call.
    }
```

We can define multiple types by separating with a comma in the types list inside template's angle brackets.

## Name visibility
Variables can't be accessed randomly. It depends on where a variable is being declared.
Two scopes:
  1. Global scope: variables/entities declared outside the main function or any other function.
  2. Local scope: locally declared variables/entities.

In C++ we can even create local blocks of code without creating a different function for it using the curly braces.
```c++
// inner block scopes
#include <iostream>
using namespace std;

int main () {
  int x = 10;
  int y = 20;
  {
    int x;   // ok, inner scope.
    x = 50;  // sets value to inner x
    y = 50;  // sets value to (outer) y
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';
  return 0;
}
```

Namespaces are another way to wrap entities to group them under a common name. This is done to avoid naming collisions and helps in scoping.
Declaring a namespace:
namespace [identifier] {
  entities..
}

There are two ways to use a namespace:
  1. [namespace-identifier]::entity // here :: is named a scope resolution operator that help us access entities from the namespace. Needs to be used everytime the entity is used.
  2. 'using' keyword: using namespace [namespace-identifier] // This gives a global qualification of names. We can even only access single entities instead of the whole namespace.
  We can introduce names in the declarative region.

The storage for variables with global or namespace scope is allocated for the entire duration of the program. This is known as static storage, and it contrasts with the storage
for local variables (those declared within a block). These use what is known as automatic storage.

static variables: persists through the whole program. initializes 0 to variables that are not initialized.
automatic variables: only persists till the function it was declared in. initializes undetermined values.



# Compound data types
## Arrays
Arrays are compound types. Arrays are basically sequences of data. A specific array can store data of a specific type in a sequantial manner in memory.
So, instead of creating multiple variables for the same type, we can simply store data as arrays and access with a single identifier.
Syntax to declare arrays:
[type] [identifier][size-of-array] = {elements here separated by comma...};

We can as well create multi-dimensional arrays that act like rows and columns.
[type] [identifier][rows][cols][and more....];

But in case of multi-dimensional arrays the number of memory blocks it takes increasees exponentially.
But with a formula we can represent 2D arrays in 1D arrays. The formula is:

Index = arr[(i * cols) + j] // if arr[rows][cols] is an array and the th' element is arr[i][j];

By default empty arrays are given values of 0.
We can't use pointers without defining it's size if we are not initializing the values. Otherwise we can just leave the [] empty if we do initialize the values.
We access array's values using their index. Index starts with 0.

In C++/C we can't send arrays directly as arguments/parameters like variables. What we need to send is the address. In order to use arrays in functions:
Calling the function:
int arr[3] = {3,4,5};
somefunction(arr, 3);

Function def:
int somefunction(arr[], int size) {
  rest of the code...
}

As alternative to built-in arrays, we have container library array which actually allows copying the whole block of memory, thus an expensive operation.
In ordeer to use this we need to include the <array> library. It's basically a class template.
Usage:
array<[type-of-array], size> [identifier] {elements..};
Accessing it is similar to built-in arrays.

## Character sequences
Strings are essentially arrays of type character.
Thus, we can actually create a string of characters using arrays.
char str[20] = {'h', 'e', 'l', 'l', 'o', '\n'};

though in this case we need to add a null-terminator character - '\0'; this tells the compiler that it's the end of the string.

We can also define array strings with string literals like:
char str[] = "hello";

In this case the null-terminated character gets added automatically. So, everytime we work with built-in arrays and strings, we have
to keep in mind to also consider storage for the null-terminated character.
Also string arrays can't be redefined if defined once. We can only change characters by changing each element one by one using str[index] = 'j'.


We can turn array-strings to library strings and vice-versa.
char str[] = "hello"; // this type of strings are also known as c-strings. 
string strr = str;
and
str = strr.c_str(); // we need to include c_str() method/function from <string> library.


## Pointers
## Dynamic memory
## Data structures
## Other data types

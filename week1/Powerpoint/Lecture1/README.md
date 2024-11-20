# Lecture 1 Source Code

## Files

`example.c`
: Simple C program demonstrating use of text strings and I/O using the
`printf()` and `scanf()` functions.

`example.cpp`
: C++ equivalent of `example.c`, showing the different approach used for
text representation and I/O.

`example2.cpp`
: Equivalent program to `example.cpp`, showing how a `using namespace`
statement allows us to omit the tedious `std::` prefix when using elements
of the standard library in our code.

`iodemo.cpp`
: Another example of I/O in C++, also demonstrating how we can check the
fail bit to see whether an input operation succeeded.

`iodemo2.cpp`
: Variation of `iodemo.cpp` showing how an input operation can be incorporated
into a test to see whether input succeeded.

`stringdemo.cpp`
: Demonstration of some of the things we can do with C++ strings, showing
that text handling is much easier in C++ than in C.

`vecdemo.cpp`
: Demonstration of some of the things we can do with C++ vectors.

FOR VECTORS:
1. Default Constructor:
vector<int> a;

- Creates an empty vector of integers.
- Size is 0.

2. Specify Initial Size:
vector<int> b(10);

-Creates a vector with 10 elements initialized to 0 (default for integers).

3. Initialize With Specific Values:
vector<int> c(5, -1);

- Creates a vector with 5 elements, each initialized to -1.

4. Copy Constructor:
vector<int> d(c);

- Creates a copy of vector c

5. Vector of Strings:
vector<string> p;
vector<string> q(5, "xyz");

- p: An empty vector of strings.
- q: A vector of 5 strings, each initialized to "xyz".

A) Dynamic Nature of Vectors
>> Vectors dynamically resize themselves:

    1. When adding elements, they grow automatically if needed.
    2. Memory is managed internally, unlike static arrays.

B) Advantages of Vectors
1. Dynamic resizing.
2. Easy to use compared to manual memory management with arrays.
3. Rich set of member functions for operations like insertion, deletion, and access.

## References:
A reference in C++ is an alias for an existing variable. When you create a reference, you essentially create another name for the same memory location. References are particularly useful when working with functions, avoiding unnecessary copying of data.

References are defined using the & symbol.

Here’s the general syntax:

int x = 10;      // Variable
int& ref = x;    // Reference to x
ref is a reference to x.
Any changes made to ref will affect x because they point to the same memory location.



## Compiling

Compile `example.c` with

    gcc -o example example.c

All of the C++ programs can be built using CMake. Execute this command
once to set up the build process:

    mkdir build && cd build && cmake ..

Thereafter, you can build a program from within the `build` directory
using the `make` command, e.g.

    make iodemo

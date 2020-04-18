/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

#include <iostream>


struct FloatType
{
    float add(float lhs, float rhs);
    float subtract(float lhs, float rhs);
    float multiply(float lhs, float rhs);
    float divide(float lhs, float rhs);
};

float FloatType::add(float lhs, float rhs)
{
    return lhs + rhs;
}

float FloatType::subtract(float lhs, float rhs)
{
    return lhs - rhs;
}

float FloatType::multiply(float lhs, float rhs)
{
    return lhs * rhs;
}

float FloatType::divide(float lhs, float rhs)
{
    if (rhs == 0)
    {
        std::cout << "Warning: You are dividing by zero" << std::endl;
    }
    return lhs / rhs;
}

struct DoubleType
{
    double add(double lhs, double rhs);
    double subtract(double lhs, double rhs);
    double multiply(double lhs, double rhs);
    double divide(double lhs, double rhs);
};

double DoubleType::add(double lhs, double rhs)
{
    return lhs + rhs;
}

double DoubleType::subtract(double lhs, double rhs)
{
    return lhs - rhs;
}

double DoubleType::multiply(double lhs, double rhs)
{
    return lhs * rhs;
}

double DoubleType::divide(double lhs, double rhs)
{
    if(rhs == 0)
    {
        std::cout << "Warning: You are dividing by zero" << std::endl;
    }
        return lhs / rhs; FIXME indentation
}

struct IntType
{
    int add(int lhs, int rhs);
    int subtract(int lhs, int rhs);
    int multiply(int lhs, int rhs);
    int divide(int lhs, int rhs);
};

int IntType::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int IntType::subtract(int lhs, int rhs)
{
    return lhs - rhs;
}

int IntType::multiply(int lhs, int rhs)
{
    return lhs * rhs;
}

int IntType::divide(int lhs, int rhs)
{
    if (rhs == 0)
    {
        std::cout << "Division by zero is not allowed" << std::endl;
        return 0;
    }
    else FIXME: return 0 is the last thing that happens if the 'if()'' block is entered.  that means you don't need this 'else' block'
    {
        return lhs / rhs;
    }
}

int main()
{
    FloatType ft1;
    FloatType ft2;
    FloatType ft3;

    float result1 = ft1.add(45.7f, 34.6f);
    float result2 = ft2.subtract(98.4f, 12.9f);
    float result3 = ft3.multiply(2.7f, 98.23f);
    float result4 = ft1.divide(2.7f, 0.0f);

    std::cout << "result of ft1.add(): " << result1 << std::endl;
    std::cout << "result of ft2.subtract(): " << result2 << std::endl;
    std::cout << "result of ft3.multiply(): " << result3 << std::endl;
    std::cout << "result of ft1.divide(): " << result4 << std::endl;

    DoubleType d1;
    DoubleType d2;
    DoubleType d3;

    double resultD1 = d1.add(83.23, 94.12);
    double resultD2 = d2.subtract(93.01,68.94);
    double resultD3 = d3.multiply(19.23, 784.12);
    double resultD4 = d1.divide(0, 27.06);

    std::cout << "result of d1.add(): " << resultD1 << std::endl;
    std::cout << "result of d2.subtract(): " << resultD2 << std::endl;
    std::cout << "result of d3.multiply(): " << resultD3 << std::endl;
    std::cout << "result of d1.divide(): " << resultD4 << std::endl;

    IntType i1;
    IntType i2;
    IntType i3;

    int resultI1 = i1.add(3214, 87);
    int resultI2 = i2.add(7, 482);
    int resultI3 = i3.add(834, 7);
    int resultI4 = i1.add(4, 2);

    std::cout << "result of i1.add(): " << resultI1 << std::endl;
    std::cout << "result of i2.subtract(): " << resultI2 << std::endl;
    std::cout << "result of i3.multiply(): " << resultI3 << std::endl;
    std::cout << "result of i1.divide(): " << resultI4 << std::endl;

    std::cout << "good to go!" << std::endl;
}

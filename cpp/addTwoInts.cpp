// Create a function that takes a number as an argument. Add up all the numbers from 1 to the number you passed to the function. For example, if the input is 4 then your function should return 10 because 1 + 2 + 3 + 4 = 10.

#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int result = add(1, 3);
    std::cout << result << std::endl;

    return 0;
}
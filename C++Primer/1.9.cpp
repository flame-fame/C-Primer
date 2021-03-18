#include <iostream>
int main()
{
    int i = 50;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        ++i;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;

    int a = 10;
    while (a >= 0)
    {
        std::cout << "The value of a is " << a << std::endl;
        --a;
    }

    int v1 = 0, v2 = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "All numbers between " << v1 << " and " << v2 << " is " << std::endl;
    int max = v1, min = v2;
    if (v1 < v2)
    {
        max = v2;
        min = v1;
    }
    while (min < max - 1)
    {   
        ++min;
        std::cout << min << std::endl;
    }
    return 0;
}
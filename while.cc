#include <iostream>
int main()
{
    int result = 0;
    for (int a = 10; a >= 0; --a)
    {
        result += a;
        std::cout << a << " ";
    }
    std::cout << std::endl;
    // std::cout << result << std::endl;
    return 0;
}
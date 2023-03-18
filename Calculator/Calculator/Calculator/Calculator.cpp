#include <iostream>
#include <vector>

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}

double div(double x, double y)
{
    return x / y;
}

int main()
{
    bool keepAsk = true;
    const char terminate = 'x';
    char ter;
    int choice = 0;
    double first, second;
    double res;

    std::cout << "enter first num : "; std::cin >> first;
    std::cout << std::endl;
    std::cout << "enter second num : "; std::cin >> second;

    std::cout << "1. add\n" << "2. sub\n" << "3. mul\n" << "4. div\n";

    std::cin >> choice;

    switch (choice)
    {
    case 1:
        res = add(first, second);
        std::cout << res << std::endl;
        break;

    case 2:
        res = sub(first, second);
        std::cout << res << std::endl;
        break;
    case 3:
        res = mul(first, second);
        std::cout << res << std::endl;
        break;
    case 4:
        res = div(first, second);
        std::cout << res << std::endl;
        break;
    default:
        std::cout << "wrong choice" << std::endl;
    } 

    std::cout << "press x to terminate";

    std::cin >> ter;

    if (ter == terminate)
        keepAsk = false;

    if (keepAsk)
    main();
}


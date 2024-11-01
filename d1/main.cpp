#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    char charachter;
    int floor = 0;

    while (std::cin >> charachter)
    {
        if (charachter == '(')
        {
            floor++;
        }
        else if (charachter == ')')
        {
            floor--;
        }
    }

    std::cout << floor << std::endl;

    return 0;
}
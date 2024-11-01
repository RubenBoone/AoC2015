#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    char charachter;
    int floor = 0;
    int pos = 0;

    while (std::cin >> charachter)
    {
        if (charachter == '(')
        {
            floor++;
            pos++;
        }
        else if (charachter == ')')
        {
            floor--;
            pos++;
        }

        if (floor == -1)
        {
            std::cout << pos << std::endl;
            break;
        }
    }

    std::cout << floor << std::endl;

    return 0;
}
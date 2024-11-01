#include <iostream>
#include <limits>

int isMin(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    std::string line;
    int total = 0;

    while (std::cin >> line)
    {
        int l = 0;
        int w = 0;
        int h = 0;
        int min = std::numeric_limits<int>::max();

        std::string buffer;
        for (auto &&c : line)
        {
            if (c == 'x')
            {
                if (l == 0)
                {
                    l = std::stoi(buffer);
                }
                else if (w == 0)
                {
                    w = std::stoi(buffer);
                }
                buffer.clear();
            }
            else
            {
                buffer += c;
            }
        }

        h = std::stoi(buffer);

        min = isMin(min, h * l);
        min = isMin(min, w * h);
        min = isMin(min, l * w);

        total += 2 * l * w + 2 * w * h + 2 * h * l + min;
    }

    std::cout << total << std::endl;

    return 0;
}
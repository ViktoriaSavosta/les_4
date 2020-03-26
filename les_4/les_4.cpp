#include <iostream>

// 1 - Enter number of X
// 2 - Enter Z,B,A
// 3 - Calc X
// 4 - Y + X to X
// 5 - Show result

int main()
{
    int numberOfX = 0;

    int Z = 0;
    int B = 0;
    int A = 0;

    int X = 0;
    int Y = 0;

    std::cout << "Number of X : ";
    std::cin >> numberOfX;

    for (int i = 0; i < numberOfX; i++)
    {   
        std::cout << "Enter Z : ";
        std::cin >> Z;

        std::cout << "Enter B : ";
        std::cin >> B;

        std::cout << "Enter A : ";
        std::cin >> A;

        X = (Z * Z * Z - B + A * A) / 2;
        Y += X;
    }

    std::cout << " Y - " << Y << std::endl;

    return 0;
}

#include <iostream>
#include <windows.h>
#include "math_func.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");
    
    std::cout << "������� ������ �����: ";
    int num1;
    std::cin >> num1;
    std::cout << std::endl;

    std::cout << "������� ������ �����: ";
    int num2;
    std::cin >> num2;
    std::cout << std::endl;

    std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";

    int choi�e;
    std::cin >> choi�e;
    switch (choi�e)
    {
    case 1:
    std::cout << summ1(num1, num2) << std::endl;
         break;
    case 2:
         std::cout << sub1(num1, num2) << std::endl;
         break;
    case 3:
         std::cout << mult1(num1, num2) << std::endl;
    break;
        case 4:
        std::cout << div1(num1, num2) << std::endl;
    break;
        case 5:
    std::cout << exp1(num1, num2) << std::endl;
        break;
    }
}

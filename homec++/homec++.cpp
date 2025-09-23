#include <iostream>
#include <string>

double fraction(double x) // 1
{
    int y = static_cast<int>(x);
    return x - y;
}

int abss(double x) // 2
{
    return (x < 0) ? -x : x;
}

std::string listNums(int x) // 3
{
    std::string result{};

    if (x >= 0)
    {
        for (int i{}; i <= x; ++i)
        {
            result += std::to_string(i) + ' ';
        }

        return result;
    }
    else if (x < 0)
    {
        for (int i{}; i != x - 1; --i)
        {
            result += std::to_string(i) + ' ';
        }

        return result;
    }
}

int findFirst(int arr[], int x) // 4
{
    int sizeArray = 7;
    for (int i{}; i < sizeArray; ++i)
    {
        if (arr[i] == x)
            return i;
    }

    return -1;
}


int main() {
    setlocale(LC_ALL, "rus");

    int task{};
    double x{};
    int arr[]{ 1,2,3,4,2,2,5 };

    while (true) {
        std::cout << "Введите номер задания (1-4): ";
        std::cin >> task;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода! Введите целое число." << std::endl;
        }
        else if (task < 1 || task > 4) {
            std::cin.ignore(32767, '\n');
            std::cout << "Данной задачи не существует! Введите число от 1 до 4." << std::endl;
        }
        else {
            break;
        }
    }

    while (true)
    {
        std::cout << "x = ";
        std::cin >> x;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода! Введите число." << std::endl;  
        }
        else
        {
            break;
        }
        
    }

    std::cout << "Результат: ";

    switch (task) {
    case 1: {
        std::cout << fraction(x);
    }
    break;
    case 2:
    {
        std::cout << abss(x);
    }
    break;
    case 3:
    {
        std::cout << listNums(static_cast<int>(x));
    }
    break;
    case 4:
    {
        std::cout << findFirst(arr, static_cast<int>(x));
    }
    break;
    default:
    {
        std::cout << "Такого задания нет" << std::endl;
    }
    };

    return EXIT_SUCCESS;
}
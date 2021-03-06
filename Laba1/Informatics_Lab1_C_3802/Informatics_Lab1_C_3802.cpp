// Informatics_Lab1_C_3802.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int phib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return phib(n - 1) + phib(n - 2);
}


int main()
{
    //Напишите функцию phib(n), которая по данному целому неотрицательному n 
    //возвращает n - e число Фибоначчи.В этой задаче нельзя использовать циклы - используйте рекурсию.
    int n;
    std::cin >> n;

    std::cout << phib(n);
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

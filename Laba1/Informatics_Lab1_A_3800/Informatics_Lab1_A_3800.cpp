// Informatics_Lab1_A_3800.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double Power(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return a * Power(a, n - 1);
}

int main()
{
    double a;
    int n;
    std::cin >> a;
    std::cin >> n;

    std::cout << Power(a, n);;
}

/*Дано действительное положительное число a и целое неотрицательное число n.
Вычислите an не используя циклы и стандартную функцию pow, а используя рекуррентное соотношение an=a⋅an−1.
Решение оформите в виде функции power(a, n).*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

//test22 

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

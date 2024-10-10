// simple task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int num1, num2, num3, sr;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите третье число: ";
    cin >> num3;
    
    sr = (num1 + num2 + num3) / 3;
    cout << "Среднее арифметическое чисел равно: " << sr;
    

    return 0;
}


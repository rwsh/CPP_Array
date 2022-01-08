#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    const int N = 10; // размерность массива
    int A[N]; // объявляем и создаем массив
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1; // заполняем массив
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl; // выводим массив
    }
}

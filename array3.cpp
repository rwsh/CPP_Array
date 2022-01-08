#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    const int N = 5, M = 10; // размерности массива

    double A[N][M]; // объявляем двумерный массива
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = i * j; // заполняем массив с помощью вложенного цикла
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j] << "\t"; // выводим двумерный массив
        }
        cout << endl;
    }
}

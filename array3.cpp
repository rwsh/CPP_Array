#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    const int N = 5, M = 10; // ����������� �������

    double A[N][M]; // ��������� ��������� �������
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = i * j; // ��������� ������ � ������� ���������� �����
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j] << "\t"; // ������� ��������� ������
        }
        cout << endl;
    }
}

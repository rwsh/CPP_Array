#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    const int N = 10; // ����������� �������
    int A[N]; // ��������� � ������� ������
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1; // ��������� ������
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl; // ������� ������
    }
}

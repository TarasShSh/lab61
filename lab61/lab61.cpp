// lab61.cpp
// ��������, ����� 
// ����������� ������ � 6.1
// ����� �������� ������������ ������ ����������� �� ����������� ��������
// ������ 11
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int c[], const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		c[i] = Low + rand() % (High - Low + 1);
}
void Print(int c[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << c[i];
	cout << endl;
}
int Sum(int c[], const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
			S += c[i];
	return S;
}
int Size(int c[], const int size)
{
	int length = 0;
	for (int i = 0; i < size; i++)
	length += 1;
	return length;
}
void Null(int c[], const int size)
{
	for (int i = 0; i < size; i++)
		if ((c[i] > 0) || !(c[i] % 2 == 0))
			c[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 27;
	int c[n];
	int Low = -35;
	int High = 25;
	Create(c, n, Low, High);
	Print(c, n);
	Null(c, n);
	Print(c, n);
	cout << "sum = " << Sum(c, n) << endl;
	cout << "size = " << Size(c, n) << endl;
	system("pause");
	return 0;
}
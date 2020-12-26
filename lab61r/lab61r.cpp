// lab61r.cpp
// Шевченко, Тарас 
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 11
#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
void Create(int* c, const int size, const int Low, const int High, int i)
{
    c[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(c, size, Low, High, i + 1);
}
void Print(int* c, const int size, int i)
{
    cout << setw(4) << c[i];
    if (i < size - 1)
        Print(c, size, i + 1);
    else
        cout << endl;
}
int Sum(int* c, const int size, int i)
{
    if (i < size)
    {
        if ((c[i] > 0) || !(c[i] % 2 == 0))
            return c[i] + Sum(c, size, i + 1);
        else
            return Sum(c, size, i + 1);
    }
    else
        return 0;
}
int Size(int* c, const int size, int i)
{
    if (i < size)
    {
        if ((c[i] > 0) || !(c[i] % 2 == 0))
            return  1 + Size(c, size, i + 1);
        else 
            return Size(c,size,i+1);
        
        }
    else
        return 0;
}
void Null(int* c, const int size, int i)
{
    if ((c[i] > 0) || !(c[i] % 2 == 0))
        c[i] = 0;
    if (i < size - 1)
        Null(c, size, i + 1);
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 27;
    int c[n];
    int Low = -35;
    int High = 25;
    Create(c, n, Low, High, 0);
    cout << "sum = " << Sum(c, n, 0) << endl;
    std::cout << "length = " << Size(c,n,0) << std::endl;
    Print(c, n, 0);
    Null(c, n, 0);
    Print(c, n, 0);
    return 0;
}
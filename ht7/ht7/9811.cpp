/* Дан массив, содержащий 2015 неотрицательных целых чисел. Ямой называется не крайний элемент массива, который меньше обоих своих соседей. Необходимо найти в массиве самую глубокую яму, то есть яму, значение которой минимально. Если в массиве нет ни одной ямы, ответ считается равным 0.
Например, в массиве из шести элементов, равных соответственно 4, 9, 2, 17, 3, 8, есть две ямы – 2 и 3, самая глубокая яма – 2.
Напишите на одном из языков программирования программу для решения этой задачи. Исходные данные объявлены так, как показано ниже. Запрещается использовать переменные, не описанные ниже, но разрешается не использовать часть из описанных. */

#include <iostream>

using namespace std;

#define N 6

int task9811()
{
    int a[N];
    int i, j, k;
    k = 0;
    j = INT_MAX;
    
    for (i = 0; i  < N; i++)
    cin >> a[i];
    for (i = 0; i < N - 2; i++)
    {
        if (a[i] > a[i + 1] && a[i + 1] < a[i + 2] < j)
        {
            j = a[i + 1];
            k = 1;
        }
    }
    if (k == 0)
    {
        cout << 0;
    } else
    {
        cout << j;
    }
    return 0;
}

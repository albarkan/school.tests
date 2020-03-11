//
//  5256(25).cpp
//  practisingTest1(24-27)
//
//  Created by barkanoid on 02.03.2020.
//  Copyright © 2020 barkanoid. All rights reserved.
//

#include <stdio.h>

/* Дан массив, содержащий 70 неотрицательных целых чисел, не превышающих 1000. Опишите на одном из языков программирования алгоритм, позволяющий найти и вывести наименьшую сумму двух соседних элементов массива, имеющих одинаковую чётность. Гарантируется, что в массиве есть соседние элементы, имеющие одинаковую чётность. Исходные данные объявлены так, как показано ниже. Запрещается использовать переменные, не описанные ниже, но разрешается не использовать часть из них. */


#include <iostream>

using namespace std;

#define N 6
int task5256()
{
    int a[N];
    int i, j, x, y;
    for (i = 0; i < N; i++)
    cin >> a[i];
    j = 0;
    x = INT_MAX;
    
    for (i = 0; i < N - 1; i++)
    {
        if ((a[i] % 2) == (a[i + 1] % 2) && (a[i] + a[i + 1]) < x)
        {
            x = a[i] + a[i + 1];
        }
    }
    cout << x;
    return 0;
}

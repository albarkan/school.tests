/* ��� ������, ���������� 2014 ������������� ����� �����. �������� �� ����� �� ������ 
���������������� ���������, ������� ������� � ���� ������� ���������� ���������, �������� 
������� ����� ��� � ��� ���� ����������� �������� ��������������� ��������. ��������, ���
������� �� 6 ���������, ����������� ����� 2, 5, 10, 15, 40, 100, ��������� ������ ������
����� 3 (������� ������������� �������� �� ���������� 5, 40 � 100). ��������� ������ �������
����� ���������� ���������� ���������, �������� ��������� �������� �� �����.�������� ������
��������� ���, ��� �������� ����. ����������� ������������ ����������, �� ��������� ����, ��
����������� �� ������������ ����� �� ��������� ����������. */

#include <iostream>

#define N 6

using namespace std;
int task6790()
{
	int a[N];
	int i, j, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	j = 0;
	for (i = 0; i < N - 1; i++)
	{
		if (2 * a[i] < a[i + 1])
		{
			j++;
		}
	}
	cout << j;
	system("pause");
	return 0;
}
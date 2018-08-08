/**
 * 2018/07/31
 * 백준 1026 번 문제
 * 언어: C++
*/

#include <iostream>

using namespace std;

int main(void)
{
	int size, sum = 0;

	cin >> size;
	
	int arrayA[size], arrayB[size];

	for(int i = 0; i < size; i++)
	{
		cin >> arrayA[i];
	}

	for(int i = 0; i < size; i++)
	{
		cin >> arrayB[i];
	}

	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			int tmp;
			if(arrayA[i] > arrayA[j])
			{
				tmp = arrayA[i];
				arrayA[i] = arrayA[j];
				arrayA[j] = tmp;
			}

			if(arrayB[i] < arrayB[j])
			{
				tmp = arrayB[i];
				arrayB[i] = arrayB[j];
				arrayB[j] = tmp;
			}
		}
	}

	for(int i = 0; i < size; i++)
	{
		sum += arrayA[i] * arrayB[i];
	}

	cout << sum;

	return 0;
}

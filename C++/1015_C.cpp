/**
 * 2018/07/31
 * 백준 1015 번 문제
 * 언어: C++
*/

#include <iostream>

using namespace std;

int main(void)
{
	int size, index = 0;
	cin >> size;
	int inputs[size], output[size];

	for(int i = 0; i < size; i++)
	{
		cin >> inputs[i];
	}

	for(int i = 0; i <= 1000; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(inputs[j] == i)
			{
				output[j] = index++;
			}
		}
	}

	for(int i = 0; i < size; i++)
	{
		cout << output[i] << " ";
	}

	return 0;
}

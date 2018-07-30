/*
 * 2018/07/30
 * 백준 1010 번 문제
 * 언어: C++
*/

#include <iostream>

using namespace std;

unsigned nChoosek(unsigned n, unsigned k)
{
	if (k > n)
		return 0;
	if (k * 2 > n)
		k = n-k;	
	if (k == 0)
		return 1;

	int result = n;
	for(int i = 2; i <= k; i++)
	{
		result *= (n-i+1);
		result /= i;
	}
	return result;
}

int main(void)
{
	int size, index = 0;
	int n1, n2;

	cin >> size;

	int results[size];

	while(index < size)
	{
		cin >> n1 >> n2;

		if(n1 < n2)
		{
			results[index] = nChoosek(n2, n1);
		}
		else if(n1 > n2)
		{
			results[index] = nChoosek(n1, n2);
		}
		else
		{
			results[index] = 1;
		}

		index ++;
	}

	for(int i = 0; i < size; i++)
		cout << results[i] << endl;
	
	return 0;
}

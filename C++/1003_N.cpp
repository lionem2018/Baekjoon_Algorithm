#include <iostream>

using namespace std;

int fibonacci(int n);
int one_n = 0;
int zero_n = 0;

int main(void)
{
	int size, index = 0;
	int num;
	
	cin >> size;
	int results[size][2];

	while(index < size)
	{
		one_n = zero_n = 0;

		cin >> num;

		fibonacci(num);

		results[index][0] = zero_n;
		results[index][1] = one_n;

		index ++;
	}

	for(int i = 0; i < size; i++)
	{
		cout << results[i][0] << " " << results[i][1] << endl;
	}

	return 0;
}

int fibonacci(int n)
{
	if(n == 0)
	{
		zero_n++;
		return 0;
	}
	else if(n == 1)
	{
		one_n++;
		return 1;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int num, index = 0;
	int x1, x2, y1, y2, r1, r2;
	int result;

	cin >> num;
	int results[num];

	while(index < num)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		result = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

		if(x1 == x2 && y1 == y2)
		{
			if(result == r1 + r2)
				results[index] = -1;
			else
				results[index] = 0;
		}
		else
		{
			if(result > r1 + r2)
				results[index] = 0;
			else if(result == r1 + r2)
				results[index] = 1;
			else
				results[index] = 2;
		}

		index ++;
	}

	for(int i = 0; i < num; i++)
		cout << results[i] << endl;

	return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

char OX[80];
int main()
{
	int TC, score, sum;

	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		sum = 0;
		score = 1;
		cin >> OX;
		for (int j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'O')
			{
				sum += score;
				score++;
			}
			if (OX[j] == 'X')
				score = 1;
		}
		cout << sum <<endl ;
	}
}
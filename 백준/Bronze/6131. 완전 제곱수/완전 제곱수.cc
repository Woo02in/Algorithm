#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	int result = 0;

	for (int i = 1; i <= 500; i++)
	{
		for (int j = i + 1; j <= 500; j++)
		{
			if (j * j == i * i + N)
			{
				result++;
			}
		}
    }
	cout << result << "\n";

	return 0;
}
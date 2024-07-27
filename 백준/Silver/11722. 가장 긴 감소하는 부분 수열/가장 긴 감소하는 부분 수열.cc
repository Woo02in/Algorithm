#include<iostream>

using namespace std;

	int N;
	int arr[1001];
	int DP[1001];

	void Solution()
	{
		for (int i = 1; i <= N; i++)
		{
			DP[i] = 1;
			for (int j = 1; j <= i; j++)
			{
				if (arr[i] < arr[j] && DP[j] + 1 > DP[i])
				{
					DP[i] = DP[j] + 1;
				}
			}
		}

		int Max = 0;
		for (int i = 1; i <= N; i++)
		{
			if (DP[i] > Max)
			{
				Max = DP[i];
			}
		}
		cout << Max << endl;
	}


	int main(void)
	{
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			cin >> arr[i];
		}
		Solution();
		

		return 0;
	}

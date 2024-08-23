#include <iostream>
#include <stack>
#include <vector>
#include<cstring>

using namespace std;
int n;
string exp;

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin >> n >> exp;

	vector<int> v(n);
	stack<double> st;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < exp.length(); i++)
	{
		if (exp[i] >= 'A' && exp[i] <= 'Z')
		{
			st.push(v[exp[i] - 'A']);
		}
		else
		{
			if (!st.empty())
			{
				double tmp = st.top();
				st.pop();
				if (exp[i] == '+')
				{
					tmp = st.top() + tmp;
				}
				else if (exp[i] == '-')
				{
					tmp = st.top() - tmp;
				}
				else if (exp[i] == '*')
				{
					tmp = st.top() * tmp;
				}
				else if (exp[i] == '/')
				{
					tmp = st.top() / tmp;
				}
				st.pop();
				st.push(tmp);
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top() << '\n';
	
	return 0;
}
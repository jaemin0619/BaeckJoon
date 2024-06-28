#include<iostream>
#include<string>
using namespace std; 
#pragma warning(disable:4996)

int main()
{
	int T,R;
	string s;
	cin >> T;
	for (int i = 0;i < T;i++)
	{
		cin >>R>> s;
		for (int k = 0;k < s.length();k++) {
			for (int j = 0;j < R;j++)
				cout << s[k];
		}
		cout << endl;
	}
	
	return 0;
}
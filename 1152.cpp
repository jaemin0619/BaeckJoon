#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;
int main()
{
	string s;
	int result = 0;

	getline(cin, s);
	result = 1;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] == ' ')
		{
			result++;
		}
	}
   //ó�� �κ� ���� 
	if (s[0] == ' ')
	{
		result--;
	}

	//������ �κ� ���� 
	if (s[s.length() - 1] == ' ')
	{
		result--;
	}
	
	cout << result << endl;
	return 0;
}
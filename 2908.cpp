#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;


int main()
{
	string a, b;
	cin >> a >> b;

	string bigger;

	for (int i = 2;i >= 0;i--)
	{
		if (a[i] > b[i]) {
			bigger = a;
			break;
		}
		else if (a[i] < b[i])
		{
			bigger = b;
			break;
		}
	}
	cout << bigger[2] << bigger[1] << bigger[0] << endl;
	return 0;
}
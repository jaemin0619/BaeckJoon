#include<iostream>
#include<string.h>
using namespace std;
#pragma warning(disable:4996)
int main()
{
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0;i < alphabet.length();i++)
		cout << (int)s.find(alphabet[i]) << " ";

	
	return 0; 
}
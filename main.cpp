#include<iostream>
using namespace std;
int main()
{
	int min, max, a;
	cout << "\tEnter range start=>";
	cin >> min;
	cout << "\tEnter end of range=>";
	cin >> max;
	cout << "\tEnter number=>";
	cin >> a;
	
	while (a<min||a>max)
	{
		
		cout << "\tEnter number=>";
		cin >> a;
		
	}
    	cout << "\tThe number is in the range";
	return 0;
}
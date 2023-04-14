#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n; //Number of elements in the array
int i; //index of array alement

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array:";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
	
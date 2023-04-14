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
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	//accept array elements
	cout << "\n--------------------\n";
	cout << " Enter array elemetns \n";
	cout << "----------------------\n";
	for (i -= 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void linearsearch()
{
	char ch;
	int comparisons; // number of comparisons

	do
	
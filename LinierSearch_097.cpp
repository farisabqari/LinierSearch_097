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
	{
		//Accapt the number to be searched
		cout << "\nEnter the element you want to search:"; //langkah 1
		int item;
		cin >> item;

		comparisons = 0;
		for (i = 0;i < n; i++) //langka 2,3dan 4
		{
			comparisons++;
			if (arr[i] = item) //Langkah 5A found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n) // langkah 5b not found
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of cosparisons:" << comparisons << endl;

		cout << "\nContinue search (y / n):";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}

int main() {
	input();
	linearsearch();
	return 0;

}
#include <iostream>
using namespace std;


int arr[20];							// Array of integers to hold values
int cmp_count = 0;						// Number of comparasion
int mov_count = 0;						// Number of data movement
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; 1 < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[1];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)						// Langkah Algoritma no 1
		return;

	//Partition the list into two parts;
	//one containing element less that or equal to pivot 
	//OUther conntainning elements greather than pivot 

	pivot = arr[low];					//Langkah ALgoritma No. 2
	i = low + 1;						//Langkah Algoritma No.3
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

	//swaps the element st index x with the element at index y
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

	// Partition the list into two parts;
	// one containing element less that or equal to pivot
	// Outher conntainning element greather than pivot

	pivot = arr[low];									// Langkah Algoritma no. 2

	i = low + 1;										// Langkah Algoritma no. 3
	j = high;						// Langkah Algoritma no. 4


	while (i <= j)										// Langkah Algoritma no. 10
	{
		// Search for an element less than or equal to pivot
		while ((arr[i] <= pivot) && (j <= high))		// Langkah Algoritma no. 5
		{
			i++;										// Langkah Algoritma no 6
			cmp_count;
		}
		cmp_count++;

		// Search for an element less than or equal pivot
		while ((arr[i] <= pivot) && (i <= high))		// Langkah Algoritma No. 7
		{
			j--;										// Langkah Algoritma No. 8
			cmp_count++;
		}
		cmp_count++;

		//
		if (i < j)
		{
			// swap the element at index i shift the element at index j
			swap(i, j);									// Langkah Algoritma no. 9
			mov_count++;
		}
	}
	// j now containt the index of the last element in the sorted list
	if (low < j)										// Langkah Algoritma no. 11
	{
		// move the pivot to its correct position in the list
		swap(low, j);
		mov_count++;
	}
	// sort the list on the left of pivot using quick sort
	q_short(low, j - 1);								// Langkah Algoritma no.12

	// Sort the list on the right of pivot using quick sort
	q_short(j + 1, high);								// // Langkah Algoritma no.13

}

void display() {
	cout << "\n-----------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}

int main()
{
	input();
	q_short(0, n - 1);			// Sort the array using quick sort
	display();
	system("pause");

	return 0;
}
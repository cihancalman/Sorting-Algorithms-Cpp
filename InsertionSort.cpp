#include <iostream>
using namespace std;


void insertionSort(int array[], int size) {
	for (int i = 1; i < size; i++) {
		int j = i - 1;

		while (j>=0 && array[j] >= array[j+1])
		{
			int temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j = j - 1;
		}
	}

}

void printResult(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

int main()
{
    int myArray[] = {5,1,45,10,7,5,78,-4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    insertionSort(myArray,size);
	cout << "Sorted array: ";
	printResult(myArray, size);

	return 0;

}

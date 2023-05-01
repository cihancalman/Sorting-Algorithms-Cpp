#include<iostream>
using namespace std;

void selectionSort(int array[],int size) {
	int min;
	int temp;
	
	for (int i=0;i<size-1;i++)
	{
		
		min = i;
		
		for (int j=i+1;j<size;j++)
		{
			
			if (array[j] <= array[i])
			{
				
				min = j;
			}
		}
		if (min !=i) {
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}
}

void printResult(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

int main() {
	int my_array[]={0,4,-1,15,45,39,27,87,96,-24};
	int size = sizeof(my_array) / sizeof(my_array[0]);

	selectionSort(my_array,size);
	cout << "Sorted array: ";
	printResult(my_array, size);

	return 0;
}
#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}


void bubleSort(int array[],int size) {
	bool flag = false;

	for (int step=0;step<size-1;step++)
	{
		
		for (int i = 0; i < size - step - 1; i++ ) {

			
			if (array[i]>= array[i+1]) {

				// swap
				swap(&array[i],&array[i+1]);
				flag = true;
			}


		}
		if (flag == false)
			break;
	}


}

void printResult(int array[],int size) {
	for (int i=0;i<size;i++)
		cout << array[i] << " ";
	cout << endl;
	

}

int main()
{
	int arr[] = {4,1,85,5,4,45,17,0};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	bubleSort(arr,size);
	cout << "Sorted array: ";
	printResult(arr, size);

	return 0;
}


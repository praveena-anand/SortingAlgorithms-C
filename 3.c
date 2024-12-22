#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int temp = arr[i];
		j = i-1;
		
		while (j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

int main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	
	int arr[n];
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Element %d : ", i);
		scanf("%d", &arr[i]);
	}
	
	insertionSort(arr, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}

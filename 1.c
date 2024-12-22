#include <stdio.h>

void selectionSort(int arr[], int n)
{
	int i, j;
	
	for (i = 0; i < n -1; i++)
	{
		int min = i;
		
		for (j = i; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		
		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
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
	
	selectionSort(arr, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}

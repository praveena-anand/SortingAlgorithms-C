#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int n, int i)
{
	if (n == 1)
		return;
		
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;
	
	if (l < n && arr[l] > arr[largest])
		largest = l;
		
	if (r < n && arr[r] > arr[largest])
		largest = r;
		
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	int i;
	for (i = n/2-1; i >= 0; i--)
	{
		heapify(arr, n, i);
	}
	
	for (i = n-1; i >= 0; i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
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
	
	heapSort(arr, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}

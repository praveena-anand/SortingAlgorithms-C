#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
	int n1 = mid + 1- low;
	int n2 = high - mid;
	
	int L[n1], R[n2];
	
	int i;
	for (i = 0; i < n1; i++)
		L[i] = arr[low + i];
		
	for (i = 0; i < n2; i++)
		R[i] = arr[mid+1+i];
		
	int j = 0, k = low;
	i = 0;
	
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);
		
		merge(arr, low, mid, high);
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
	
	mergeSort(arr, 0, n-1);
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
}

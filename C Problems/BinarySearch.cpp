/* 
    WAP to implement Binary Search
*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int binarySearch(int a[], int low, int high, int x)
{
	int mid;
	
	if(low<=high)
	{
		mid = (low + high) / 2;
		if(a[mid]==x)
		{
			return 1;
		}
		else if(a[mid]<x)
		{
			return binarySearch(a, mid+1, high, x);
		}
		else
		{
			return binarySearch(a, low, mid-1, x);
		}
	}

	return 0;
}


int main()
{
	system("cls");

	int a[100], n, i, x, z;
	
	printf("\nEnter number of elements =");
	scanf("%d",&n);
	printf("\nEnter elements in ascending order");
	
	for(i=0; i<n; i++)
	{
		printf("\nEnter element = ");
		scanf("%d",&a[i]);
	}		
	
	printf("\n\nEnter element to be seached =");
	scanf("%d",&x);
	
	z = binarySearch(a, 0, n-1, x);
	
	if(z==1)		printf("\nElement is present");
	else			printf("\nElement is not present");
		
	
	getch();

	return 0;
}

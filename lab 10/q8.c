#include <stdio.h>

void linearsearch(int arr[] , int size , int target , int index);
int main ()
{
	int size,target,index;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0 ; i < size ; i++)
	{
		printf("Enter %d element",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the target element to search for:");
	scanf("%d",&target);
	printf("Enter the current index:");
	scanf("%d",&index);
	linearsearch(arr , size , target , index);
	return 0;
}

void linearsearch(int arr[] , int size , int target , int index)
{
	if(index >= size)
	{
		printf("The target element %d is not found\n",target);
		return;
	}
	else if (arr[index] == target)
	{
		printf("The target element %d is found at index %d\n",target,index);
		return ;
	}
	else{
		linearsearch(arr , size , target , index+1 );
	}
}
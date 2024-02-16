#include<stdio.h>

int main()
{
	int arr[100],i,j,target,n;
//	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	printf("Enter value of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum : ");
	scanf("%d",&target);
	
	sum(arr,target,n);
	
	return 0;
	
}

void sum(int arr[], int target, int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(arr[i]+arr[j] == target)
		{
			printf("\nIndex is %d and %d ",i,j);
//			break;
		}
		j++;
	}
}

#include<stdio.h>

void	swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	selectionsort(int *sort, int n)
{
	int	i;
	int	j;
	int	minindx;

	i = 0;
	j = 0;
	minindx;
	for(i=0; i < n; i++)
	{
		minindx = i;
		for(j=i+1; j < n; j++)
		{	if (sort[j] < sort[minindx])
				minindx = j;
		}
		swap(&sort[i], &sort[minindx]);
	}
}

int main()
{
	int arr[] = {6, 4, 8, 9, 5, 7, 3, 2, 1};
	int n = 9;
	int i = 0;
	selectionsort(&arr[0], 9);
	while (i < 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return(0);
}

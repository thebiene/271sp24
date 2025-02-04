# include <stdio.h>

// A simple program to sort an array of integers in C

// input: array of ints and its length
// output: nothing
// side effect: prints the array
void print_arr(int *arr, int len){
	printf("printing arr at location %p of size %d:\n [ ", arr, len);
	int i;
	for (i = 0; i < len; i++){
		printf("%d", arr[i]);
		if (i < len - 1){
			printf(", ");
		}
	}
	printf(" ]\n");
}

// Input: An array of integers and its length
// Output: Nothing
// Side Effect: The input array is sorted from least to greatest
void sort(int *arr, int len) // bubble sort :|
{
	int i, j;
	for ( i = 0; i < len - 1; i++ )
	{
		for ( j = 0; j < len - i - 1; j++ )
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return;
}
/* END YOUR WORK */

/* FEEDBACK FUNCTIONS */

// Input: An array of integers and its length
// Output: 1 if the array is sorted least to greatest, 0 otherwise
// Side Effect: None
int is_sorted(int *arr, int len)
{
	int i = 0;
	while (i < (len - 2))
	{
		if (arr[i] > arr[i+1])
		{
			return 0;
		}
		i++;
	}
	return 1;
}

// The special main function

int main()
{
	int test_arr[10] = {8,6,4,2,0,1,3,5,7,9};
	print_arr(test_arr, 10);
	sort(test_arr, 10);
	print_arr(test_arr, 10);
	if (is_sorted(test_arr, 10))
	{
		printf("Good job!\n");
	} else {
		printf("Keep it up!\n");
	}
	return 0;
}

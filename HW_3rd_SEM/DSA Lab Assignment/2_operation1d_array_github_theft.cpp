#include <stdio.h>

// Insertion - Insert a new element in the existing array.
int main() {
	int arr[6];
	int insElement = 0;
	int posIns = 0;
	// Initialising the array with zeros.
	for (size_t i = 0; i < 6; i++)
		arr[i] = 0;

	for (size_t i = 0; i < 5; i++)
	{
		printf("ENTER ELEMENT AT INDEX %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("ENTER THE ELEMENT TO INSERT:  ");
	scanf("%d", &insElement);
	printf("ENTER THE POSITION TO BE INSERTED AT:  ");
	scanf("%d", &posIns);
	if (posIns > sizeof(arr) / 4 || posIns < 1)
	{
		printf("INVALID INDEX! ELEMENT %d COULD NOT BE INSERTED");
	}
	else {
		posIns = posIns - 1;
		for (int i = 5; i >= posIns + 1; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[posIns] = insElement;

		printf("[ ");
		for (size_t i = 0; i < 6; i++)
		{
			printf("%d  ", arr[i]);
		}
		printf("]");
	}
	printf("\n\n\n");
	return 0;
}
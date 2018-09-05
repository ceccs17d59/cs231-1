/*
 * 03
 * Bubble Sort
 * Author : Nikhil M Tomy
 * 
 */

#include <stdio.h>

int main() {
	int i, j, array[100], size, temp;

	printf("Enter number of elements in the array : ");
	scanf("%d", &size);

	printf("Enter the array\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	for (i=size; i>=0; i--) {
		for (j=0; j<i; j++) {
			if (array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	printf("Sorted array \n");
	for (i=0; i<size; i++) {
		printf("%d\n", array[i]);
	}
}
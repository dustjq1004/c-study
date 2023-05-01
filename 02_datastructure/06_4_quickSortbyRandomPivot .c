#define _CRT_SECURE_NO_WARGINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>
#define max 10

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int start, int end) {

    int pivot = (rand() % (end - start + 1)) + start;
   // int pivot = 0;
    int left = start + 1;
    int right = end;

    swap(&a[start], &a[pivot]);

    while (left < right) {
		while (a[start] >= a[left] && left <= end) left++;
		while (a[start] <= a[right] && right >= start + 1) right--;
		if (left < right) swap(&a[left], &a[right]);
	}

    swap(&a[start], &a[right]);

    return right;
}

void quickSort(int a[], int start, int end) {
    int index;
    if(start >= end) return;
    
    index = partition(a, start, end);
    
    quickSort(a, start, index - 1);
    quickSort(a, index + 1, end);
}
int main(void) {
    int arr[max] = {10, 20, 70, 80, 60, 90, 30, 40, 100, 50};

    quickSort(arr, 0, max-1);

    for(int i = 0; i < max; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
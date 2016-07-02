#include "quickSort.h"
void sort2(int *arr, int low, int high)
{
int pivot, i, j, temp;
if(low < high) {
pivot = low; // select a pivot element
i = low;
j = high;
while(i < j) {
// increment i till you get a number greater than the pivot element
while(arr[i] <= arr[pivot] && i <= high)
i++;
// decrement j till you get a number less than the pivot element
while(arr[j] > arr[pivot] && j >= low)
j--;
// if i < j swap the elements in locations i and j
if(i < j) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
// when i >= j it means the j-th position is the correct position
// of the pivot element, hence swap the pivot element with the
// element in the j-th position
temp = arr[j];
arr[j] = arr[pivot];
arr[pivot] = temp;
// Repeat quicksort for the two sub-arrays, one to the left of j
// and one to the right of j
sort2(arr, low, j-1);
sort2(arr, j+1, high);
}
}

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void reversearray(int arr[], int len){
  for (int i=0; i<len/2; i++){
    swap(&arr[i], &arr[len-i-1]);
  }
}
void printarray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int len;

  // Prompt user to enter the size of the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &len);

  int arr[len];

  // Take array input from the user
  printf("Enter %d elements: ", len);
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Original array: ");
  printarray(arr, len);

  reversearray(arr, len);

  printf("Reversed array: ");
  printarray(arr, len);

  return 0;
}
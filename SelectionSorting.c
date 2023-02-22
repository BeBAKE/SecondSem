#include <stdio.h>
int getMax(int arr[], int end);
void swap(int arr[], int, int);
void incOrder(int arr[], int len);
void decOrder(int arr[]);

int main()
{
  int arr[8]; // = {3, 342, 2, 6, 78, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  incOrder(arr, len);
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
}

// Function for sorting array in increasing order
void incOrder(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    int last = len - i - 1;
    int max = getMax(arr, last);
    swap(arr, last, max);
  }
}

// Function for length of any array
// int len(int *arr)
// {
//   size_t length = sizeof(arr) / sizeof(arr[0]);
//   return length;
// }

// Function for swapping min or max with the last index(as per the program)
void swap(int arr[], int first, int second)
{
  int temp = arr[first];
  arr[first] = arr[second];
  arr[second] = temp;
}

// Function for getting max index (to swap it with the last to get array sorted in increasing order)
int getMax(int arr[], int end)
{
  int maxIndex = 0;
  for (int i = 0; i <= end; i++)
  {
    if (arr[maxIndex] < arr[i])
    {
      maxIndex = i;
    }
  }
  return maxIndex;
}
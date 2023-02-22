#include <stdio.h>

void insertion(int[], int);
void swap(int[], int, int);

int main()
{

  int len;
  printf("Give the length of an array : ");
  scanf("%d", &len);
  int arr[len];

  // For adding elements in the array.
  for (int i = 0; i < len; i++)
  {
    printf("Enter value for %dth index : ", i);
    scanf("%d", &arr[i]);
  }

  insertion(arr, len);

  // Printing elements of an array.
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertion(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int current = i + 1; current > 0; current--)
    {
      if (arr[current] < arr[current - 1])
      {
        swap(arr, current, current - 1);
      }
    }
  }
}

// Function for swapping
void swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
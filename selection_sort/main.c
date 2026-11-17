#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0];
  // for (int i = 0; i < n; i++) {
  //   if (min > arr[i]) {
  //     min = arr[i];
  //   }
  // }
  //
  for (int i = 0; i < n - 1; i++) {
    int tmp = arr[i];
    min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (i != min) {
      arr[i] = arr[min];
      arr[min] = tmp;
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

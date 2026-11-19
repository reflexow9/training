#include <stdio.h>

int main() {
  int n;
  // int f[100];

  scanf("%d", &n);
  if (n == 1) {
    printf("%d", 1);
  } else if (n == 2) {
    printf("%d", 2);
  }
  // } else if (n == 3) {
  //   printf("%d", 5);
  // }

  long long f[n + 1], p[n + 1];

  f[1] = 1;
  f[2] = 2;
  p[2] = 1;

  for (int i = 3; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2] + 2 * p[i - 1];
    p[i] = (f[i - 2] + p[i - 1]);
  }

  printf("%lld\n", f[n]);

  return 0;
}

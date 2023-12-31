#include <math.h>
#include <stdio.h>

int main() {
  int i, j, k, n, sum = 0;
  float a[10][10], x[10], c;
  printf("enter the order of matrix");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= 2 * n; j++) {
      printf("enter elements for matix: a[%d][%d]", i, j);
      scanf("%f", &a[i][j]);
    }
  }
  for (j = 1; j <= n; j++) {
    for (i = 1; i <= n; i++) {
      c = a[i][j] / a[j][j];
      if (i != j) {
        for (k = 1; k <= n + 1; k++) {
          if (i == k)
           continue;
          a[i][k] = a[i][k] - c * a[j][k];
        }
      }
    }
  }
  x[n] = a[n][n + 1] / a[n][n];
  for (i = n - 1; i >= 1; i--) {
    sum = 0;
    for (j = i + 1; j <= n; j++) {
      sum = sum + a[i][j] * x[j];
      x[i] = (a[i][n + 1] - sum) / a[i][i];
    }
  }
  printf("the solution is");
  for (j = 1; j <= n + 1; j++) {
    a[i][j] = a[i][j] / c;
  }
  for (i = 1; i < n; i++) {
    printf("\n");
    for (j = 1; j < n + 1; j++) {
      printf("%f\t", a[i][j]);
    }
  }
  return 0;
}

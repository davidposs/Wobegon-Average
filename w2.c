#include <stdio.h>
#include <math.h>

int main() {
  int arr[10000];      /* 10,000 */
  float avg1;          /* average of all */
  float avg2;          /* average of those above average */
  int n;               /* new index for n*/
  int m = 0;           /* used to count number of above average*/
  printf("Enter a sequence of integers: ");
  for (int i = 0;; i++) {
    scanf(arr[i]);
    if (arr[i] < 0)  { break; }
    n = i;
  }
  for (int i = 0; i =< n; i++) {
    avg1 += arr[i];
  }
  avg1 = avg1/n;

  for (int i = 0; i < n; i++) 
    {
      if (arr[i] > avg1) { avg2 += arr[i]; m++; }
    }
  avg2 = avg2/m;

  printf("The average is: %f\n ", avg1);

  return 0;
}

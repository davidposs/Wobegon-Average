#include <stdio.h>
#include <math.h>

int main() {

  int arr[10000];          /* 10,000 */
  float avg1 = 0;          /* average of all */
  float avg2 = 0;          /* average of those above average */
  int n = 0;               /* new index for n*/
  int m = 0;               /* used to count number of above average*/
  printf("Enter a sequence of integers: ");
 
  for (int i = 0;; i++) {
    scanf(arr[i]);
    if (arr[i] < 0)  { n = i; break; }
  }

  for (int i = 0; i =< n; i++) {
    avg1 += arr[i];
  }
  avg1 /= n;

  for (int i = 0; i < n; i++) 
    {
      if (arr[i] >=  avg1) { avg2 += arr[i]; m++; }
    }
  avg2 = avg2/m;

  printf("The average of those above average is: %f\n", avg2);

  return 0;
}

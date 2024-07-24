#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
 int maxAnd=0;
  int maxOr=0;
  int maxXor = 0;
  int i;
  for(i=1; i<=n; i++) {
      for(int j=i+1; j<=n; j++) {
          int a = i;
          int b = j;
          int and = a&b;
          int or = a|b;
          int xor = a^b;
          if(and > maxAnd && and < k) {
              maxAnd = and;
          }
          if(or > maxOr && or < k) {
              maxOr = or;
          }
          if(xor > maxXor && xor < k) {
              maxXor = xor;
          }
      }
  }
  printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

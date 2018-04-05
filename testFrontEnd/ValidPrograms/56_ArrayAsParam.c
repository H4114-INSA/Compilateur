#include <stdint.h>

int32_t function(int32_t a[], int32_t n) {
   int32_t i;
   int32_t result;
   result = 0;
   result += a[0];
   result += a[1];
   return result;
}
   
void main() {
   int32_t a[2];
   int32_t i;
   int32_t r;
   a[0]=1;
   a[1]=2;
   r = function(a,2);
}

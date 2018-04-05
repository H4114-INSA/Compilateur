#include<inttypes.h>
void main(){
  int32_t i;
  int32_t j;
  i=0;
  j=4;

  while(i<5)  {
      putchar('V');
      if(j<3){
         putchar('T');
      } else {
          putchar('F');
      }
      i=i+1;
    } 
  putchar('\n');
}

#include<inttypes.h>
void main(){
    int32_t i;
    int32_t j;
    i=0;
    j=4;

    while(i<5)  {
        j=4;
        putchar('V');
        while(j<6){
            putchar('O');
            j = j+1;
        }
        i=i+1;
    }
    putchar('\n');
}
#include<inttypes.h>
void main(){
    char i;
    char t;
    char u;
    char v;

    i='b'+98-99;
    i= i*2 -97;
    putchar(i);
    putchar('\n');

    t = 4*2 + 3*4 + 6*7;
    putchar(t);
    putchar('\n');

    u = 3*(2-1)+37;
    putchar(u);
    putchar('\n');

    v = 3*2+37-1;
    putchar(v);
    putchar('\n');

    v= 3*((2-1)+37);
    putchar(v);
    putchar('\n');
}
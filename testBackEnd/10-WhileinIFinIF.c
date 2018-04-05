void main(){
    int32_t a;
    a=5;

    if(a < 10)  {
        putchar('V');
        putchar('\n');
        if( a<7){
            putchar('V');
            putchar('\n');
            while(a<10){
                putchar('T');
                putchar(' ');
                a=a+1;
            }
            putchar('\n');
        }
    } else {
        putchar('F');
        putchar('\n');
    }
}
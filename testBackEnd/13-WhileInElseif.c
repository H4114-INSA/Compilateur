void main() {
    int32_t a;
    a = 2;

    if (a < 1) {
        putchar('V');
        putchar('\n');
    } else if (a < 3) {
        putchar('I');
        putchar('\n');
        while (a < 6) {
            putchar('T');
            putchar(' ');
            a = a + 1;
        }
        putchar('\n');
    }
}
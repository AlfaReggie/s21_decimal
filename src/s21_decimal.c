#include "s21_decimal.h"

void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

void print_decimal(s21_decimal num) {
    for (int i = 3; i >= 0; i--) {
        print_binary(num.bits[i]);
        printf(" ");
    }
}

void set_sign(s21_decimal* num, int sign) {
    num->bits[3] |= sign << 31;
}

void set_scale(s21_decimal* num, int scale) {
    num->bits[3] |= scale << 16;
}

int main() {
    s21_decimal num2 = {1, 256, 0, 0};
    set_sign(&num2, 0);
    set_scale(&num2, 3);
    print_decimal(num2);    
    for (int i = 0; i < 4; i++) {
        printf("%d ", num2.bits[i]);
    }
    return 0;        
}
#include "s21_decimal.h"

void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

void print_decimal(s21_decimal num) {
    for (int i = 0; i <= 3; i++) {
        print_binary(num.bits[i]);
    }
}

int main() {
    s21_decimal num = {0, 0, 0, 2147483649};
    print_decimal(num);
    return 0;        
}
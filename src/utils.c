#include "s21_decimal.h"

int get_bit(unsigned char byte, int position) {
    
    return (byte >> position) & 1;
}


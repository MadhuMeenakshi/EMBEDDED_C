#include <stdio.h>



int main() {
    unsigned int n;
unsigned int num;
//Set LSB
num |= 1;
//Clear LSB
num &= ~1;                  
num |= 0xFF;
//Set MSB Byte
num |= 0xFF000000;
// Set Least Significant Nibble
num |= 0x0F;
// Set Most Significant Nibble
num |= 0xF0000000;
// Set n Bits
num |= ((1U << n) - 1);
// Clear n Bits
num &= ~((1U << n) - 1);
//  Toggle n Bits
num ^= ((1U << n) - 1);
}
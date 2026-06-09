#include <stdio.h>

int main() {
    unsigned int n;
unsigned int num;
//Set LSB
num |= 1;
//Clear LSB
num &= ~1;
//Toggle LSB
num ^= 1;
//Set MSB

//For 32-bit integer:

num |= (1U << 31);
//Clear MSB
num &= ~(1U << 31);
//Toggle MSB
num ^= (1U << 31);
// Set nth Bit
num |= (1U << n);
// Clear nth Bit
num &= ~(1U << n);
// Toggle nth Bit
num ^= (1U << n);
return 0;
}
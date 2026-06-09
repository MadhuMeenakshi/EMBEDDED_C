#include <stdio.h>
#include <stdint.h>

#define REG_BASE 0x40000000

void qualifierDemo(void)
{
    volatile uint32_t *reg_modifiable =
                (volatile uint32_t *)REG_BASE;

    const uint32_t *reg_readonly =
                (const uint32_t *)REG_BASE;

    const volatile uint32_t *reg_const_volatile =
                (const volatile uint32_t *)REG_BASE;

    *reg_modifiable = 0x12345678;

    printf("Value = %u\n",*reg_modifiable);

    /* Invalid */

    // *reg_readonly = 10;
    // *reg_const_volatile = 20;
}
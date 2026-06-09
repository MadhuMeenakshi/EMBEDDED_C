#define SET_BIT(x,n)      ((x) |= (1U<<(n)))

#define CLEAR_BIT(x,n)    ((x) &= ~(1U<<(n)))

#define TOGGLE_BIT(x,n)   ((x) ^= (1U<<(n)))
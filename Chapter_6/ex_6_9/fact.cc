#include "Chapter6.h"

unsigned fact(int val)
{
    if (val < 0)
        return -1;
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}

unsigned absVal(int val)
{
    return (val < 0) ? -val : val;
}
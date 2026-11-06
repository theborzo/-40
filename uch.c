#include "uch.h"

int uch(FILE *f)
{
    double prev, x;
    int count = 0;
    int in = 0;

    if (fscanf(f, "%lf", &prev) != 1)
        return -1;

    while (fscanf(f, "%lf", &x) == 1)
    {
        if (x - prev > EPS && in == 0)
            count++;

        if (x - prev > EPS)
            in = 1;
        else
            in = 0;

        prev = x;
    }

    return count;
}

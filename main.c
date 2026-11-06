#include "uch.h"

int main(void)
{
    FILE *f = fopen("numb.txt", "r");
    int res;

    if (f == NULL)
    {
        printf("FILE ERROR\n");
        return 1;
    }

    res = uch(f);

    if (res == -1)
        printf("FILE IS EMPTY\n");
    else
        printf("%d\n", res);

    fclose(f);

    return 0;
}

#include <stdio.h>

void min2time(int mm, int * ph, int * pm)
{
    *pm = mm % 60;
    *ph = mm / 60 % 24;
}

int main()
{
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}

#include <stdio.h>

int main()
{
    int x=1, y=2, z=3;
    
    x = y = z = 9;
    
    printf("x=%d, y=%d, z=%d", ++x, y++, --z);

    return 0;
}

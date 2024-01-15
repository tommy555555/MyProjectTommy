#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x <= 100 && x >= 76) {
        printf ("excellent");
    }else if (x <= 75 && x >= 51) {
        printf ("very good");
    }else if (x <= 50 && x >= 26) {
        printf ("good");
    }else if (x <= 25) {
        printf ("fail");
    }else if (x >= 0) {
        printf ("fail");
    }
	return 0;
}
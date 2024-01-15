#include <stdio.h>
int main()
{
	int a,i;
    double count ;
	scanf("%d", &a);
    for (i=1;i<=12;i++) {
        printf ("%d x %d = %d\n", a, i, (a * i) );
   	    count = count + (a * i) ;
    }
	printf ("รวม : %.2f ", count );
	return 0;
}
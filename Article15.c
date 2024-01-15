#include <stdio.h>
int main()
{
	float a1, a2, a3, a4, a5, sum;
	scanf("%f", &a1);
    scanf("%f", &a2);
    scanf("%f", &a3);
    scanf("%f", &a4);
    scanf("%f", &a5);
    sum = ( (a1 + a2 + a3 + a4 + a5 ) / 5 );
    printf("THAI = %.1f\n",a1);
    printf("MATH = %.1f\n",a2);
    printf("ENGLISH = %.1f\n",a3);
    printf("SCIENCE = %.1f\n",a4);
    printf("SPORT = %.1f\n",a5);
    printf ("---\n");
    printf ("GPA = %.1f\n",sum);
	return 0;
}

#include <stdio.h>
int main() 
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("MAX : %d\n", num1);
        printf("MIN : %d\n", num2);
    } else {
        printf("MAX : %d\n", num2);
        printf("MIN : %d\n", num1);
    }
    return 0;
}

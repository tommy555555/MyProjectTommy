#include <stdio.h>
int main()
{
	int numberInput;
	scanf("%d", &numberInput);
    if (numberInput <= 100 && numberInput >= 90) {
        printf ("A");
    }else if (numberInput <= 89 && numberInput >= 85) {
        printf ("B+");
    }else if (numberInput <= 84 && numberInput >= 80) {
        printf ("B");
    }else if (numberInput <= 79 && numberInput >= 75) {
        printf ("C+");
    }else if (numberInput <= 74 && numberInput >= 70) {
        printf ("C");
    }else if (numberInput <= 69 && numberInput >= 65) {
        printf ("D+");
    }else if (numberInput <= 64 && numberInput >= 60) {
        printf ("D");
    }else if (numberInput <= 59 && numberInput >= 0) {
        printf ("F");
    }
	return 0;
}
#include <stdio.h>
int main()
{
	char Name1[999999], Name2[999999] , Address2[999999], Gender [999999];
    int Address1, Tel;
	scanf("%s", &Name1);
    scanf("%s", &Name2);
    scanf("%d", &Address1);
    scanf("%s", &Address2);
    scanf("%s", &Gender);
    scanf("%d", &Tel);
	printf("--- Customer Detail ---\n");
    printf("Name : %s %s\n", Name1 , Name2);
    printf ("Address : %d %s\n", Address2);
    printf ("Gender : %s\n", Gender);
    printf ("Tel : %d", Tel);
	return 0;
}

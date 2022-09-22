#include<stdio.h>
int main()
{
    int d,m,y;
    char x,z;
    printf("Enter date, month and year in format d/m/y: ");
    scanf("%d %c %d %c %d",&d, &x, &m, &z, &y);
    printf("Day - %d ,Month - %d ,Year - %d",d,m,y);
    return 0;
}
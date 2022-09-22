#include<stdio.h>
int main()
{
    int h,m;
    char x;
    printf("Enter time in format HH:MM ");
    scanf("%d %c %d",&h, &x, &m);
    printf("%d Hour and %d Minutes",h,m);
    return 0;
}
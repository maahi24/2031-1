#include <stdio.h>
main(){
    int a,b,c;
   printf( "Enter month, day and year separated by spaces:");
   scanf("%d %d %d",  &a, &b, &c);
printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d:", a,b,c,c,a,b,c,a,b );
}
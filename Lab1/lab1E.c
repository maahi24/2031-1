/***************************************
* EECS2031A 21SU - Lab1 *
* Author: Patel, Maahi *
* Email: maahi01@my.yorku.ca*
* eecs_username: maahi01*
* York Student #:217667999
****************************************/



#include <stdio.h>

 
float sum (float i, float j){
  return i+j;
};

 greet(int i){
  printf("Hello %d!\n", i);
}



 main()
{  
   int a = 2031;
   greet(a);
   int b = 1012;
   greet(b);
   int n;
   printf("Enter the number of iteration:",n);
   scanf("%d",&n);
   for(int i=1 ; i<=n ;i++){
   float x,y;
   printf("Enter two float numbers separated by ##:",x,y);
   scanf("%f##%f",&x,&y);

   float su= sum(x,y);
   printf( "%f + %f = %f (%.2f)\n", x,y, su,su);

   }

}
/***************************************
* EECS2031A 21SU - Lab1 *
* Author: Patel, Maahi *
* Email: maahi01@my.yorku.ca*
* eecs_username: maahi01*
* York Student #:217667999
****************************************/

#include <stdio.h>

 float sum (float x, float y);
void greet (int i);


int main()
{  
   int a = 2031;
   greet(a);
   int b = 1012;
   greet(b);
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

  return 0;

}

/* function definition */
float sum (float i, float j){
  return i+j;
}

 void greet(int i){
  printf("Hello %d!\n", i);
}

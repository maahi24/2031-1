/***************************************
* EECS2031A 21SU - Lab1 *
* Author: Patel, Maahi *
* Email: maahi01@my.yorku.ca *
* eecs_username: maahi01 *
* York Student #: 217667999
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
  int a =0;
  
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
      if(c != '\n'){
    count++; //include spaces and '\n'
    
      }

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  

}
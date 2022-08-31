/*
Write a C program to demonstrate the ue of fork() System call.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
   
   printf("\n\tName : Ayush Negi\n");
   printf("\tRoll No. : 14\n");
   printf("\tUniversity id : 200111131\n");
   
   
   //Fork function
   
   fork();
   fork();
   
   printf("Hello fork\n");
   printf("Process id: %d \n\n",getpid());
   return 0;

}

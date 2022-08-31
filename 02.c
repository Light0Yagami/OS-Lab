/*
Write a C program in which parent process compute the sum of even number and child process compute the odd numbers.
1) First, child process should print its ans, i.e. sum of odd no.
2) Then the parent should print its ans, i.e sum of even no.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
   
   printf("\n\tName : Ayush Negi\n");
   printf("\tRoll No. : 14\n");
   printf("\tUniversity id : 200111131\n");
   
   
   int n , i, odd = 0, even = 0;
   printf("\nEnter size of array\n");
   scanf("%d\n",&n);
   
   int arr[n];
   
   printf("\nEnter array:\n");
   for(i = 0; i < n; i++){
      scanf("%d",&arr[i]);
   }
   
   int pid = fork();
   
   if(pid == 0){
      for(i =0; i < n; i++){
         if(arr[i] & 1){
            odd += arr[i];
         }
      }
      printf("\nSum of odd no: %d\n",odd);
   }else{
      for(i = 0; i < n;i++){
         if(!(arr[i] & 1)){
            even += arr[i];
         }
      }
      printf("\nSum of even no: %d\n",even);
   }
  return 0;

}

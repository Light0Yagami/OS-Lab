// Orphan process

#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>

int main()
{
   
	printf("\n\tName : Ayush Negi\n");
	printf("\tRoll No. : 14\n");
	printf("\tUniversity id : 200111131\n");
	
	int pid = fork();

	if(pid == 0){
		sleep(3);
		printf("Child Process is Running\n");
	}else{
		printf("Parent Process is Running\n");
	}
	
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	for (int i=0;i<2;i++){
		if(fork()!=0){
		}else{
			exit(0);
		}
	}
	while(1){
		printf("Looping");
		}
	exit(0);
}

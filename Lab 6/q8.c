#include <stdio.h>
int main(){
	
	char i;
	for (i=65; i<70; i++){
		if(i==65 || i==69)
		printf("%c %c %c %c %c \n",i,i+1,i+2,i+3,i+4);
		
		if(i==66 || i==68){
			printf("  %c   %c\n", i+1, i+4);
		}
		
		if(i==67){
				printf("    %c  \n", i+2);
		}
			
	}
	 
	return 0;
}
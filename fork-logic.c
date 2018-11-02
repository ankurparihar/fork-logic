/** Print a c fork snippet that would result in n no of process*/
// warning: do not create too many processes as they will have serious performance impact

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc!=2){
		printf("Usage: ./fork-logic <no of process to generate>\n");
	}
	
	int n = atoi(argv[1]);
	int indention = 0;
	char *type1 = "if((p=fork())==0){";
	char *type2 = "fork();";
	int i;

	if(n>1)	printf("pid_t p;\n");

	while(n>1){
		if(n%2==1){
			for(i=0; i<indention; ++i) printf("\t");
			printf("%s\n", type1);
			indention++;
			n--;
		}
		else{
			for(i=0; i<indention; ++i) printf("\t");
			printf("%s\n", type2);
			n /= 2;
		}
	}
	while(indention-->0){
		for(i=0; i<indention; ++i) printf("\t");
		printf("}\n");
	}
	return 0;
}
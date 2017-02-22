#include <stdlib.h>
#include <stdio.h>

/*need to parse input file, parse input from user.
Input from user can be RR or FCFS or verbose all 
of which need to output different things to stdout*/

void inParser(FILE* testFile);
int* threadAnalyze(FILE* testFile, int threadNum, int procNum, int numOfThreads);

int main(int argc, char *argv[]){
	int i = 0;
	FILE* testFile;
	printf("Argc is now: %d\n", argc);

	//while(i <= argc){
		testFile = fopen(argv[2], "r");
	//	i++;
	//}
	i = 0;
	if(argc == 1){
		("No input file found.\n");
		exit(0);
	}
	else{
	inParser(testFile);
	}
}

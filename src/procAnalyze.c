#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* threadAnalyze(FILE* testFile, int threadNum, int procNum, int numOfThreads){
	int lineStart = 0;
	int lineEnd = 0;
	char* line = "";
	//int numOfThreads = 0;
	int* threadArray[9];//arbitrary size, fix later
	while (fgets(line, 3, testFile) != NULL)//reading in the file one line at a time, only until next process
    {
    	if(strlen(line) == 1){
    		printf("reached the end of thread\n");
    		printf("The number of lines in thread was %d\n", lineEnd);
    		return *threadArray;
    	}
    	/*if(counter == lineNum){
    		return threadArray[];
    	}*/
    	else if(procNum == 0){
    		lineStart = 2;
    	}
    	else{
    	   	for(int g = 0; line[g] != '\n'; g++){
    	   		lineEnd = 2 + numOfThreads;
    		}	
    	}
    	lineEnd += 1;
    }
    return *threadArray;
}

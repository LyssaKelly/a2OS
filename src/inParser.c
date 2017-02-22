#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int* threadAnalyze(FILE* testFile, int threadNum, int procNum, int numOfThreads);

 void inParser(FILE* testFile){
	char* line = "";
	char* line2 = "";
	int counter = 0;
	int numProc = 0;
	int threadSw = 0;
	int procSw = 0;
	int linelength = 0;
	int procNumNow = 0;
	int numOfThreads = 0;
	int threadNum = 0;
	int lineLength = 0;
	//int* threadArray[50];
	int digitCheck = 0;
	FILE *fopen(const char *testFile, const char *mode);
	printf("Worked\n");
	while(fgets(line, 3, testFile) != NULL)//reading in the file one line at a time, only until next process
    {
    	lineLength = strlen(line);
    	if(counter == 0){
   			numProc = line[0];
   			threadSw = line[1];
   			procSw = line[2];
    	}
    	if(lineLength == 1){//know if it the start of process
    		if(digitCheck == 0){//start of process
    			threadNum = line[1];
    			fgets(line2, 3, testFile);
    			numOfThreads = line2[2];
    			int* threadArray = threadAnalyze(testFile, threadNum, procNumNow, numOfThreads);
    			printf("The first item in threadArray is %d\n", threadArray[0]);
    			procNumNow += 1;
    			digitCheck = 1;
    		}
    	}
	}
}

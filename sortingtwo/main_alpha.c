#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "quicksorte.h"
#include "mergesorte.h"
#include "heapsorte.h"

char*a[1000010];

int main(int argc,char*argv[]){
	struct timeval start;
	struct timeval end;
	unsigned long diff;
	
	char line[1024];
	long long cnt=0;
	while(scanf("%s",line)!=EOF){
		a[cnt]=strdup(line);
		cnt++;
	}

	for(int i=1;i<argc;i++){
		if(strcmp(argv[i],"quicksort")==0){
			gettimeofday(&start,NULL);
			quicksort(a,0,cnt-1);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"mergesort")==0){
			gettimeofday(&start,NULL);
			mymergesort(a,0,cnt,cnt);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"heapsort")==0){
			gettimeofday(&start,NULL);
			myheapsort(a,cnt);
			gettimeofday(&end,NULL);
		}
	}

	for(long long i=0;i<cnt;i++){
		printf("%s\n",a[i]);
	}

	diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n",diff,diff/1000000.0);
	return 0;
}

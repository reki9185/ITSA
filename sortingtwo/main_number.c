#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "quicksort.h"
#include "quicksort2.h"
#include "mergesort.h"
#include "mergesort2.h"
#include "heapsort.h"
#include "radixsort.h"

int a[5000010];

int main(int argc,char*argv[]){
	struct timeval start;
	struct timeval end;
	unsigned long diff;
	
	int number;
	long long cnt=0;
	while(scanf("%d",&number)!=EOF){
		a[cnt]=number;
		cnt++;
	}

	for(int i=1;i<argc;i++){
		if(strcmp(argv[i],"quicksort")==0){
			gettimeofday(&start,NULL);
			quicksort(a,0,cnt-1);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"quicksort2")==0){
			gettimeofday(&start,NULL);
			quicksort2(a,0,cnt-1);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"mergesort")==0){
			gettimeofday(&start,NULL);
			mymergesort(a,cnt);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"mergesort2")==0){
			gettimeofday(&start,NULL);
			mymergesort2(a,cnt);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"heapsort")==0){
			gettimeofday(&start,NULL);
			myheapsort(a,cnt);
			gettimeofday(&end,NULL);
		}else if(strcmp(argv[i],"radixsort")==0){
			gettimeofday(&start,NULL);
			myradixsort(a,cnt);
			gettimeofday(&end,NULL);
		}
	}

	for(long long i=0;i<cnt;i++){
		printf("%d\n",a[i]);
	}

	diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n",diff,diff/1000000.0);
	return 0;
}

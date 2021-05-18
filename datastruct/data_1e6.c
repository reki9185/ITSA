#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*arr[1000010];
int main(){
	char data[128];
	char line[15];
	long long a=1;
	long long x;
	srand(1);
	for(long long i=0;i<100000;i++){
		scanf("%s",line);
		arr[i]=(char*)malloc(sizeof(char)*15);
		strcpy(arr[i],line);
	}
	for(long long i=0;i<10;i++){
		for(long long j=0;j<100000;j++){
			x=rand();
			if(x%2==0){
				arr[j][10]=a+'A';
			}else{
				arr[j][10]=a+'a';
			}
			arr[j][11]='\0';
			printf("%s\n",arr[j]);
		}
		a++;
	}
	return 0;
}


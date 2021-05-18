#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char line[15];
	char data[128];
	long long a;
	long long n;
	int x;
	n=100000;
	srand(1);
	for(long long i=0;i<n;i++){
		x=rand()%2;
		scanf("%s",line);
		if(x==1){
			printf("%s\n",line);
		}else{
			for(int j=0;j<10;j++){
				a=rand();
				if(a%2==0){
					data[j]=a%26+'a';
				}else{
					data[j]=a%26+'A';
				}
			}
			data[10]='\0';
			printf("%s\n",data);
		}
	}
	return 0;
}


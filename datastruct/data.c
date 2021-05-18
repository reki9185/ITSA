#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*arr[1000010];
int main(){
	char data[128];
	long long a;
	long long n;
	int flag=0;
	n=10;
	srand(1);
	for(long long i=0;i<n;i++){
		flag=0;
		for(int j=0;j<10;j++){
			a=rand();
			if(a%2==0){
				data[j]=a%26+'a';
			}else{
				data[j]=a%26+'A';
			}
		}
		data[10]='\0';
		for(int j=1;j<i;j++){
			if(strcmp(arr[j],data)==0){
				flag=1;
				break;
			}
		}
		if(flag==1){
			i--;
		}else{
			arr[i]=strdup(data);
			printf("%s\n",data);
		}
	}
	return 0;
}


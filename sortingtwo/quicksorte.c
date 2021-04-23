#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "quicksorte.h"

long long partition(char*a[],long long left,long long right){
	long long i=left+1,j=right;
	char*key;
	key=strdup(a[left]);
	char*tmp;
	while(i<j){
		while((strcmp(a[j],key)>0)&&i<j){
			j--;
		}
		while((strcmp(a[i],key)<=0)&&i<j){
			i++;
		}
		if(i<j){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	if(strcmp(a[left],a[i])>0){
		tmp=a[left];
		a[left]=a[i];
		a[i]=tmp;
	}
	return i;
}

void quicksort(char*a[],long long left,long long right){
	long long pivot;
	if(left>=right){
		return;
	}
	pivot=partition(a,left,right);
	quicksort(a,left,pivot-1);
	quicksort(a,pivot,right);
}

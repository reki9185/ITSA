#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "quicksort.h"

void swap(int*a,int*b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

long long partition(int a[],long long left,long long right){
	long long i=left+1,j=right;
	int key=a[left];
	while(i<j){
		while(a[j]>key&&i<j){
			j--;
		}
		while(a[i]<=key&&i<j){
			i++;
		}
		if(i<j){
			swap(&a[i],&a[j]);
		}
	}
	if(a[left]>a[i]){
		swap(&a[left],&a[i]);
	}
	return i;
}

void quicksort(int a[],long long left,long long right){
	long long pivot;
	if(left>=right){
		return;
	}
	pivot=partition(a,left,right);
	quicksort(a,left,pivot-1);
	quicksort(a,pivot,right);
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "quicksort2.h"
#define head 0
#define center 1
#define tail 2

void swap2(int*a,int*b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

long long partition2(int a[],long long left,long long right){
	long long mid=(left+right)/2;
	long long i,j;
	int state;
	long long max;
	int key;
	if(a[left]>=a[mid]){
		max=left;
		state=head;
	}else{
		max=mid;
		state=center;
	}
	if(a[right]<a[max]){
		if(max==left){
			if(a[right]>=a[mid]){
				state=tail;
			}else{
				state=center;
			}
		}else{
			if(a[right]>=a[left]){
				state=tail;
			}else{
				state=center;
			}
		}
	}
	if(state==head){
		i=left+1,j=right;
		key=a[left];
		while(i<j){
			while(a[j]>key&&i<j){
				j--;
			}
			while(a[i]<=key&&i<j){
				i++;
			}
			if(i<j){
				swap2(&a[i],&a[j]);
			}	
		}
		if(a[left]>a[i]){
			swap2(&a[left],&a[i]);
		}
	}else if(state==tail){
		i=left,j=right-1;
		key=a[right];
		while(i<j){
			while(a[j]>key&&i<j){
				j--;
			}
			while(a[i]<=key&&i<j){
				i++;
			}
			if(i<j){
				swap2(&a[i],&a[j]);
			}
		}
		if(a[right]<a[i+1]){
			swap2(&a[right],&a[i+1]);
		}
		return i+1;
	}else{
		i=left,j=right;
		key=a[mid];
		while(i<j){
			while((a[j]>key||j==mid)&&i<j){
				j--;
			}
			while((a[i]<=key||i==mid)&&i<j){
				i++;
			}
			if(i<j){
				swap2(&a[i],&a[j]);
			}
		}
		if(a[mid]>a[i]){
			swap2(&a[mid],&a[i]);
		}
	}
	return i;
}

void quicksort2(int a[],long long left,long long right){
	long long pivot;
	if(left>=right){
		return;
	}
	pivot=partition2(a,left,right);
	quicksort2(a,left,pivot-1);
	quicksort2(a,pivot,right);
}


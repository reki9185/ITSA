#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

struct lnode*ll_find(struct lnode*list,char*key){
	struct lnode*p=list;
	while(p){
		if(strcmp(p->key,key)==0){
			return p;
		}
		p=p->next;
	}
	return NULL;
}
struct lnode*ll_insert(struct lnode*list,char*key){
	struct lnode*p;
	p=(struct lnode*)malloc(sizeof(struct lnode));
	p->key=strdup(key);
	if(list==NULL){
		p->next=NULL;
		return p;
	}
	p->next=list;
	return p;
}

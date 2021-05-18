#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "array.h"
#include "binary.h"
#include "BST.h"
#include "hash.h"
#include "linkedlist.h"

char*a[1000010];
char*d[1000010];
char*q[1000010];
int main(int argc,char**argv){
	char line[1024];
	char*tmp;
	int c;
	int maxHash;
	long long dcnt;
	long long qcnt;
	unsigned long d_diff;
	unsigned long q_diff;
	struct tnode*tree=NULL;
	struct tnode*p;
	struct lnode*list=NULL;
	struct lnode*s;
	struct dnode**hashTab;
	struct dnode*r;
	struct timeval start;
	struct timeval end;
	if(strcmp(argv[2],"1e4")==0){
		dcnt=10000;
		maxHash=19997;
	}else if(strcmp(argv[2],"1e5")==0){
		dcnt=100000;
		maxHash=199999;
	}else if(strcmp(argv[2],"1e6")==0){
		dcnt=1000000;
		maxHash=1999993;
	}else{
		dcnt=10;
	}
	if(strcmp(argv[4],"1e3")==0){
                qcnt=1000;
        }else if(strcmp(argv[4],"1e4")==0){
                qcnt=10000;
        }else if(strcmp(argv[4],"1e5")==0){
                qcnt=100000;
        }else{
                qcnt=10;
        }
	//char*d[dcnt+5];
	//char*q[qcnt+5];
	for(long long i=0;i<dcnt;i++){
        	scanf("%s",line);
                d[i]=strdup(line);
        }
	for(long long i=0;i<qcnt;i++){
                scanf("%s",line);
                q[i]=strdup(line);
        }
	for(int i=5;i<argc;i++){
		if(strcmp(argv[i],"-bst")==0){
			gettimeofday(&start,NULL);
			for(long long i=0;i<dcnt;i++){
				tree=bst_insert(tree,d[i]);
			}
			gettimeofday(&end,NULL);
			d_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			gettimeofday(&start,NULL);
                        for(long long i=0;i<qcnt;i++){
				p=bst_find(tree,q[i]);
				/*if((p=bst_find(tree,q[i]))){
					printf("%s\n",p->key);
				}*/
                        }
                        gettimeofday(&end,NULL);
                        q_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			printf("BST\n");
		}else if(strcmp(argv[i],"-bs")==0){
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<dcnt;i++){
                                a[i]=strdup(d[i]);
                        }
			qsort(a,dcnt,sizeof(a[0]),cmp);
                        gettimeofday(&end,NULL);
                        d_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<qcnt;i++){
				tmp=binary(a,q[i],dcnt);
				/*if((tmp=binary(a,q[i],dcnt))){
                                	printf("%s\n",tmp);
				}*/
                        }
                        gettimeofday(&end,NULL);
                        q_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			printf("binary search\n");
                }else if(strcmp(argv[i],"-arr")==0){
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<dcnt;i++){
                               	a[i]=strdup(d[i]);
                        }
                        gettimeofday(&end,NULL);
                        d_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<qcnt;i++){
				tmp=arr_find(a,q[i],dcnt);
				/*if((tmp=arr_find(a,q[i],dcnt))){
					printf("%s\n",tmp);
				}*/
                        }
                        gettimeofday(&end,NULL);
                        q_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			printf("array\n");
                }else if(strcmp(argv[i],"-hash")==0){
			hashTab=(struct dnode**)malloc(sizeof(struct dnode*)*maxHash);
			for(int i=0;i<maxHash;i++){
				hashTab[i]=NULL;
			}
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<dcnt;i++){
				c=hash65(d[i])%maxHash;
                                hashTab[c]=h_insert(hashTab[c],d[i]);
                        }
                        gettimeofday(&end,NULL);
                        d_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<qcnt;i++){
				c=hash65(q[i])%maxHash;
				if(hashTab[c]){
					r=h_find(hashTab[c],q[i]);
					//printf("%s\n",r->key);
				}
                        }
                        gettimeofday(&end,NULL);
                        q_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			printf("hash\n");
                }else if(strcmp(argv[i],"-ll")==0){
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<dcnt;i++){
                                list=ll_insert(list,d[i]);
                        }
                        gettimeofday(&end,NULL);
                        d_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
                        gettimeofday(&start,NULL);
                        for(long long i=0;i<qcnt;i++){
				s=ll_find(list,q[i]);
				/*if((s=ll_find(list,q[i]))){
                                	printf("%s\n",s->key);
				}*/
                        }
                        gettimeofday(&end,NULL);
                        q_diff=1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
			printf("linked list\n");
                }else{
			printf("format error\n");
			exit(1);
		}
		printf("building time: %f sec\n",d_diff/1000000.0);
		printf("query time: %f sec\n",q_diff/1000000.0);
	}
	return 0;
}





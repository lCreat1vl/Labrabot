#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <string.h>
void create(struct teatr ** arr, int * n){
	printf("n=");
	scanf("%i",n);
	if (*n<=0)
		return;
	*arr=(struct teatr *)calloc(*n,sizeof(struct teatr));
	if(!arr)
                return;
	for(int i=0; i<*n ; i++){
		printf("name play=");
		scanf("%s",(*arr)[i].name_play);
		printf("price=");
		scanf("%d",&(*arr)[i].price);
		printf("free seats=");
		scanf("%d",&(*arr)[i].free_seats);

	};

}
void read(struct teatr  ** arr,int * n){
	FILE * f=fopen("text.txt","r");
	if(!f)
		return;
	if(fscanf(f,"%d",n)!=1)
		return;
	if(*n<=0)
		return;
	*arr=(struct teatr *)calloc(*n,sizeof(struct teatr));
	for(int i =0;i<*n;i++){
		fscanf(f,"%s %d %d",(*arr)[i].name_play,&(*arr)[i].price,&(*arr)[i].free_seats);
	}
	fclose(f);
}
void write(struct teatr * arr,int n){
	if(n<=0)
		return;
	FILE * f=fopen("text.txt","w");
	if(!f)
		return;
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%s %d %d\n",arr[i].name_play,arr[i].price,arr[i].free_seats);
	}
	fclose(f);
};

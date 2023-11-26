#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(){
	struct teatr * arr=NULL;
	int n = 0;
	int y = 0;
	int stop = 1;
	int tempKey = 0;
	while(stop){
		int key = 0;
		key+=tempKey;
		tempKey = 0;
		if (!key){
			printf("1-read,2-create,3-print,4-search\n");
			scanf("%i",&key);
		}
		switch(key){
			case 1:
				read(&arr,&n);
				if(!arr)
					printf("Ne poluchilos:(");
				else
					printf("loaded %d\n",n);
				break;
			case 2:
				create(&arr, &n);
				write(arr,n);
				if (!arr)
					break;
				break;
			case 3:
					for(int i=0;i<n;i++)
					printf("Name = %s; Price = %d; Free seats= %d;\n", arr[i].name_play,arr[i].price,arr[i].free_seats);
				break;
			case 4:
				search(arr,n);
				break;
			default:
				stop = 0;
				break;
		}
	}
	if(arr)
		free(arr);
	return 0;
}


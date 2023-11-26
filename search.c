#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(teatr *arr, int n){

	int select;
	printf("Search: 1.Name play 2.price 3.free seats\n");
	scanf("%i", &select);
	if(select>3 || select<0)
		return;
	switch(select){
		case 1:{
			char point[40];
			int ye=0;
			printf("Enter a name play: ");
			scanf("%s",point);
			for(int i = 0; i<n; i++)
			{
				if(!strcmp(arr[i].name_play,point))
				{
					printf("A play founds: %s %d %d\n", arr[i].name_play, arr[i].price, arr[i].free_seats);
					ye = 1;
				}
			}
			if (!ye)
				 printf("Play not founds\n");
			break;
		}
		case 2:{
                        int point;
                        int ye=0;
                        printf("Enter a price: ");
                        scanf("%d",&point);
                        for(int i = 0; i<n; i++)
                        {
                                if(arr[i].price==point)
                                {
                                        printf("A play founds: %s %d %d\n", arr[i].name_play, arr[i].price, arr[i].free_seats);
                                        ye = 1;
                                }
                        }
                        if (!ye)
				printf("Play not founds\n");
                        break;
		}
		case 3:{
                        int point;
                        int ye=0;
                        printf("Enter a free seats: ");
                        scanf("%d",&point);
                        for(int i = 0; i<n; i++)
                        {
                                if(arr[i].free_seats==point)
                                {
                                        printf("A play founds: %s %d %d\n", arr[i].name_play, arr[i].price, arr[i].free_seats);
                                        ye = 1;
                                }
                        }
                        if (!ye)
                                printf("Play not founds\n");
                        break;
		}
		default:
			break;
	}
}

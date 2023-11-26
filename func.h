typedef struct teatr {
	char name_play[40];
	int price;
	int free_seats;
}teatr;
void create(struct teatr ** arr,int * n);
void read (struct teatr ** arr,int * n);
void write(struct teatr * arr,int n);
void search(struct teatr * arr, int n);

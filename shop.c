#include<stdio.h>
#include<stdlib.h>
void add_item(char arr[],int b_price,int s_price);
int main() {
	printf("Main menu \n");
	printf("1.Add an item to the inventory \n");
	printf("2.Add a sale to the record\n");
	printf("3.View today's record\n");
	printf("4.Calculate profit and close the register \n");
	printf("Enter Your choice : \n");
	int choice;
	scanf("%d",&choice);
	
	switch (choice) {
		case 1 :{ 
		
			char item_name[20];
			int buying_price;
			int selling_price;
			
			printf("Enter the item name \n");
			scanf("%s",&item_name);
			
			printf("Enter buying_price \n");
			scanf("%d",&buying_price);
			
			printf("Enter selling_price \n");
			scanf("%d",&selling_price);
			add_item(item_name,buying_price,selling_price);
			break;
		}	
	}		
}
void add_item(char arr[],int b_price,int s_price){
	FILE *fptr;
	fptr=fopen("inventory.csv","a");
	if(fptr==NULL){
		printf("File opening unsucessful \n");
		return;
	}
	fprintf(fptr,"%s,%d,%d\n",arr,b_price,s_price);
	fclose(fptr);
	printf("Item added succesfully \n");
}	
	

			
			
		
		
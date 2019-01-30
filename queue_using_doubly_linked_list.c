//Queue Using Doubly Linked List
//By Goutham Elango

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct q{
	int data;
	struct q *ptr1,*ptr2;
}*front=NULL, *rear=NULL , *temp;

void enqueue(int num){
	/* First Check Whether Both front & rear are NULL */
	
	if((front==NULL)&&(rear==NULL)){
		temp = (struct q *)malloc(1*sizeof(struct q)); //Allocate Memory For Temp 
		temp->data = num; // Set Data into the temp
		temp->ptr1 = NULL; // Set Both pointers as Null 
		temp->ptr2 =NULL;
		front= temp; // Asign Front and rear as Temp
		rear = temp;
	}
	/*Else Create Temp and make its pointer2 pointing Towards rear queue & pointer 1 as Null */
	else{
		temp = (struct q *)malloc(1*sizeof(struct q));
		temp->data = num;
		temp->ptr2=rear;
		temp->ptr1=NULL;
		rear->ptr1=temp; // DO Make Rear Pointer Pointing Towards temp
		rear=temp; // assign rear as temp
	}
}
void dequeue(){
		/* First Check Whether Both front & rear are NULL if it is throw a error
		   Becoz Queue Is Empty */
		
	if((front==NULL)&&(rear==NULL)){
		printf("Error! Empty Queue!\n");
	}
	/*If Both rear & Front are Same, Make both Front And rear as null*/
	else if(rear==front){
		printf("Element Removed from Queue is %d\n",front->data);
		front=NULL;
		rear=NULL;
	}
	
	else{
		temp=front;
		front=temp->ptr1;
        printf("Element Removed from Queue is %d\n",temp->data);
		front->ptr2=NULL;
	}
}
void disp(){
	if((front==NULL)&&(rear==NULL)){
		printf("Error! Empty Queue!\n");
	}
	else{
		temp=front;
		do{
			printf("\n|%d|",temp->data);
			temp=temp->ptr1;
			
		}while(temp!=NULL);
	}
}

void main(){
	int res,num;
	while(1){
		printf("\n1 - Enqueue\n2 - Dequeue\n3 - Display\n4 - Exit\nEnter Your Choice:");
		scanf("%d",&res);
		switch(res){
			case 1:printf("Enter Your Data:");
			       scanf("%d",&num);
			       enqueue(num); // To Add
			       break;
			case 2: dequeue(); break; // To Delete 
			case 3: disp(); break; //To Display The Queue
			case 4: exit(0);
		}
	}
	
}

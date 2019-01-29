// stack using linked list 
// by Goutham Elango

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *ptr;
}*top=NULL,*temp;

void push(int num){
	if(top==NULL){   //if the top is null get the data and make pointer as null
		top =(struct st *)malloc(1*sizeof(struct st));
		top->data = num;
		top->ptr=NULL;
	}
	/* else get the variable in temp and make it pointing towards the top 
	and finnaly asign top  is temp */
	else{ 
	    temp=(struct st *)malloc(1*sizeof(struct st));   
	    temp->data=num;
		temp->ptr=top;
		top=temp;
	}
}
void pop(){
	/*if the top is null show a error becoz you cant delete when you have nothing
	  in the stack*/ 
	  
	if(top==NULL){
		printf("Error");
	}
	//make temp as top and make top as it pointing stack address
	else{
		temp=top;
		printf("Element Pushed Out From Stack is %d",top->data);
		temp=temp->ptr;
		top=temp;
	}
}
void disp(){
	//check whether the stack is empty if it is throw a message 
	if(top==NULL){
		printf("\nStack is Empty");
	}
	//else make temp as top and run it throughout the stack till the temp 
	//variable gets NULL btw display its data with it.
	else{
		printf("Your Stack Is : ");
		temp=top;
		while(temp!=NULL){
			printf("\n|%d|",temp->data);
			temp=temp->ptr;
		}
	}
}
void main(){
	int res,num;
	while(1){
		printf("\n1 - Push\n2 - Pop\n3 - Display\n4 - Exit\nEnter Your Choice:");
		scanf("%d",&res);
		switch(res){
			case 1:	printf("Enter The Data:");
	             	scanf("%d",&num);
			        push(num); break; // to add a data into the stack
			case 2: pop(); break; // to delete a data into the stack
			case 3: disp(); break;
			case 4: exit(0);break;
		}
	}	
}

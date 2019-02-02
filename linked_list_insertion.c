#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *p1,*p2;
}*head=NULL,*temp,*t1,*t2;

int count=0;

void create(){
	if(head==NULL){
		temp=(struct node *)malloc(1*sizeof(struct node));
		printf("Enter the Data:");
		scanf("%d",&temp->data);
		temp->p1=NULL;
		temp->p2=NULL;
		head=temp;
		count++;
	}
	else{
		printf("Node Is Already Created! Try To Insert Node\n");
	}	
}

int getdata(){
		int num;
		printf("Enter The Data: ");
		scanf("%d",&num);
		return num;
	}
	
void ins(int num){
	int res,pos,i;
		printf("1 - At the Begin\n2 - At the End\nEnter Your Choice:");
		scanf("%d",&res);
		switch(res){
			case 1:temp=(struct node *)malloc(1*sizeof(struct node));
	               temp->data=num;
	               temp->p1=head;
	               temp->p2=NULL;
	               head->p2=temp;
	               head=temp;
	               count++;
	               break;
	        case 2:temp=(struct node *)malloc(1*sizeof(struct node));
	               temp->data=num;
	               t1=head;
	               while(t1->p1!=NULL){
	               	t1=t1->p1;
				   }
				   t1->p1=temp;
				   temp->p1=NULL;
				   temp->p2=t1;
				   count++;
				   break;
				   				                 
		}
	}
	
void disp(){
	t1=head; 
	int i=1;
	printf("Number Of Node is :%d\n",count);
	while(t1!=NULL){
		printf("Node - %d : Data -  %d \n",i,t1->data);
		t1=t1->p1;
		i++;
	}
}
	
void main(){
	int res,num;
	while(1){
		printf("1 - Create\n2 - Display\n3 - Insertion\nEnter Your Choice:");
		scanf("%d",&res);
		switch(res){
			case 1:create();
			       break;
			case 2:disp(); break;
			case 3:num=getdata();
			       ins(num);
			       break;
		}
		
	}
}

#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE*head=NULL;

void insert_at_head(NODE *nn){
	if(head == NULL){
		head=nn;
	}
	else{
		nn ->next=head;
		head=nn;
	}
}
void insert_at_end(NODE *nn){
	if(head == NULL){
		head=nn; 
	}
	else{
		NODE *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=nn;  //inserting new nede at tail
	}
}
void delete_at_head(){
	if(head == NULL){
		printf("No Nodes\n");
		return;
	}
	printf("Deleted Element is %d: \n",head -> data);
	NODE *dn = head;//Starting to be deleted in dn varaible to free
	head = head -> next;//
	free(dn); //Deallocating Memory
}
void delete_at_end()
{
	if(head == NULL){// if list is empty
		printf("No Nodes\n");
	}
	else if(head -> next == NULL){//if list contains only one node
		printf("Deleted element is %d\n",head -> data);
		head = NULL;
	}
	else// if list containg more than one node
	{
		NODE *temp = head;
		while(temp -> next-> next != NULL){
			temp = temp -> next;
		} 
		printf("Deleted element is %d\n",temp -> next -> data);
		NODE *dn = temp -> next;
		temp -> next =NULL;
		free(dn);
	}
}
void insert_at_pos(NODE *nn,int pos){
	if(pos == 1){
		insert_at_head(nn);
	}
	else{
		NODE *temp = head;
		int c=1;
		while(c <pos - 1){
			c++;
			temp = temp -> next;
		}
	//	printf("Printing current position %d\n" ,c);
		nn -> next =temp -> next;
		temp -> next = nn;
	}
}
void display(){
	if(head==NULL){
		printf("No Nodes\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL){
		printf("%d ",temp ->data);
		temp=temp->next;
	}
	printf("\n");
}


int main(){
	while(1){
		int choice;
		printf("Enter\n1.Insert at head\n2.Insert at end\n3.Delete at head\n4.Delete at end\n5.Insert at pos\n6.Delete at pos\n7.Display and anything else to exit");
		scanf("%d",&choice);
		if(choice ==1){
			//insert_at_head()
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn -> data=val;
			nn -> next=NULL;
			insert_at_head(nn);
		}
		else if(choice==2){
			//insert_at_end()
			int val;
			printf("Enter value to be inserted");
			scanf("%d",&val);
			NODE *nn = (NODE *)malloc(sizeof(NODE));
			nn -> data =val;
			nn -> next = NULL;
			insert_at_end(nn);
		}
		else if(choice==3){
			//Delete_at_head()
			delete_at_head();
			
		}
		else if(choice==4){
			//Delete_at_end()
			delete_at_end();
			
		}
		else if(choice==5){
            //insert_at_pos();
			NODE *nn= (NODE *)malloc(sizeof(NODE));
			int val;
			printf("Enter a value to inserted:");
			scanf("%d",&val);
			nn -> data = val;
			nn -> next = NULL;
			int pos;
			printf("Enter the position to be insert the node: ");
			scanf("%d",&pos);
			insert_at_pos(nn,pos);
		}
		else if(choice==6){
			//delete_at_pos();
		}
		else if(choice==7){
			//Display
			display();
		}
		else{
			printf("Thank You");
			break;
		}
	}
}

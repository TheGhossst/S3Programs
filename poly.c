#include <stdio.h>
#include <stdlib.h>
struct node{
    int coeff;
    int expo;
    struct node *link;
};
void read(struct node**);
void display(struct node*);
void add(struct node**,struct node*,struct node*);
int main()
{

	struct node* first = NULL;
	struct node* second = NULL;
	struct node* result = NULL;
	struct node* mul=NULL;
	printf("\nFirst polynomial:\n");
	read(&first);
	display(first);
	printf("\nSecond polynomial:\n");
	read(&second);
	display(second);
    	add(&result,first,second);
    	display(result);
}
void read(struct node** p){
    int coeff, exp, cont;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	*p = temp;
	do{
		printf("Enter the Coeffecient: ");
		scanf("%d", &coeff);
		printf("Enter the Exponent: ");
		scanf("%d", &exp);
		temp->coeff = coeff;
		temp->expo = exp;
		temp-> link = NULL;
		printf("\nEnter 1 to add more elements  and 0 for no more elements: ");
		scanf("%d", &cont);
		if(cont)
		{
			temp->link = (struct node*)malloc(sizeof(struct node));
			temp = temp->link;
			temp->link = NULL;
		}
	}while(cont);	
}
void display(struct node* p)
{
	printf("\nThe Polynomial is: ");
	while(p != NULL)
	{
		printf("%dx^%d", p->coeff,p->expo);
		p=p->link;
		if(p != NULL)
			printf("+");
	}
}
void add(struct node** result,struct node* p1,struct node* p2){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
 	temp->link = NULL;
 	*result = temp;
    while(p1!=NULL && p2!=NULL){
        if(p1->expo > p2->expo){
            temp->coeff=p1->coeff;
            temp->expo=p1->expo;
            p1=p1->link;
        }
        else if(p1->expo < p2->expo){
            temp->coeff=p2->coeff;
            temp->expo=p2->expo;
            p2=p2->link;
        }
        else{
            temp->coeff=p1->coeff+p2->coeff;
            temp->expo=p1->expo;
            p1=p1->link;
            p2=p2->link;
        }
		if(p1 && p2)
 		{
 			temp->link = (struct node*)malloc(sizeof(struct node));
 			temp = temp->link;
 			temp->link = NULL;
 		}
    }
    while(p1!=NULL || p2!=NULL)
 	{
 		temp->link = (struct node*)malloc(sizeof(struct node));
 		temp = temp->link;
 		temp->link = NULL;
 			
 		if(p1!=NULL)
 		{
 			temp->coeff = p1->coeff;
 			temp->expo = p1->expo;
 			p1=p1->link;
 		}

 		else if(p2!=NULL)
 		{
 			temp->coeff = p2->coeff;
 			temp->expo = p2->expo;
 			p2=p2->link;
 		}
 	}
}

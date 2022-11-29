#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node1{
    int data;
    struct node1 *link;
};
struct node *head;
struct node1 *front;
struct node1 *rear;
void stack();
void q();
void push();
void pop();
void display();
void enqu();
void dequ();
void show();
void main(){
    int c;
    do{
        printf("\n.............................\n");
        printf("Main Menu\n");
        printf("1.Stack\n2.Queue\n3.Exit");
        printf("\n..............................\n");
        printf("\nEnter the choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            stack();
            break;
        case 2:
            q();
            break;
        case 3:
            printf("Exit");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }while(c!=3);
} 
void stack(){
    int c;
   
    printf("\n...............................\n");
    printf("\nStack Operations\n");
    printf("\n....................................\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit To Main Menu\n");
    printf("\n........................................\n");
    do{
        printf("\nEnter the choice: ");
        scanf("%d",&c);
        switch (c)
        {
            
            case 1:
            push();
            break;
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid Choice");
                break;
        }
    }while(c!=4);  
               
}  
void push(){
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)  
    {  
        printf("Empty List");   
    }  
    else   
    {  
        printf("Enter the item: ");  
        scanf("%d",&item);  
        if(head==NULL)  
        {         
            ptr->data = item;  
            ptr -> link = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->data = item;  
            ptr->link = head;  
            head=ptr;  
                        
        }
    }  
}
void pop(){
    int item;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));   
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->data;  
        ptr = head;  
        head = head->link; 
        free(ptr);  
        printf("Item popped");  
    }
                
}
void display(){
    int i;
    struct node *ptr;    
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Contents of the stack are:\n");  
        while(ptr!=NULL)  
        {  
            printf("%d\t",ptr->data);  
            ptr = ptr->link;  
        }
    }
}
void q(){
    int c;
    
    printf("\n...............................\n");
    printf("\nQueue Operations\n");
    printf("\n....................................\n");
    printf("1.Enque\n2.Deque\n3.Display\n4.Exit To Main Menu\n");
    printf("\n........................................\n");
    do{
        printf("\nEnter the choice: ");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
                enqu();
                break;               
            case 2:
                dequ();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid Choice");
        }
    }while(c!=4);
}
void enqu(){
    int item;
    struct node1 *ptr;
    ptr=(struct node1*)malloc(sizeof(struct node1));
    if(ptr==NULL){
        printf("Overflow");
    }
    else{
        printf("Enter the item: ");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL){
            front=ptr;
            rear=ptr;
            front->link=NULL;
            rear->link=NULL;
        }
        else{
            rear->link=ptr;
            rear=ptr;
            rear->link=NULL;
        }
    }
                
}    
void dequ(){
    struct node1 *ptr;
    ptr=(struct node1*)malloc(sizeof(struct node1));
    if(front==NULL){
                printf("Underflow");
    }
    else{
        ptr=front;
        front=front->link;
        printf("Deleted %d",ptr->data);
        free(ptr);
    }
}
void show(){
    struct node1 *ptr;
    ptr=front;
    if(front==NULL){
        printf("Empty Queue");
    }
    else{
        printf("\nQueue:\n");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}
        
        
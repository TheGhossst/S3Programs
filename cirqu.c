#include <stdio.h>
int max=10;
int queue[10];   
int front=-1;  
int rear=-1; 
void enqueue();
void dequeue();
void display(); 
void enqueue()  
{  
    int element;
    if(front==-1 && rear==-1) 
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%max;       
        queue[rear]=element;    
    }  
}  
void dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%max;  
}  
}  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
void main()  
{  
    int choice,x;   
      
    do
    {  
        printf("\n Press 1: Insert an element");  
        printf("\nPress 2: Delete an element");  
        printf("\nPress 3: Display the element");
        printf("\nPress 4:Exit");  
        printf("\nEnter your choice");  
        scanf("%d", &choice);  
        
        switch(choice)  
        {  
            
            case 1:
                enqueue(x);  
                break;  
            case 2:  
                dequeue();  
                break;  
            case 3:  
                display(); 
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
                break; 
    
        }
    }while(choice!=4);  
}
#include <stdio.h>
int stack[50],q[50];
int top=-1,rear=-1,n,i,c,ch,front=-1;
void Stack();
void Queue();
void push();
void pop();
void display();
void enque();
void deque();
void dis();
void main(){
    do{
        printf("\n.............................\n");
        printf("1.Stack\n2.Queue\n3.Exit\n");
        printf("\n..............................\n");
        printf("Enter the choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                Stack();
                break;
            case 2:
                Queue();
                break;
            case 3:
                printf("Exit");
                break;
            default:
                printf("Invalid Choice");
                break;
        }

    }while(c!=3);
}
void Stack(){
    printf("Enter the limit of the stack: ");
    scanf("%d",&n);
    do{
        printf("\n....................\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\n.....................\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch (ch)
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
            printf("Inavlid Choice");
            break;
        }
    }while(ch!=4);

}
void Queue(){
    printf("Enter the limit of the queue: ");
    scanf("%d",&n);
    do{
        printf("\n....................\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\n.....................\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            dis();
            break;
        case 4:
            printf("Exit");
            break;
        default:
            printf("Inavlid Choice");
            break;
        }
    }while(ch!=4);

}
void push(){
    int num;
    if(top>=n-1){
        printf("Overflow");
    }
    else{
        printf("Enter item to be pushed: ");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}
void pop(){
    if(top<=-1){
        printf("Underflow");
    }
    else{
        printf("The element popped is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top>=0){
        printf("The Contenets of the Stack are:\n");
        for(i=0;i<=top;i++){
            printf("%d\t",stack[i]);
        }
    }
    else{
        printf("Empty Stack");
    }
}
void enque(){
    int num;
    if(rear>=n-1){
        printf("Overflow");
    }
    else{
        if(front==-1){
            front=0;
        }
        printf("Enter the element to be enqueued: ");
        scanf("%d",&num);
        rear++;
        q[rear]=num;
    }
}
void deque(){
    if(front==-1 || rear<front)
        printf("Underflow");
    else{
        printf("The element to be dequed is %d",q[front]);
        front++;
    }
}
void dis(){
    if(front==-1)
        printf("Empty Queue");
    else{
        printf("The contents of the queue are:\n");
        for(i=front;i<=rear;i++){
            printf("%d\t",q[i]);
        }
    }
}
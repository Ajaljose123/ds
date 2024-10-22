#include<stdio.h>
#include<stdlib.h>

int pop();
void push(int);
void travel();
 int s[10],max=10;
 int top=-1;
void main()
{
    int op,item;
   while(1){
    printf("\n 1 -> push\n 2 -> pop\n 3 -> traversal\n 4 -> exit\n\n");
    scanf("%d",&op);
    switch(op){
        case 1: printf("\nEnter the item: ");
                scanf("%d",&item);
                push(item);
                break;
        case 2: printf("\nPoped item: %d",pop());
                break;
        case 3: travel(); break;
        case 4: exit(0);
        default: printf("Invalid");
    }
   }
}
   void push(int ele){
        top++;
        if(top==max){
            printf("\nStack Overflow\n");
            return;
        }
        s[top]=ele;
        printf("\nElement inserted %d",s[top]);

   }
   int pop(){
    if(top==-1)
    {
        printf("stack underflow");
    }
    else{
    top--;
    }
   }
   void travel(){
   if(top==-1)
   {
   printf("empty");
   }
   else
    {
    //printf("top =%d",top);
        for(int i=0;i<=top;i++)
            {

                printf("%d ",s[i]);
            }
    }
   }

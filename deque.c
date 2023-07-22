//DEQUE USING ARRAYS

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
   int n;
   printf("Enter the maximum number of elements in deqeue");
   scanf("%d",&n);
   
   int deque[n];    
   int f=-1;int r=-1;
   
   void enqueuefront(int x){
       
       if((f==0 && r==n-1) && (f==r+1)){
           printf("Queue is Full");
       }
       else if(f==-1 && r==-1){
           f=0;r=0;
           deque[f]=x;
       }
       else if(f==0){
           f=n-1;
           deque[f]=x;
       }
       else{
           f--;
           deque[f]=x;
       }
   }
   
   void enqueuerear(int x){
       
       if((f==0 && r==n-1) || (f==r+1)){
           printf("Queue is Full");
       }
       else if(f==-1 && r==-1){
           f=0;r=0;
           deque[r]=x;
       }
       else if(r==n-1){
           r=0;
           deque[r]=x;
       }
       else{
           r++;
           deque[r]=x;
       }
   }
    
    
    void dequeuefront(){
        
        if(f==-1 && r==-1){
            printf("Queue is Empty");
        }
        else if(f==r){
            f=-1;r=-1;
        }
        else if(f==n-1){
           // printf("%d",deque[f]);
            f=0;
        }
        else{
           // printf("%d",deque[f]);
            f++;
        }
    }  
    
    void dequeuerear(){
        if(f==-1 && r==-1){
            printf("Queue is Empty");
        }
        else if(f==r){
            f=-1;r=-1;
        }
        else if(r==0){
          //  printf("%d",deque[r]);
            r=n-1;
        }
        else{
           // printf("%d",deque[r]);
            r--;
        }
    }
    
    
    void display(){
        int i=f;
        while(i!=r){
            printf("%d ",deque[i]);
            i=(i+1)%n;
        }
        printf("%d ",deque[r]);
    }
    
    
    enqueuefront(50);
    enqueuefront(60);
    enqueuerear(70);
    display();
    printf("\n");
    dequeuefront();
    display();
     printf("\n");
    dequeuerear();
    display();
    
    
    
}

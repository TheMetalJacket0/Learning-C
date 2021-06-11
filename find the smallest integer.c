#include<stdio.h>
int min(int);
int main(void){
    int  num,smallest;
    scanf("%d",&num);
    smallest = min(num);
    printf("%d",smallest);
    
    
    return 0;
}
int min(int x){
    int i,num1,num2,small;
    i=0;
    small = 0;
     scanf("%d",&num1);
     scanf("%d",&num2);
            if(num1<num2){
                small = num1;
            }else if(num1>num2){
                small=num2;
        }
    
    
    for(i=2;i<x;i++){
        scanf("%d",&num1);
       if(num1<small){
            small = num1;
            
            
            
        }else if(num1>small){
            small=small;
        }


        
    }
    return small;
    
    
}

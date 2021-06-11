#include<stdio.h>
int sumofnums(int);
int main(void){
    int num=0;
    scanf("%d",&num);
    num = sumofnums(num);
    printf("%d",num);
    
    
}
int sumofnums(int x){
    int result=0;
    if(x<=10){
        return result+x;
    }else{
        result = x%10 +sumofnums(x/10);  
    }
    

    return result;
    
    
    
}

#include<stdio.h>
int main(void){
    char word[101];
    int i,j, num,longest,current;
    i=0;
    j=0;
    longest=0;
    
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
        scanf("%s",word);

        j=0;
        current=0;
        while(word[j]!= '\0'){
            
            j++;
            current = j;
            
            
            
            
        }
        if(current > longest){
            
            longest = current;
            
        }
        
        
        
    }
    printf("%d",longest);
    
    
    
    
    
    
    
    
    
    return 0;
}

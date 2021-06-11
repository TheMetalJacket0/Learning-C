#include<stdio.h>

int main(void){
    char word[51],swap;
    int i,j,k,length,repeats;
    i=0;
    j=0;
    k=0;
    length = 0;
    repeats=0;
    scanf("%s",word);


    while(word[i] != '\0'){
        length++;
        i++;
    }
    
    
    for(j=0;j<length-1;j++){
        
        for(k=0;k<length-1;k++){
            if(word[k] >word[k+1]){
                swap = word[k];
                word[k] = word[k+1];
                word[k+1] = swap;
            }
        }
        
        
    }
    i=0;
    while(i<length-1){
        if(word[i]==word[i+1]){
            repeats++;
            j=i+2;
            while(j<length && word[i] ==word[j]){
                j++;
                
                
                
                
            }
            i=j;
            
            
            
            
            
        }else{
            i++;
        }
        
        
        
        
    }
    
    
    
    
    printf("%d",repeats);

    


    
    
    
    
    
    
    return 0;
}

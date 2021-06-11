#include<stdio.h>

int main(void){
    char word[51];
    int i, j,found;
    found=0;
    j=0;
    i=0;
    scanf("%s",word);
    
    while(word[i]!='\0'){
        
        if(word[i] =='t' || word[i] == 'T'){
             i++;
            found = i;
           
            
        }else{
            i++;
        }   
       
    }    

    
    if(i/2 >found && found !=0){
        
        
        printf("1");
        
        
        
        
    }else if(i/2<found ){
        
        printf("2");
        
    }else if(found == 0){
        
       printf("-1"); 

    }
    
    
    
    
    return 0;
}

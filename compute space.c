#include<stdio.h>

int main(void){
    int value,i,n,j,total;
    i=0;
    j=0;
    char format;
    
    scanf("%d",&n);
    total = 0;
    
    for(i=0;i<n;i++){
        
        scanf("%d %c",&value,&format);
        for(j=0;j<value;j++){
            if(format == 'i'){
               total = total + sizeof(int);
            
            
            }else if(format == 'd'){
                total = total + sizeof(double);
                
            
            
            
            }else if(format == 'c'){
                total = total + sizeof(char);
            
            
            
            
            }else{
                printf("Invalid tracking code type");
                return 0;
                
            }
        }
        
        
        
        
    }
    printf("%d bytes",total);
    
    
    
    
    
    return 0;
}

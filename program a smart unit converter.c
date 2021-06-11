#include<stdio.h>
double metertofeet(double);
double gramtopound(double);
double ctof(double);
void conversion(double,char);
int main(void){
    int num,i;
    i = 0;
    double con;
    char unit;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%lf %c",&con,&unit);
        conversion(con,unit);
    }

    
    
    
    
    
    return 0;
}
void conversion(double x, char c){
    double result;
    if(c =='m'){
        result = metertofeet(x);
        printf("%lf ft\n",result);
    }else if(c == 'g'){
        result = gramtopound(x);
        printf("%lf lbs\n",result);
        
    }else if(c =='c'){
        result = ctof(x);
        printf("%lf f\n",result);
        
    }

    
    
}
double metertofeet(double x){
    double result;
    result = x*3.2808;
    return result;
}
double gramtopound(double x){
    double result;
    result = x * 0.002205;
    return result;
}
double ctof(double x){
    double result;
    result = 32 + 1.8 * x;
    return result;
}

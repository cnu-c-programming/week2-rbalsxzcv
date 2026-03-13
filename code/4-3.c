#include <stdio.h>

int main(){
    int input;
    int bol = 1;
    
    scanf("%d",&input);
    if(input == 1){
        printf("false");
        return 0;
    }
    for(int i = 2; i<=input/2;i++){
        printf("%d %d   = %d",input,i,input%i);
        if(input % i == 0)
            bol = 0;
    }
    if(bol == 1)
        printf("true");
    else
        printf("false");    
    return 0;
}

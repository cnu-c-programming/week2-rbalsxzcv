#include <stdio.h>

int main(){
    int input;
    int bol = 1;
    
    scanf("%d",&input);
    for(int i = 2; i<=sizeof(input)/2;i++){
        if(input % i == 0)
            bol = 0;
    }
    if(bol == 1)
        printf("true");
    else
        printf("false");    
    return 0;
}

#include <stdio.h>
int sumoftwo(int a,int b){
    if (b==0){
        return a;
    }
    else{
        return sumoftwo(a+1,b-1);
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=sumoftwo(a,b);
    printf("%d",c);
}

#include<stdio.h>

int main(){
    int n,m,c;
    int mishka=0, chris=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &m, &c);
        if(m>c){
            mishka++;
        }
        else if(c>m){
            chris++;
        }
    }
    if(chris>mishka){
        printf("Chris\n");
    }
    else if(chris<mishka){
        printf("Mishka\n");
    }
    if(chris==mishka){
        printf("Friendship is magic!^^\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int k,n,w,tot;
    scanf("%d %d %d", &k, &n, &w);
    tot = ((w*(w+1))/2)*k;
    if(tot>n){
        printf("%d\n", tot-n);
    }
    else if(tot<=n){
        printf("%d\n", 0);
    }

    return 0;

}

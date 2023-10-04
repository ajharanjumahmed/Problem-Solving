#include<stdio.h>

int main(){
    int n,p,q;
    int cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &p, &q);
        if(p<=(q-2)){
            cnt++;
        }
    }
    printf("%d\n", cnt);


    return 0;

}




#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int limak=a, bob=b;
    int cnt=1;
    while(1){
        limak = limak*3;
        bob = bob*2;
        if(limak>bob){
            printf("%d\n", cnt);
            break;
        }
        cnt++;
    }
    return 0;

}

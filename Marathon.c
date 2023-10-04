#include<stdio.h>

int main(){
        int a,b,c,d,t;
        scanf("%d", &t);
        for(int i=0; i<t; i++){
            int count = 0;
            scanf("%d %d %d %d", &a, &b, &c, &d);
            if(b>a){
                count++;
            }
            if(c>a){
                count++;
            }
            if(d>a){
                count++;
            }
            printf("%d\n", count);
        }

    return 0;

}


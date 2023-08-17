#include<stdio.h>

int main(){
    long long x;
    scanf("%lld", &x);
    int count=0;

    if(x>=5){
        int k = x/5;
        count = count + k;
        x = x-(5*k);
    }
    if(x>=4){
        int l = x/4;
        count = count + l;
        x = x-(4*l);
    }
    if(x>=3){
        int m = x/3;
        count = count + m;
        x = x-(3*m);
    }
    if(x>=2){
        int n = x/2;
        count = count + n;
        x = x-(2*n);
    }
    if(x>=1){
        int o = x/1;
        count = count + o;
        x = x-(1*o);
    }
    printf("%d\n", count);

}

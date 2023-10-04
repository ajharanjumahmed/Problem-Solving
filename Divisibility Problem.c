#include<stdio.h>

int main(){
    long long a,b;
    long long t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        if(b>a){
            printf("%lld\n",b-a);
        }
        else if(a%b==0){
            printf("0\n");
        }
        else if(a>b){
            long long int k=a%b;
            printf("%lld\n",b-k);
        }
    }
     return 0;
}


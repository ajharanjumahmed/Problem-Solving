#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int cnt=0;
    do{
        if(n%10== 7){
            cnt++;
            n=n/10;
        }
        else if(n%10== 4){
            cnt++;
            n=n/10;
        }
        else{
            n=n/10;
        }
    }while(n!=0);

    if(cnt== 4){
        printf("YES\n");
    }
    else if(cnt== 7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}



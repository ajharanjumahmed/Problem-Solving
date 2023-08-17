#include<stdio.h>

int main(){
    long long n, m, a, length, breadth;
    scanf("%lld%lld%lld", &n, &m, &a);

    if(n<a && m<a){
        printf("%d\n", 1);
    }

    else {
    if(n%a==0){
        length = n/a;
    }
    else if(n%a!=0){
        length = ((n/a)+1);
    }
    if(m%a==0){
        breadth = m/a;
    }
    else if(m%a!=0){
        breadth = ((m/a)+1);
    }
    printf("%lld\n", length*breadth);
    }
}

#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if(sum%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

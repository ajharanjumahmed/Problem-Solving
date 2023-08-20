#include<stdio.h>

int main(){
    int n;
    int count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int i=0; i<3; i++){
            int arr[3];
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if(sum >= 2){
                count++;
            }
        else{
                continue;
            }
    }
    printf("%d", count);

    return 0;
}

#include<stdio.h>

int main(){
    int n,h, width=0;
    scanf("%d %d", &n, &h);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]<=h){
            width++;
        }
        else if(arr[i]>h){
            width=width+2;
        }
    }
    printf("%d\n", width);

    return 0;

}





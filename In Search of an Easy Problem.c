#include<stdio.h>

int main(){
    int n,flag=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            flag++;
        }
        else
            continue;
    }
    if(flag>0){
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }

    return 0;

}




#include<stdio.h>
#include<string.h>

int main(){
    char s[101], t[101];
    scanf("%s", &s);
    scanf("%s", &t);
    int count = 0;

    for(int i=0; s[i]!='\0'; i++){
        count++;
    }

    char rev[count];
    int j=0,k=count-1;
    for(int i=k; i>=0; i--){
        rev[j] = s[i];
        j++;
    }
    rev[count]='\0';

    int cmp = strcmp(rev,t);

    if(cmp==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}


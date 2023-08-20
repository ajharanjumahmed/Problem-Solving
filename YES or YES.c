#include<stdio.h>
#include<string.h>

int main(){
    int t;
    char s[4];
    char s1[4]= "YES";
    char s2[4]= "YEs";
    char s3[4]= "YeS";
    char s4[4]= "yES";
    char s5[4]= "Yes";
    char s6[4]= "yEs";
    char s7[4]= "yeS";
    char s8[4]= "yes";
    scanf("%d", &t);
    while(t--){
        scanf("%s",&s);
        int d=strcmp(s,s1);
        int e=strcmp(s,s2);
        int f=strcmp(s,s3);
        int g=strcmp(s,s4);
        int h=strcmp(s,s5);
        int i=strcmp(s,s6);
        int j=strcmp(s,s7);
        int k=strcmp(s,s8);
     if(d==0 || e==0 || f==0 || g==0 || h==0 || j==0 || k==0 || i==0){
        printf("YES\n");
     }
     else
        printf("NO\n");
    }
    return 0;
}



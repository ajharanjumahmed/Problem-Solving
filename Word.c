#include<stdio.h>
#include<ctype.h>

int main(){
    char word[101];
    gets(word);
    int small_char = 0;
    int cap_char = 0;

    for(int i=0; word[i]!='\0'; i++){
        if(word[i]>='a' && word[i]<='z'){
            small_char++;
        }
        else if(word[i]>='A' && word[i]<='Z'){
            cap_char++;
        }
    }

    if(small_char>cap_char || small_char==cap_char){
        for(int i=0; word[i]!='\0'; i++){
            printf("%c", tolower(word[i]));
        }
    }

    else if(small_char==cap_char){
        for(int i=0; word[i]!='\0'; i++){
            printf("%c", tolower(word[i]));
        }
    }

    else if(cap_char>small_char){
        for(int i=0; word[i]!='\0'; i++){
            printf("%c", toupper(word[i]));
        }
    }
    return 0;

}


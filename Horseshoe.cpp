#include<bits/stdc++.h>
using namespace std;

int main(){
   int s1,s2,s3,s4;
   int flag = 0;
   cin >> s1 >> s2 >> s3 >> s4;
   if((s1==s2 && s1==s3 && s1==s4)){
        cout << 3;
   }
   else {

    if(s1==s2){
        flag++;
    }
    if(s1==s3){
        flag++;
    }
    if(s1==s4){
        flag++;
    }
    if((s2!=s1)&&(s2==s3)){
        flag++;
    }
    if((s2!=s1)&&(s2==s4)){
        flag++;
    }
    if((s3!=s2)&&(s3==s4)){
        flag++;
    }
    cout << flag << endl;
   }

   return 0;

}

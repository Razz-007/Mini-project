// question 8: Problem Title: Riya’s Secret Word
#include <iostream>

using namespace std;

int main() {
string r="";
string w;
cout<<"enter your word: ";
cin>>w;
for(int i= w.length()-1;i>=0;i--){
r+=w[i];
}
if(w==r){
    cout<<"Perfect secret World";
}else{
    cout<<"Not a secret world";
}
return 0;
}

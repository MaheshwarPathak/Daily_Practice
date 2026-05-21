#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int pos=s1.find(s2);
    bool found=false;
    while(pos!=string::npos){
    cout<<pos;
    if(s1.find(s2,pos+1)!=string::npos){
    cout<<" ";
}
     found=true;
   pos=s1.find(s2,pos+1);
}
	if(found==false){
   cout<<"No Match";
}
}
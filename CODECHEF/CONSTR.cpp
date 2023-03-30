#include <iostream>
using namespace std;

void con_str(){
    int n;
    string s;
    cin>>n>>s;
    string ans ="";
    int count = 0;
    for(int i=0;i<n;i++){
       int j =i;
       while(j!=n && s[j]==s[i])
       {
           j++;
           count++;
       }
       ans+=s[i];
       
       
       if(count&1)
       i=j-1;
       
       count =0;
        
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        con_str();
    }
 // your code goes here
 return 0;
}
//sum of subarray equal to target
#include<iostream>
using namespace std;
int main(){
    int n;
    int s;
    cin>>n;
    cin>>s;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int st=-1;
    int en=-1;
    int cursum=0;
    int i=0,j=0;
    while(j<n && cursum+a[j]<=s){
        cursum += a[j];
        j++;
    }
    if(cursum==s){
        cout<<i+1<<""<<j<<endl;
        return 0;
    }
    while(j<n){
        cursum += a[j];
        while(cursum>s){
            cursum -= a[i];
            i++;
        }
        if (cursum==s){
            st=i+1;
            en=j+1;
            break;
        }
       j++; 
    }
    cout<<st<<""<<en<<endl;
}

//max till I
#include<iostream>
using namespace std;
int main(){
    int mx = -199999999;
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i<n;i++){
        cin>>A[i];
    }
     for (int i = 0; i<n;i++){
        mx =  max( mx ,A[i]);
        cout<<mx<<endl;
    }
    return 0;

}
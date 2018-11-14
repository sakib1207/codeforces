#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cin>>a;
    int sum=0;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        sum+=b;
    }
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        sum-=b;
    }
    if(sum<0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}

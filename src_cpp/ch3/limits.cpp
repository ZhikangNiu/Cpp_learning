#include<iostream>
#include<climits>
int main(){
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    int m(32);
    cout<<"max value"<<endl;
    cout<<n_int<<endl;
    cout<<n_short<<endl;
    cout<<m<<endl;    
    cout<<"int is "<<sizeof(int)<<"bytes"<<endl;
    cout<<"short is "<<sizeof(short)<<"bytes"<<endl;
    
}
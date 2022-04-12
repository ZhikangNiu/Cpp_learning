# include<iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] = {3,2,1};

    double * pw = wages;
    short * ps = &stacks[0];
    cout<<pw<<endl;
    cout<<&wages[0]<<endl;
    pw = pw+1; 
    cout<<pw<<endl;
    cout<<&wages[1]<<endl;
    // 加的是位长
    cout<<ps<<endl;
    ps = ps+1;
    cout<<ps<<endl;
    cout<<&stacks[1]<<endl;
    return 0;
}

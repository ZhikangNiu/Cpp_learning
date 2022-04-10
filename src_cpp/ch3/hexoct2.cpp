#include<iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
 // using namespace std
    int cheat = 42;
    int weight = 0x43;
    int inseam = 044;
    cout<<dec;
    cout<<cheat<<endl;
    cout<<hex;
    // 以十六进制显示
    cout<<weight<<endl;
    cout<<oct;
    // 以八进制展示
    cout<<inseam<<endl;
    cout.put('m');
    return 0;
}

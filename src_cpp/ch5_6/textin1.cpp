#include<iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    int count = 0;
    cin>>ch;
    while (ch != '#')
    {
        cout<<ch;
        ++count;
        cin>>ch;
    }
        
    return 0;
}

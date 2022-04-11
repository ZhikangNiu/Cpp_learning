# include<iostream>
#include<string>
#include<cstring>

int main(int argc, char const *argv[])
{
    using namespace std;
    char charr[20];
    string str;
    cout<<"len of char before input: "
        <<strlen(charr)<<endl;
    cout<<"len of str before input: "
        <<str.size()<<endl;
    cin.getline(charr,20);
    cout<<"You entered in char: "<<charr<<endl;
    getline(cin,str);
    cout<<"You entered in str: "<<str<<endl;
    return 0;
}

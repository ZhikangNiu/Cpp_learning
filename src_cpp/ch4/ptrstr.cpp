#include<iostream>
# include<cstring>
int main(int argc, char const *argv[])
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;
    int * pm = nullptr;
    cout<<animal<<" and ";
    cout<<bird<<" \n";
    cout <<pm<<endl;
    //cout <<ps<<endl;
    cout<<" Enter a kind of animals: ";
    cin>>animal;
    ps =animal;
    cout<<ps<<endl;
    cout<<animal <<" at "<<(int *)animal <<endl;
    cout<<ps <<" at "<<(int *)ps <<endl;
    ps = new char[strlen(animal)+1];
    strcpy(ps,animal);
    cout<<animal <<" at "<<(int *)animal <<endl;
    cout<<ps <<" at "<<(int *)ps <<endl;
    return 0;
}

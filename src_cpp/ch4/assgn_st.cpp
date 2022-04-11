#include<iostream>

using namespace std;

struct inflatable{
    string name;
    float volume=4;
    double price;
};
int main(int argc, char const *argv[])
{  
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = {
        "Audacious Arthur",
    };
    pal.price = 12.11;
    cout<<pal.volume<<endl;
    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pal.name<<endl;
    cout << "You can have both for $";
    cout<<guest.price + pal.price <<endl;
    return 0;
}

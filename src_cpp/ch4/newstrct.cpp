#include<iostream>
#include<string>
struct inflatable
    {
      char name[20];
      float volume;
      double price;      
};

int main(int argc, char const *argv[])
{
    using namespace std;
    inflatable * ps = new inflatable; 
    cout<<"Enter name of inflatable item: " ;
    
    cin.get(ps->name,20);  
    cout<<(*ps).name<<endl;
    cout<<"Enter volume: ";
    cin >>(*ps).volume;
    cout<<"Enter price: ";
    cin>>ps->price;
    cout<<"name: " 
        <<(*ps).name<<endl;
    cout<<"Price: "<<ps->price<<endl;
    delete ps;
    return 0;
}

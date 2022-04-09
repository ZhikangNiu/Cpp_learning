/*
    my first cpp code
    2022.4.8
*/
# include<iostream>
using namespace std;

void simon(int);

int main(){
    int m;
    simon(3);
    cin>>m;
    cout<<m<<endl;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
    return 0;
}

void simon(int n){
    cout<<"simon says touch your toes "
        << n
        << endl;
}
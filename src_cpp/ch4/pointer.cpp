#include<iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    int update = 6;
    int* m_update = nullptr;
    cout<<m_update<<endl;
    int * p_updates;
    m_update =&update; 
    p_updates = &update;
    cout<<update<<endl;
    cout<<&update<<endl;
    cout<<m_update<<endl;
    cout<<*m_update<<endl;
    cout<<p_updates<<endl;
    cout<<*p_updates<<endl;
    return 0;
}

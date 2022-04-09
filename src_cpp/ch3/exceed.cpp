#include<iostream>
#include<climits>

int main(int argc, char const *argv[])
{   
    using namespace std; // namespace std
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout <<"Sam has"<<sam<<" dollars and Sue has"<<sue<<endl;
    sam = sam+1;
    sue = sue+1;
    return 0;
}
 
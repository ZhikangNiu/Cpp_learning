# include <iostream>
# include<string>
int main(int argc, char const *argv[])
{
    using namespace std;
    string s1 = "penguin";
    string s2,s3;
    cout << "s1: "<<s1<<",s2: "<<s2<<endl;
    cout << "You can assign a C-style object to another :s2 = s1\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout<<"s2: "<<s2<<endl;
    s1+=s2;
    cout<<"s1 = :"<< s1<<endl;
    s2 +=" for a day";
    cout<<"s2: "<<s2<<endl;

    return 0;
}

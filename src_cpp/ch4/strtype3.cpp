# include<iostream>
# include<string>
# include<cstring>
/*
    strcpy(char1,char2); 将char2复制到char1
    strcat(char1,char2); 在char1后面添加char2
*/

int main(int argc, char const *argv[])
{
    using namespace std;
    char char1[20];    
    char char2[20] = "jaguar";
    string str1;    
    string str2 = "pather";
    str1 = str2;
    strcpy(char1,char2);
    cout<<char1<<endl;
    cout<<str1<<endl;
    strcat(char1,char2);
    cout<<char1<<endl;
    int len1 = str1.size();    
    int len2 = strlen(char2);
    cout<< "len1: "<<len1<<"len2: "<<len2<<endl; 

    return 0;
        
}

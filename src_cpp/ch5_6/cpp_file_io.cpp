#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    // 以写模式打开文件
    ofstream outFile;
    outFile.open("fish.txt");
    
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";    
    char data[50];
    cin.getline(data,50);

    // 像文件写入用户输入的数据
    outFile << data << endl;

    cout<<"Enter your age: ";
    cin>>data;
    cin.ignore();
    // istream &ignore( streamsize num=1, int delim=EOF );
    //跳过输入流中n个字符，或在遇到指定的终止字符时提前结束（此时跳过包括终止字符在内的若干字符）。
    // 再次向文件写入用户输入的数据
    outFile << data << endl;
    // 关闭打开的文件
    outFile.close();

    // 以读的模式打开文件
    ifstream infile;
    infile.open("fish.txt");
    cout << "Reading from the file" << endl; 
    infile>>data;

    // 在屏幕上写入数据
    cout << data << endl;
    infile >> data; 
    cout << data << endl; 
 
    // 关闭打开的文件
    infile.close();
    
    return 0;
}

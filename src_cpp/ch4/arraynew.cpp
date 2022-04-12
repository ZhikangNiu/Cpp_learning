# include<iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
       /* code */
    double *p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout<<"p3[1] is "<<p3[1]<<endl;
    p3 = p3+1;
    // 修改了第一位元素的位置
    cout<<"p3[1] is "<<p3[1]<<endl;
    return 0;
}

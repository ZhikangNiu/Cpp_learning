#include<iostream>
int main(int argc, char const *argv[])
{
    /* code */
    using namespace std;
    double price[5] = {4.99,10.99,6.87,7.90,8.49};
    for (double x: price)
    {
        cout << x <<endl;
           /* code */
    }
    for (double &x :price)
    {
        x = x*0.80;
        /* code */
    }
    for (double x: price)
    {
        cout << x <<endl;
           /* code */
    } 
    return 0;
}

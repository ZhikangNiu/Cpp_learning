# string类
为了优化C-style的字符串，C-style的copy strcpy()，append操作 strcat()
C-style的字符串出现字符串大于开辟空间的情况，string类自动调整大小，C-style出现了更加安全的strncat()和strncpy()
# string类的IO
cin和运算符>>来将输入存储到string类中，使用cout和运算符<<来显示对象.
但是这些情况仅仅适用于储存的是一个单词时，不适合存储一行。为了解决这种情况，我们使用了cin.getline()
# 结构体
## 结构体的定义
与C语言类似，结构的定义：
```cpp
struct inflatable{
    char name[20];
    float volume;
    double price;
}
```
创建结构变量可以省略关键字struct，不同于C语言
```cpp
inflatable hat;
inflatable woopie_cushion;
inflatable mainframe;
```
结构变量的声明可以放在外部也可放在内部，外部可以被后面的任何函数使用，内部智能在所定义的函数内使用。
## 结构的初始化
结构的初始化可以使用大括号初始化的方式来进行，如下：
```cpp
    struct inflatable{
    char name[20];
    float volume;
    double price;
    };

    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };
    // 或者写成一行的形式
    inflatab pal = {"ABCJHKLJK",3.12,2111.2};
```
除此之外，在结构体的定义中我们同样可以使用string类作为成员，前提是我们的结构定义空间能访问std
```cpp

    struct inflatable{
    std::string name[20];
    float volume;
    double price;
    };


```
# 共用体
共用体是一种数据格式，存储不同类型，但是只能同时存储其中的一种类型
结构可以同时存储int，long，double，共用体只能存储int，long，double中的一种
```cpp
union one4all{
    int int_val;
    long long_val;
    double double_val;
}
```
我们可以使用one4all变量来存储int，long，double，但是必须在不同时间，共用体的长度为成员的最大长度
# 枚举
enum工具提供了一种创建符号常量1的方式，这种方式可以代替const。它还允许定义新类型，
```cpp
enum spectrum {red,orange,yellow,green,violet,indigo};
```
# 指针
两个运算符`&`和`*`
指针声明必须指明指向的数据类型，根据指定类型而确定指针的类型，int*是指向int的指针
指针空间的分配
在C语言中，动态分配内存用 malloc() 函数，释放内存用 free() 函数。如下所示：
```c
int *p = (int*) malloc( sizeof(int) * 10 );  //分配10个int型的内存空间
free(p);  //释放内存
```
在C++中，这两个函数仍然可以使用，但是C++又新增了两个关键字，new 和 delete：new 用来动态分配内存，delete 用来释放内存。
```cpp
int *p = new int;  //分配1个int型的内存空间
delete p;  //释放内存

int *m = new int[10]; //分配10个int型的内存空间
delete[] p;
```
动态数组指向的第一个元素的地址复制给了m。
如何访问其中的元素：
使用m[0]访问第一个元素，第二个元素就是m[1]，不需要使用*m[0] 对数组进行加减操作其实质是对第一位元素的加减。C++将数组名解释为地址
## 给指针的赋值
应该将内存的地址赋给指针。可以对变量名应用&运算符，来获得被命名的内存的地址。new 运算符返回的是未命名的内存的地址。
```cpp
double * pn;
double * pa;
char * pc;

double bubble = 3.2;
pn = &bubble;
pc = new char;
pa = new double[30];
```
使用数组声明来创建数组时，将采用静态联编，即就是数组的长度是在编译时就设置了。使用new[] 运算符创建数组时，将采用的时动态联编，运行时为数组分配空间，使用完后，应该使用delete释放器占用的内存。
```cpp
int size;
cin>>size;
int * pz = new int [size];

...

delete[] pz;
```

## 字符串和指针
一般地，如果给cout提供一个指针，他将打印地址，但如果指针的类型是char*,则会显示指向的字符串或者一堆乱码。因此如果要显示字符串的地址，则必须将这种指针转换为另一种指针类型，如int*

strcpy并不是一个安全的做法，更加安全的做法是使用strncpy，该函数接受三个参数，第三个参数是-要复制的最大字符数。

## 使用new创建动态结构
数组的创建要使用运行时创建代替编译时创建！对于结构体也是如此，我们也可以使用new运算符来完成
```cpp
inflatable * ps = new inflatable;
```
访问的话就是使用->来访问成员变量

- 静态存储：
    在函数外面使用它
    在声明变量时使用关键字static

- 动态存储
    new和delete提供了一种比自动分配和静态变量更加灵活的方法，他们管理了一个内存池，被在C++中被称为自由存储空间或堆

## 模板类vector
类似string是一种动态数组，使用new创建动态数组的替代品，使用时需要注意以下几点：
- 要使用vector，必须包含头文件vector
- vector包含在名称空间std中，使用using

```cpp
# include<vector>
···
using namespace std;
vector<int> vi; //创建了一个int的数
vector<double> vd(n);//创建了一个由n个double组成的数组
```
vector的效率较低，如果需要使用长度固定的数组，使用数组更方便。但是不安全，因此为了安全可以使用array来创建数组。需要包含头文件array。
```cpp
#include<array>
···
using namespace std;
array<int,5> ai;
array<double,4> ad = {1.2,2.1,3.43,4.3};                                                 
```
# c++程序的结构
```cpp
# include<iostream>  //include 预处理  iostream 当我们进行输入和输出是需要应用

int main(){
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
    return 0;
}
```
1. 跟c语言的结构基本相同，`using namespace std;`放在括号外面和里面都可以。
2. 头文件不同于c语言，没有后缀.h，一般是加上了c
3. `using namespace std;`使用了using编译指令，名称空间支持是c++的一项特性。有助于我们组织程序，比如多个封装好的库存在重名的函数名称时，我们需要指明使用哪一个库。比如Microflop和Piscine两个公司发行的包，均含有wanda()的函数，我们在使用是就有两种方式来使用特定库。
```cpp
Microflop::wanda();

using namespance Microflop;
wanda()
```
但是在大型项目中，我们只使所需的名称可用就可
```cpp
using namespace std::cout;
using namespace std::endl;
using namespace std::cin;
```
==个人感受==：

1. include + using namespace 类似于Python中的 import操作
比如`using namespace std;` 就类似 `from std import *` ?
2. 变量命名和基本c++语句与c类似
3. `using namespace std;`放在外面使得所有定义的函数都可以调用
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
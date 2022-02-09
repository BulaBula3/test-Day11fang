#include <iostream>
using namespace std;

int main()
{
    //定义指针
    int a = 10;
    //指针定义的语法：数据类型 * 指针变量名；
    int* p1;
    //让指针记录变量a的地址
    p1 = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p1 << endl;

    //2、使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p1 = 1000;//解引用
    cout << "a =" << a << endl;
    cout << "* p =" << *p1 << endl;

    int a1 = 10;
    int* p = &a1;
    //在32位操作系统下，指针是占4个字节空间大小
    //在64位操作系统下，指针是占8个字节空间大小
    cout << "sizeof(int *)=" << sizeof(p) << endl;
    cout << "sizeof(int *)=" << sizeof(float*) << endl;
    cout << "sizeof(int *)=" << sizeof(double*) << endl;
    cout << "sizeof(int *)=" << sizeof(char*) << endl;

    system("pause");

    return 0;
}

   
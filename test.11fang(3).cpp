#include <iostream>
using namespace std;

int main()
{
    //����ָ��
    int a = 10;
    //ָ�붨����﷨���������� * ָ���������
    int* p1;
    //��ָ���¼����a�ĵ�ַ
    p1 = &a;
    cout << "a�ĵ�ַΪ��" << &a << endl;
    cout << "ָ��pΪ��" << p1 << endl;

    //2��ʹ��ָ��
    //����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
    //ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
    *p1 = 1000;//������
    cout << "a =" << a << endl;
    cout << "* p =" << *p1 << endl;

    int a1 = 10;
    int* p = &a1;
    //��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С
    //��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С
    cout << "sizeof(int *)=" << sizeof(p) << endl;
    cout << "sizeof(int *)=" << sizeof(float*) << endl;
    cout << "sizeof(int *)=" << sizeof(double*) << endl;
    cout << "sizeof(int *)=" << sizeof(char*) << endl;

    system("pause");

    return 0;
}

   
// 数组和向量
// 数据类型 数组名 [元素个数]

// int numbers[5]{1,2,3,4,5};

// 数组初始化
// int numbers[5]{1,2,3,4,5};
// int numbers[]={1,2,3,4,5};
// int numbers[5]{0};
// int numbers[5]={};
// 注意 第一个元素是从下标[0]开始的，以此类推 numbers[0]存放的是1
// char hello[]{'h','e','l','l','o', 0};
// char hello[20]="hello";
// char hello[] = "Hello";

//数组比较不能用== 因为这样比得是内存地址
// 用strcmp(str1,str2)==0;表示相等

//string可以用str1==str2方式比较
// string str1("hello");
// string str2("hello");

//向量 vector 这是STL中的模板类
#include <vector>
#include <iostream>
using namespace std;

int main () {
    vector<float> v1{1.0,2.0,3.0};
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    for (auto v : v1)
    {
        cout << v << endl;
    }
    
    return 0;
}


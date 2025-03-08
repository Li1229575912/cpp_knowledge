// 引用和指针
#include <vector>
#include <memory>
//引用运算符 &
int a = 3;
int& b = a; // 此时b和a使用的是同一块内存区域
b = b + 1; // 如果给b加一那么a的值也会跟着改变

//一般情况下用在参数传递
void swap(int& a, int& b);
// for循环使用引用将数组中每个元素加了1,并更新了原数组
int number[]{1,2,3,4,5};
for (auto& n : number)
{
    n += 1;
    cout << n;
}

// 常量引用 const int& b
const int& b = a; //只读的引用，不能修改b的值，比如b++会报错
float calculate(const vector<float>& values); //只读的参数，不会改变vector本身的值

//指针和地址

char* p; ////内存地址 p
char as = 'A';
char* p1 = &as;
*p1 = 'B'; // *是解引用操作符 这里将p1h地址中的A改为了B

int number[]{1,2,3,4,5}
int* p2 = number;
p2++; // 指针每加一指向下一个元素地址（每个数据类型占用空间是固定的，比如int元素每个占用4字节）
cout << *p2;
cout << *(p2+3);

// new 和 delete运算符
//new是动态分配内存，动态分配的内存在堆存储，定义的变量在栈存储
//变量在函数退出后无效，而动态分配的内存在函数退出后仍然有效 直到delete释放
char* p1 = new char;
int* p2 = new int(2);
char* p3 = new char[5];
char* p4  = new char[5]{'a','b','c'};

delete p1;
delete p2;
delete []p3; // 删除new数组用【】
delete []p4;

//常量指针（指向常量的指针，指针可以指向其他地方，但是常量的内容不可以更改）
const int n = 5;// 常量 的指针必须使用常量指针
const int* pn = &n; // 不能改变pn，也不能改变n

// 指针常量(指针本身是常量，不能指向其他地址，但是内容是可以更改的)
int aa[]{1,2,3,4,5};
int* const ps = aa; // 不能允许修改pshe指针本身，但可以修改aa的值
ps[2] = 100;
*ps = 101;

shared_ptr<int> p_int = new int(2);
shared_ptr<int> p_int(new int(2));
cout << *p_int;
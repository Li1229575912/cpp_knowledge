// 变量和类型
/*
变量相当于快递柜子的柜门上的编号（例如A05），在计算机中，这个柜子就是内存，内存的基本单位是字节
，每8个比特位为1字节（这相当于内存中最小的柜子，比特位只能存放0或1），每个变量代表内存中的一个存储单元
int a = 1, b = 2, result; result = a + b; 变量名 a b result 也称为标识符（identifier）  
*/

// 标识符（identifier）规则
/*
除了变量名外 类 函数 名称也是标识符
可以以字母 下划线开头，但不能以数字开头 不能有空格
c++ 11 标准中 也可以用中文定义变量名，例如 int 数字1 = 1；
c++ 关键字 bool auto struct 不能作为标识符
标识符区分大小写 result 与 Result三是不同的
*/

// 变量的声明与定义
// 变量类型 标识符；
#include <string>
bool a; // 1字节
int a1; // 4字节
unsigned int a2; //无符号 大于0
double b;
char c;

int 数字1 = 1;
int a3 = 1;
// 通过sizeof()来获取变量占用字节大小
int n = sizeof(a1);
// 变量初始化 或者说给变量赋值，可以用以下写法
float A = 2.0; //通用的C语言初始化方式
float B(2.0); //一般是构造初始化方式（类对象的初始化）
float C{2.0}; // 数组 结构体初始化
float D={2.0};// 数组 结构体初始化

//常量（constant）：具有固定值的表达式
// 字面常量 与 定义常量
// 1 2 3 “A” true false 等 确定的值是字面常量
#define PI 3.1415926 // 我们可以用 define 来定义常量
const int max = 18; // 也可以用 const 关键字来声明常量，它的值是不能改变的
const char* hello = "hello"; //字符串常量
char hello2[] = "hello";
std::string hello3 = "hello";
//注意区分字符串和字符
const char* str = "A"; //这是一个字符串
const char str1 = 'A'; //这是一个字符
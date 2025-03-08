// 函数
/*
返回值类型 函数名（参数类型 参数名1, 参数类型 参数名2, ...）//函数头
{ //函数体
    //代码
    return 返回值;
}
*/

// 函数声明 一般写在头文件中
float multiply(float,float); // 函数声明中参数名可以省略
float multiply1(float a,float b);

// 函数定义（参数名是函数范围内的变量）
float multiply(float a, float b)
{
    return a*b;
}

int main() 
{
    // 函数调用 Call
    float l = multiply(2.0, 3.0);
    
    return 0;
}

// float a, float b 中的a b 为形参 parameter
// multiply(2.0, 3.0) 函数调用传入的 2.0 3.0 是实参 argument

// 参数传递方式： 按值传递 按引用传递

int inc(int a);
int inc(int &a); //按引用传递会修改a传入变量的值，而返回值可以当作状态码返回执行成功或失败

void hello(void); //函数可以没有返回值，也可以没有参数

int demo(int a = 10, int b = 20);// 参数可以设置默认值，默认值参数需要从右向左连续定义，可以空前面不能空后面

// 函数的重载（函数名字一样 参数数量或者类型不同）overload
float multiply(float a , float b);
float multiply(float a , float b, float c);
int multiply(int a ,int b);
// 上面三个就是multiply的重载函数，编译器会根据调用传入的类型自动选择对应的重载函数

//不能重载的情况：
/*
1. 参数相同但返回值类型不同 
比如 float multiply(float a , float b)与 int multiply(float a , float b)
2. 第一个函数3个参数有设置默认值，第二个a函数只有2个参数，编译器无法判断
float multiply(float a , float b， float c = 0.0) 与 float multiply(float a , float b)
*/

// 内联函数 inline
inline int add(int a, int b) {
    return a+b;
}
// 内联函数编译器会调用时直接把代码替换，类似define
// 调用内联函数没有入栈出栈操作，速度快但内存开销大，一般用于短小的代码
/* 以下情况不能用内联函数 */
// 函数存在复杂控制语句 比如循环 switch
// 函数存在静态变量
// 函数存在递归调用（就是自己调用自己，注意递归死循环）

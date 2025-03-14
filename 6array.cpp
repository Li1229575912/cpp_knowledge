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

int main1 () {
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

// 用户输入一句话，统计有多少字母
int main2() {
    const int maxsize = 255;
    char sentence[maxsize];
    cout<<"请输入一句话：";
    cin.getline(sentence, maxsize); // 使用cin.getline()来获得整行输入
    
    char c;
    int i = 0,count = 0;
    while (c=sentence[i])
    {
        if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            count++;
        }
        ++i;
    }
    cout << "共有：" << count;
    return 0;
}

//(冒泡排序) 对一个整数序列按照从小到大顺序排列
//冒泡排序就是按照顺序两两比对，大的数移到后面，每过一轮最大的数在最后一位
int main(){
    int num;
    vector<int> numbers;
    while (cin >> num)
    {
        /* 使用verctor 的push_back 函数将用户输入的数存放到向量中 */
        numbers.push_back(num);
    }
    
    for (int i = numbers.size(); i > 1 ; i--)
    {
        for (int k = 0; k < i - 1; k++)
        {
            if (numbers[k] > numbers[k+1])
            {
                int tmp = numbers[k];
                numbers[k] = numbers[k+1];
                numbers[k+1] = tmp;
            }
        }
    }
    for (auto number : numbers)
    {
        cout << number << " ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int flag=1;//程序结束的标志
class jisuanqi
{
private:
    double answer;
public:
    jisuanqi(){}
};
class jjcc:public jisuanqi
{
private:
    double a,b;
public:
    jjcc(double a1,double b1)
    {
        a=a1;
        b=b1;
    }
    double jia()
    {
        return a+b;
    }
    double jian()
    {
        return a-b;
    }
    double cheng()
    {
        return a*b;
    }
    double chu()
    {
        return a/b;
    }
};
class pingfang:public jisuanqi
{
private:
    double a;
public:
    pingfang(double a1)
    {
        a=a1;
    }
    double mi2()
    {
        return a*a;
    }
};
class kaifang:public jisuanqi
{
private:
    double a;
public:
    kaifang(double a1)
    {
        a=a1;
    }
    double kai2()
    {
        return sqrt(a);
    }
};
class Sanjiaohanshu:public jisuanqi
{
private:
    double a;
public:
    Sanjiaohanshu(double a1)
    {
        a=a1;
    }
    double sin_()
    {
        double b=a/180*3.14;
        return sin(b);
    }
    double cos_()
    {
        double b=a/180*3.14;
        return cos(b);
    }
    double tan_()
    {
        double b=a/180*3.14;
        return tan(b);
    }
};
class jinzhizhuanhuan:public jisuanqi
{
private:
    int a;
public:
    jinzhizhuanhuan(int a1)
    {
        a=a1;
    }
    void erjinzhi()
    {
            cout << "该数的2进制为: " << bitset<8>(a) << endl;
    }
    void bajinzhi()
    {
        cout << "该数的8进制为:" << std::oct <<a<< endl;
    }
    void shijinzhi()
    {
        cout << "该数的10进制为:" << std::dec << a << endl;
    }
    void shiliujinzhi()
    {
        cout << "该数的16进制为:" << std::hex <<a<< endl;
    }
};
void menu()
{
    printf("————欢迎进入简易计算器程序————\n");
    printf("1.  计算加减乘除\n");
    printf("2.  计算三角函数\n");
    printf("3.  平方运算\n");
    printf("4.  开根号运算\n");
    printf("5.  2或8或10或16进制转换\n");
    printf("0.  结束本程序\n");
    printf("请输入序号进入不同功能：\n");
}
void jisuan()
{
    int n;
    cin>>n;
    if(n==0)
    {
        flag=0;
        return;
    }
    if(n==1)
    {
        cout<<"请输入需要运算的两个数"<<endl;
        double a1,b1;
        cin>>a1>>b1;
        jjcc x1(a1,b1);
        char c;
        cout<<"请输入想要进行的运算,请填写+或-或*或/"<<endl;
        cin>>c;
        if(c=='+')
        {
            double answer=x1.jia();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='-')
        {
            double answer=x1.jian();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='*')
        {
            double answer=x1.cheng();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='/')
        {
            double answer=x1.chu();
            cout<<"结果为："<<answer<<endl;
        }
        return ;
    }
    if(n==2)
    {
       double a1;
       cout<<"请输入需要转换的角度"<<endl;
       cout<<"如果输入的角度为90的倍数，则该角度不能进行tan运算"<<endl;
       cin>>a1;
       Sanjiaohanshu x2(a1);
       cout<<"请输入需要进行的三角函数转化"<<endl;
       string s;
       string s1="sin",s2="cos",s3="tan";
       cin>>s;
       if(s==s1)
       {
           double answer=x2.sin_();
           cout<<"结果为："<<answer<<endl;
       }
       if(s==s2)
       {
           double answer=x2.cos_();
           cout<<"结果为："<<answer<<endl;
       }
       if(s==s3)
       {
           double answer=x2.tan_();
           cout<<"结果为："<<answer<<endl;
       }
       return ;
    }
    if(n==3)
    {
        double a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        pingfang x3(a1);
        double answer=x3.mi2();
        cout<<"结果为："<<answer<<endl;
        return ;
    }
    if(n==4)
    {
        double a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        kaifang x4(a1);
        double answer=x4.kai2();
        cout<<"结果为："<<answer<<endl;
        return ;
    }
    if(n==5)
    {
        int a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        jinzhizhuanhuan x5(a1);
        cout<<"请选择需要进行的进制转换"<<endl;
        cout<<"请输入2或8或10或16"<<endl;
        int a2;
        cin>>a2;
        if(a2==2)
            x5.erjinzhi();
        if(a2==8)
            x5.bajinzhi();
        if(a2==10)
            x5.shijinzhi();
        if(a2==16)
            x5.shiliujinzhi();
        return ;
    }
}
int main()
{
    while(flag)
    {
        menu();
        jisuan();
    }
}

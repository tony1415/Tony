#include <bits/stdc++.h>

using namespace std;
void hanshu0();
void hanshu1();
void hanshu2();
void hanshu3();
void hanshu4();
void hanshu5();
void hanshu6();
void hanshu7();
class calculator
{
protected:
    double a,b;
public:
    calculator()
    {
        ;
    }
    calculator(double x,double y)
    {
        a= x;
        b= y;
    }
    virtual double xjj(){return (a+b);}
};
class jian: public calculator
{
public:
    jian()
    {
        ;
    }
    jian(double x,double y)
    {
        a= x;
        b= y;
    }
    virtual double xjj(){return (a-b);}
};
class cheng:public calculator
{
public:
    cheng()
    {
        ;
    }
    cheng(double x,double y)
    {
        a= x;
        b= y;
    }
    virtual double xjj(){return a*b;};
};
class chu:public calculator
{
public:
    chu()
    {
        ;
    }
    chu(double x,double y)
    {
        a= x;
        b= y;
    }
    virtual double xjj(){return a/b;};
};
class sinn:public calculator
{
public:
    sinn()
    {
        ;
    }
    sinn(double x)
    {
        a= x;
    }
    virtual double xjj(){return sin(a);};
};
class coss:public calculator
{
public:
    coss()
    {
        ;
    }
    coss(double x)
    {
        a= x;
    }
    virtual double xjj(){return cos(a);};
};
class jinzhi:public calculator
{
    int x;
public:
    jinzhi()
    {
        ;
    }
    jinzhi(int y)
    {
        a= x;
    }
    virtual int xjjj(){return a;};
};

void hanshu0()
{
    cout<<"***********************************************************"<<endl;
    cout<<"*                     calculator                          *"<<endl;
    cout<<"* 功能：'+' '-' '*' '/' 'sin' 'cos' ' 进制转换'           *"<<endl;
    cout<<"*'+'----------------- 1                                   *"<<endl;
    cout<<"*'-'----------------- 2                                   *"<<endl;
    cout<<"*'*'----------------- 3                                   *"<<endl;
    cout<<"*'/'----------------- 4                                   *"<<endl;
    cout<<"*'sin'--------------- 5                                   *"<<endl;
    cout<<"*'cos'--------------- 6                                   *"<<endl;
    cout<<"*‘进制转换’---------- 7                                 *"<<endl;
    cout<<"***********************************************************"<<endl<<endl;
    cout<<"请输入对应功能的数字（输入0结束）：";
    int n;
    cin>>n;
    if(n== 0)
        exit(0);
    if(n== 1){hanshu1();}
    if(n== 2){hanshu2();}
    if(n== 3){hanshu3();}
    if(n== 4){hanshu4();}
    if(n== 5){hanshu5();}
    if(n== 6){hanshu6();}
    if(n== 7){hanshu7();}
}
void hanshu1()
{
    int n;
    double add1,add2,result;
    cout<<"请输入两个加数：";
    cin>>add1>>add2;
    calculator add(add1,add2);
    result= add.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu2()
{
    int n;
    double j1,j2,result;
    cout<<"请输入被减数："<<endl;
    cin>>j1;
    cout<<"请输入减数: "<<endl;
    cin>>j2;
    jian j(j1,j2);
    result= j.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu3()
{
    int n;
    double c1,c2,result;
    cout<<"请输入两个乘数："<<endl;
    cin>>c1>>c2;
    cheng c(c1,c2);
    result= c.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu4()
{
    int n;
    double c1,c2,result;
    cout<<"请输入被除数：";
    cin>>c1;
    cout<<"请输入除数：";
    cin>>c2;
    chu ch(c1,c2);
    result= ch.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu5()
{
    int n;
    double s,result;
    cout<<"请输入需要转换的角度：";
    cin>>s;
    sinn si(s);
    result= si.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu6()
{
    int n;
    double c,result;
    cout<<"请输入需要转换的角度：";
    cin>>c;
    coss co(c);
    result= co.xjj();
    cout<<"结果："<<result<<endl;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}
void hanshu7()
{
    int n;
    int ji,result;
    cout<<"请输入需要转换的数据：";
    cin>>ji;
    jinzhi jin(ji);
    result= jin.xjjj();
    cout<<"结果：";
    cout<<hex<<result;
    string str;
    cout<<"输入任意键继续（输入0结束）：";
    cin>>str;
    if(str== "0")
        exit(0);
    hanshu0();
}

int main()
{
    hanshu0();
}
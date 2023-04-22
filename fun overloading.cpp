//function over loading
#include<iostream>
using namespace std;
class ayush
{
    public:
    int x,y;
    char ch;
    ayush(int m,int n,char c)
    {
         x=m;
         y=n;
         ch=c;
    }
    void abc(int x,int y )
    {
        cout<<x+y<<endl;
    }
    void abc(double x,double y)
    {
        cout<<x-y<<endl;
    }
    void abc(char ch)
    {
      cout<<ch<<endl;
    }

};
int main()
{
    ayush jaggu(6,7,'j');
     jaggu.abc(7,6);
     jaggu.abc(4.5,5.5);
     jaggu.abc('j');
     return 0;
}

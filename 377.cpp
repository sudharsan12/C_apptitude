#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    static int r=0;

    if(n<=0)
    {
     cout<<r<<endl;
        return 1;
    }
    if(n>3)
    {

        int res;
        r=n;
        return fun(n-2)+r;
    }
    cout<<"out"<<r<<endl;
    return fun(n-1)+r;

}

int main()
{
    int n=10;

    printf("%d \n",fun(10));
}


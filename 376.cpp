#include<bits/stdc++.h>

using namespace std;
int fun(int i)
{

    cout<<i;

    return i++;
}
int main()
{
    int i=0;

    int num=fun(i++);
    cout<<num<<endl;

}

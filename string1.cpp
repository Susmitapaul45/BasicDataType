#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;
    char a,b;
    int strlen1,strlen2;
    cin>>str1;
    cin>>str2;
    strlen1=str1.size();
    strlen2=str2.size();
    cout<<strlen1;
    cout<<" "<<strlen2;
    str3=str1+str2;
    cout<<"\n"<<str3;
    b=str2[0];
    a=str1[0];
    str1[0]=b;
    str2[0]=a;
    cout<<"\n";
    cout<<str1;
    cout<<" "<<str2;
    return 0;


}

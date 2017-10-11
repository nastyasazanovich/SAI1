#include <iostream>

using namespace std;

int main()
{
    int a,b,result;
    char deistvie;
  cin>>a;
  cin>>deistvie;
  cin>>b;
  switch(deistvie)
 {
    case '+' :
    result=a+b;
    break;
    case '-' :
    result=a-b;
    break;
    case '*' :
    result=a*b;
    break;
    case '/' :
    result=a/b;
    break;
 }
  cout<<result<<endl;
    return 0;
}

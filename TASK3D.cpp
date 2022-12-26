#include <iostream>
#include <cmath>

int main()
{
float CH,x,num1,num2,num3,y;
num1 = 3;
num2 = 7;

std :: cout << "CH = ";
std :: cin >> CH;
std :: cout << "x = ";
std :: cin >> x;

y = num1/(num2*x);
if (CH < 8)
{
    y = 3/(7*x);
    std :: cout << "y = " << y;
}
else if(CH>7)
{
for(int i =7;i<CH;i = i +2)
{
    y = y + num1/(num2*x);
    num2 = num2 + 2;
    num1 = num1 + 2;
}
std :: cout << "y = " << y;
}
    return 0;
}

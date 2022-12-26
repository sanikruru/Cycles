#include <iostream>
#include <cmath>
int main()
{
    double y,min,max,val,x;
    std :: cout << "min = ";
    std :: cin >> min;
    std :: cout << "max = ";
    std :: cin >> max;
    std :: cout << "val = ";
    std :: cin >> val;
    x = min;
    for(; x < max; x = x + val)
    {
        y = sqrt(2+x*3)+72*x+tan((4*x+31)*M_PI/180);
        std :: cout << "x = " << x << "; y = " << y << std :: endl;
    }
    return 0;
}

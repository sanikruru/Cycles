#include <iostream>
#include <cmath>

int main()
{
    double x;
    int CH;
    int nfact = 1;
    int n = 1;
    double y = 0;
    std :: cout << "CH = ";
    std :: cin >> CH;
    std :: cout << "x = ";
    std :: cin >> x;
    for(;n<=CH;n=n+2)
    {
        nfact = 1;
        for(int i =1; i <= n; i++)
        {
            nfact = nfact*i;
        }

        y = y + pow(x,n)/nfact;

        if(n<=CH)
        {
            nfact = 1;
            n = n +2;
            for(int i =1; i <= n; i++)
            {
                nfact = nfact*i;
            }

             y = y - pow(x,n)/nfact;

        }
    }
    std :: cout << "y = " << y << std:: endl;

    return 0;
}

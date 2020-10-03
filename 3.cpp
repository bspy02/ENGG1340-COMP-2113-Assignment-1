#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double fact(double n)
{
  if (n == 1 || n == 0) return 1;
  return fact(n - 1) * n;
}

int main()
{
    double x,n;
    cin >> x >> n;
    cout<< "sin(x) by cmath: " << sin(x) << endl;
    cout<<"Taylor series approximation:" << endl;
    double sum = 0;
    for(int i = 0; i <= n; i++)
    {      
      sum += pow(-1,i) * (pow(x,2*i+1)) / fact(2*i+1);
      cout<<i<<" ";
      cout<< fixed << setprecision(15) << sum<<endl;
    }
}
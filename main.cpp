#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{ 
  float x,poly;
  float result = 0;
  int m;
  cin >> x >> m;
  for (int i=0; i<m+1; i++)
      cin >> poly; 
      result = result * x + poly;
	cout << fixed << setprecision(6) << result; 
	return 0; 
} 


/*
def horner(lis,x,n):
    if n == 0: return lis[0]
    return x* (horner(lis[:-1],x,n-1))+ lis[-1]
print(horner([-1,2,4,-6],3.289,3))
*/
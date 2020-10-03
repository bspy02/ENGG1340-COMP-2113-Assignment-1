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
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float horner(vector<float> poly,  float x, int n) 
{ 
  float back = poly.back();
	if(n == 0){return back;};
  poly.pop_back();
	return horner(poly,x,n-1)*x + back; 
} 

int main() 
{ 
  float x;
  int m;
  cin >> x >> m;

  vector<float> poly;
  for (int i=0; i<m+1; i++)
  {
    float input;    
    cin >> input;    
    poly.push_back(input);
  }
	cout << fixed << setprecision(6) << horner(poly, x, m); 
	return 0; 
} 
*/
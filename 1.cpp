#include <iostream>
#include <iomanip>
using namespace std;

float horner(float poly[], int n, float x) 
{ 
	float result = poly[0]; 

	for (int i=1; i<n; i++) 
		result = result*x + poly[i]; 

	return result; 
} 

int main() 
{ 
  float x;
  int m;
  cin >> x >> m;
  float poly[m+1];
  for (int i=0; i<m+1; i++)
      cin >> poly[i]; 
	cout << fixed << setprecision(6) << horner(poly, m+1, x); 
	return 0; 
} 

// практика.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "pch.h" 
#include <iostream> 
#include <math.h> 
using namespace std; 
int main() 
{ 
const int n = 3; 
float x[n], y[n]; 
setlocale(0, "Rus"); 

int i; 
cout Ђ "¬ведите x\n"; 
for (i = 0; i < n; i++) 
cin ї x[i]; 

cout Ђ "¬ведите y\n"; 
for (i = 0; i < n; i++) 
cin ї y[i]; 

float v = 0; 
for (i = 0; i < n; i++) 
v += x[i]; 

float h = 0; 
for (i = 0; i < n; i++) 
h += y[i]; 

float z[n]; 
for (i = 0; i < n; i++) 
{ 
z[i] = 0; 
z[i] = x[i] * y[i]; 
} 
float r = 0; 
for (i = 0; i < n; i++) 
r += z[i]; 

float g[n]; 
for (i = 0; i < n; i++) 
{ 
g[i] = 0; 
g[i] = x[i] * x[i];  
} 

float k = 0; 
for (i = 0; i < n; i++) 
k += w[i]; 
float a, b; 
a = (n*r - v * h) / (n*g - pow(v, 2)); 
cout Ђ "a = " Ђ a Ђ endl; 
b = (h Ц (a * v)) / n; 
cout Ђ "b = " Ђ b Ђ endl; 
system("pause"); 
return 0; 
} 


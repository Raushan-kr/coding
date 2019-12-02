#include<iostream>
using namespace std; 
  
 
int countSetBits(int n) 
{ 
    int count = 0; 
    while (n) 
    { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 
  
 
int FlippedCount(int a, int b) 
{ 
 
    return countSetBits(a^b); 
} 
  
 
int main() 
{ 
    int a = 07; 
    int b = 10; 
    cout << FlippedCount(a, b)<<endl; 
    return 0; 
} 

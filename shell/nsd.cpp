// C++ program to print all possible 
// substrings of a given string 

#include<bits/stdc++.h> 
using namespace std; 
void printSubStr( char* str, int low, int high ) 
{ 
    for( int i = low; i <= high; ++i ) 
        printf("%c", str[i]); 
} 

// Function to print all sub strings 
void subString(char str[], int n) 
{ 
	// Pick starting point 
	//for (int len = 1; len <= n; len++) 
	//{	 
		// Pick ending point 
		 
		
			// Print characters from current 
			// starting point to current ending 
			// point. 
						 
			for (int k = 0; k <= n; k++) 
			{
				if (str[k]==str[k+1])
				{
				cout << str[k];
				cout<<" ,";	
				}
				else
				{
					cout << str[k]; 
				}
			}
				
			
			cout << endl; 
		
	
}

int longestPalSubstr( char *str,int size ) 
{ 
    int n = strlen( str );  
  
    
    bool table[n][n]; 
    memset(table, 0, sizeof(table)); 
  
    
    int maxLength = 1; 
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
     
    int start = 0; 
    for (int i = 0; i < n-1; ++i) 
    { 
        if (str[i] == str[i+1]) 
        { 
            table[i][i+1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
  
     
    for (int k = 3; k <= n; ++k) 
    { 
        // Fix the starting index 
        for (int i = 0; i < n-k+1 ; ++i) 
        { 
            
            int j = i + k - 1; 
  
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (table[i+1][j-1] && str[i] == str[j]) 
            { 
                table[i][j] = true; 
  
                if (k > maxLength) 
                { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
  
    printf("Longest palindrome substring is: "); 
      printSubStr( str, start, start + maxLength - 1 );
  
    return maxLength;  
}  

 
int main() 
{ 
	char str[100] ; 
	gets(str);
	subString(str, strlen(str));
	longestPalSubstr(str,strlen(str) );
	return 0; 
} 


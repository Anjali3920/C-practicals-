#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

double seriesSum(int n) { 
   double sum=0; 
   for (int i =1; i <= n; i++) {  
      double term =1.0/ pow(i, 1); 
      if ( i% 2==0) {
         sum -= term; 
      } else { 
         sum += term;
      }
   } 
   return sum; 
} 
int main() {  
   int n; 
   cout << "Enter the number of terms: "; 
   cin>>n; 
   cout "Sum of series: <<< seriesSum(n) endl;  
   return 0; 
}


## output
![Image](https://github.com/user-attachments/assets/7f740462-eebb-4dc4-a8ac-f047eda0ac65)

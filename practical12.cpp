#include <iostream> 
#include <stdexcept> 
using namespace std; 

class PrimeException: public exception { 
public: 
   const char what() const throw() { 
       return "Number must be greater than 11"; 
   } 
}; 

// Function to check if a number is prime 
bool isPrime(int num) { 
   if (num < 2) 
      throw PrimeException(); 
   for(int i=2; i*i <=num; i++) { 
      if (num % i == 0) 
         return false; 
   }
   return true; 
}

int main() { 
   int num; 
   cout << "Enter a number: "; 
   cin >> num; 

   try { 
      if (isPrime(num)) 
      cout << num << " is a prime number.\n"; 
      else 
         cout << num << " is not a prime number.\n"; 
   } catch (PrimeException& e) { 
      cout << "Eггог: " <<e.what() << endl; 
   } 
   return 0;    
}

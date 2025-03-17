#include <iostream> 
#include <stdexcept> 
using namespace std; 

class MatrixException: public exception { 
public: 
   const char* what() const throw() { 
      return "Matrix dimensions are incompatible!"; 
   } 
}; 

void checkCompatibility(int rows1, int cols1, int rows2, int cols2) { 
   if (cols1 != rows2) throw MatrixException(); 
} 

int main() { 
   try { 
      checkCompatibility(2, 6, 4, 2); 
   } catch (MatrixException e) { 
      cout << "Eггог: <<<< e.what() << endl; 
   } 
   return 0; 
}   

#include <iostream> 
#include <fstream> 
using namespace std; 

void removeWhitespace(string inputFile, string outputFile) { 
   ifstream in(inputFile);  
   ofstream out (outputFile);  
   
   if (!in || !out) { 
      cout << "Егror opening files!" << endl; 
      return;  
   } 

   char ch; 
   while (in.get(ch)) { 
      if (!isspace(ch)) 
         out.put(ch);  
   } 
   
   cout << "File copied successfully without whitespaces.\n";  
   in.close();  
   out.close();  
} 

int main() { 
   string inputFile = "input.txt";  
   string outputFile = "output.txt"; 

   removeWhitespace (inputFile, outputFile); 
   return 0;  
}    

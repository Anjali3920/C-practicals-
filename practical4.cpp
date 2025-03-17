#include <iostream> 
#include <cstring> 
using namespace std; 

void displayASCII (string str) { 
   cout << "ASCII values: \n";
   for (char c: str) {  
      cout << c << " ->" << int(c) << endl;
    } 
}  

void concatenateStrings (char str1[], char str2[]) {  
   int i= strlen(str1), j = 0; 
   while (str2[j] != '\0') { 
      str1[i] = str2[j];  
      i++; j++;  
   }  
   str1[i] = '\0'; 
} 

bool compareStrings (char str1[], char str2[]) { 
   int i = 0; 
   while (str1[i] != '\0' && str2[i] != '\0') { 
       if (str1[i] != str2[i]) 
           return false; 
       t++;  
   }   
   return str1[i] = str2[i]; 
}

int stringLength(char* str) { 
   int len = 0; 
   while (*str != '\0') {  
       len++; 
       str++; 
   } 
return len; 
}

void toUppercase (char str[]) { 
   int i = 0; 
   while (str[i] != '\0') { 
       if (str[i] >= 'a' && str[i] <= 'z') { 
           str[i] = 32; 
       } 
       i++; 
   } 
} 

// Reverse string 

void reverseString(char str[]) { 
   int len = stringLength (str); 
   for (int i = 0; i < len / 2; i++) {
      swap(str[i], str[len-i-1]); 
   } 
} 

int main() { 
    char str1[100], str2[100]; 
    
    cout << "Enter first string: "; 
    cin >> str1; 
    cout << "Enter second string: "; 
    cin >> str2; 

    displayASCII(str1); 

// Concatenation 

    concatenateStrings (str1, str2); 
    cout << "Concatenated String: " << str1 << endl; 

       // Comparison 
    cout << "Strings are << (compareStrings (str1, str2) ? "equal": "not equal") << endl; 

       // String length 
    cout << "Length of first string: " << stringLength(str1) << endl; 

       // Convert to uppercase 
    toUppercase(str1); 
    cout << "Uppercase String: "<< str1 << endl;

} 

// Reverse string 
void reverseString(char str[]) { 
   int len = stringLength(str); 
   for (int i = 0; i < len / 2; i++) { 
      swap(str[i], str[len i 1]); 
   } 
}
int main() { 
   char str1[110], str2[110]; 

   cout << "Enter first string: "; 
   cin >> str1; 
   cout << "Enter second string: 
   cin >> str2; 

   displayASCII(str1); 

   // Concatenation 
   concatenateStrings (str1, str2); 
   cout << "Concatenated String: <<<< str1 << endl; 

      // Comparison 
   cout << "Strings are <<< (compareStrings (str1, str2) ? "equal": "not equal") <<< endl; 

      // String length 
   cout << "Length of first string: <<<<< stringLength(str1) << endl; 

      // Convert to uppercase toUppercase(str1); 
   cout << "Uppercase String: <<<<< str1 << endl; 

      // Reverse string 
   reverseString(str1); 
   cout << "Reversed String: <<<< str1 << endl; 
   return 0; 
}

##c-practical-

## 1
#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

double seriesSum(int n) { 
   double sum=0; 
   for (int i =1; i <= n; i++) {  
      double term 1.0/ pow(1, 1); 
      if ( i% 2==0) {
         sum = term; // Alternate terms are negetive 
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


##2
#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

void removeDuplicates (vector<int>& arr) { 
     set<int>uniqueElements(arr.begin(), arr.end()):  
     arr.assign(uniqueElements.begin(), uniqueElements.end()); 
}
int main() { 
     vector<int arr (1, 2, 2, 3, 7, 4, 5, 6, 7); 

     cout << "Original array: "; 
     for (int num :arr) cout<<num << " ";

     removeDuplicates(arr); 
     cout<< "\nArray after removing duplicates: "; 
     for (int num arr) cout<< num<<"*; 
      return 0; 
}

OR 

## 2
#include <iostream>
#include <algorithm> 
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n; 

    sort(arr, arr + n); 

    int j = 0; 

   
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; 
    return j; 
}

int main() {
    int arr[] = {4, 2, 2, 1, 4, 4, 6, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    n = removeDuplicates(arr, n); 

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

     
##3

 #include <iostream> 
#include <string> 
#include <map> 
  using namespace std; 

void countOccurrences (string str) { 
   map char, int freq; 

   for (char : str) { 
       if (isalpha(c)) { // Consider only alphabets  
          freq[tolower(c)]++; 
      }  
   } 
   cout<< "Character Frequency Table:\n"; 
 
   for (auto pair freq) { 
       cout<<< pair.first<< " -> " << pair.second << endl; 
   }
}
int main() { 
   string input; 
   cout<< "Enter a string:"; 
   getline(cin, input);  

   countoccurrences(input); 
   return 0; 


##4

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


##5 

#include <iostream> 
#include <vector> 
using namespace std; 

vector<int> mergeArrays (vector<int>& arr1, vector<int>& arr2) { 
   vector<int> merged; 
   int i = 0, j = 0; 
   
   while (i < arr1.size() && jarr2.size()) { 
      if (arr1[i] < arr2[j])
         merged.push_back(arr1[i++]); 
      else 
         merged.push_back(arr2[j++]); 
   } 
   while (i < arr1.size()) merged.push_back(arr1[i++]); 
   while (j < arr2.size()) merged.push_back(arr2[j++]); 
   return merged; 
} 
int main() { 
    vector<int> arr1= {(1, 3, 5, 5,7};
    vector<int> arr2 = {2, 4, 6, 8)}; 
    vector<int> merged = mergeArrays (arr1, агг2); 
    cout << "Merged sorted array: "; 
    for (int num: merged) cout << num << " "; 
    return 0;
}   

##6

#include <iostream> 
#include <vector> 
using namespace std; 

// Recursive binary search  
int binarySearchRecursive (vector<int> arr, int left, int right, int key) { 
   If (left right) return -1; 
   int mid left (right left)/2; 

   if(arr[mid] key) return mid;
   if (arr[mid] key) return binarySearchRecursive(arr, left, mid-1, key); 
   return binarySearchRecursive(arr, mid +1 ,right,key); 
} 

// Iterative binary search 
int binarySearchIterative(vector<int> arr, int key) { 
  int left =0, right =arr.size() - 1; 
  while (left <= right) { 
     int mid =left + (right - left)/2; 
     if (arr[mid] == key) return mid; 
     if (arr[mid] > key) right = mid-1;
     else left = mid -1; 
  }
return -1; 
} 

int main() { 
  vector<int> arr= (1, 3, 5, 7, 9, 13 ,); 
  int key = 5; 

// Recursive search 

  int indexRec binarySearchRecursive(arr, 0, arr.size() - 1, key); 
  cout<<" Recursive Binary Search:"<< (indexRec !=-1 ? "Found at index" + to_string(indexRec): "Not found") << endl; 

// Iterative search    
  int indexIter = binarySearchIterative(arr, key);  
  cout << "Iterative Binary Search:"<< (indexIter !=-1 ? "Found at index" + to_string(indexIter): "Not found") << endl;

  return 0;
}


##7

#include <iostream> 
using namespace std; 
   
// Recursive GCD 
int gcdRecursive(int a, int b) { 
  return (b==0) ? a: gcdRecursive(b, a% b); 
} 
 
// Non-recursive GCD 
int gcdIterative(int a, int b) { 
   while (b != 0) { 
       int temp =b; 
       b = a%b;
       a =temp; 
   } 
   return a; 
}  
int main() {  
   int a, b;  
   cout<< "Enter two numbers: "; 
   cin >> a >> b; 
   
   cout << "GCD (Recursive):  "<< gcdRecursive(a, b) << endl;  
   cout << "GCD (Iterative): "<< gcdIterative(a, b)<< endl;  
   return 0; 
} 


##8

#include <iostream> 
using namespace std; 

class Matrix { 
    int mat[3][3]; 

public:  
    void input() { 
       cout << "Enter matrix (3x3):\n"; 
       for (int i=0; i < 3 i++) 
           for (int j = 0 j < 3; j++) 
               cin >> mat [i][j]; 
    } 
 
    void display() {  
       for (int i = 0 i < 3 i++) { 
           for (int j = 0 j <= 3 ; j++)
               cout << mat[i][j] << "" ;
           cout << endl; 
       }  
    } 

    Matrix operator+(Matrix m) { 
        Matrix res; 
        for (int i = 0; i < 3 i++) 
            for (int j = 0; j < 3 j++) 
                res.mat[i][j] = mat[i][j]+ m.mat[i][j]; 
        return res; 
    } 

    Matrix operator*(Matrix m) { 
        Matrix res; 
        for (int i = 0; i < 3; i++) 
            for (int j = 0; j < 3; j++)  {
                res.mat[i][j]=0;
                for (int k = 0; k < 3; k++) 
                    res.mat[i][j] += mat[i][k]*m.mat[k][j]; 
            }  
        return res;  
    }    

    Matrix transpose() { 
        Matrix res; 
        for (int i = 0; i < 3; i++) 
            for (int j = 0; j < 3; j++) 
                res.mat[i][j] = mat[j][i]; 
        return res; 
   } 
}; 
 
int main() { 
   Matrix A, B, C; 
   int choice; 
  
   A.input(); 
   B.input(); 
 
   do { 
      cout << "\nMenu:\n1. Sum\n2. Product\n3. Transpose\n4. Exit\nEnter choice: "; 
      cin >> choice; 

      switch (choice) { 
         case 1: 
            C=A+B; 
            C.display(); 
            break; 
         case 2:
            C =A*B; 
            C.display(); 
            break; 
         case 3:  
            C =A.transpose(); 
            C.display(); 
            break; 
         case 4: 
            cout << "Exiting...\n"; 
            break; 
         default: 
            cout << "Invalid choice!"; 
      } 
   } while (choice != 4); 
   return 0; 
}


##9

#include <iostream>   
using namespace std; 

class Person { 
protected: 
   string name; 
   int age; 

public: 
   void input() { 
      cout << "Enter name and age:  
      cin >> name >> age; 
   }
   void display() { 
      cout << "Name: "<< name << ", Age: " << age << endl; 
   } 
}; 

class Student public Person { 
   string course; 

public: 
   void input() { 
      Person::input(); 
      cout << "Enter course: 
      cin >> course; 
   } 
   void display() { 
      Person::display(); 
      cout << "Course: " << course << endl; 
   } 
}; 

class Employee public Person { 
   int salary;  
public: 
   void input() {
      Person::input(); 
      cout << "Enter salary: ";  
      cin >> salary; 
   }
   void display() { 
      Person::display(); 
      cout << "Salary: " << salary << endl;
   }
};

int main() { 
   Student s; 
   Employee e; 

   cout << "Enter student details:\n"; 
   s.input(); 

   cout << "Enter employee details:\n"; 
   e.input();
   
   cout << "\nStudent Details:\n"; 
   s.display();
   
   cout << "\nEmployee Details:\n"; 
   e.display();
   
   return 0; 
}


##10

#include <iostream> 
using namespace std; 

class Triangle { 
public: 
   // Area with base & height 
   double area(double base, double height) { 
   return 0.5 *base*height; 
   } 

   // Area with 3 sides (Heron's formula) 
   double area(double a, double b, double c) { 
      double s (a + b + c) / 2; 
      return sqrt(s* (s-a)*(s-b)*(s-c)); 
   } 
}; 

int main() { 
   Triangle t; 
   cout << "Area (Base, Height): " << t.area(7, 13) << endl; 
   cout << "Area (Three Sides): " << t.area(2, 5, 9) << endl; 
   return 0;
}

   
##11


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


##12


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


##13

#include <iostream using namespace std; 

class Student { 
public: 
   int rollNo; string name; 
   string className; 
   int year; 
   float totalMarks; 

   void input() { 
      cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
      cin>> rollNo >> name>> className >> year>> totalMarks; 
   } 

   void display() { 
      cout << "Roll No: " <<rollNo <<", Name: "<< name 
           << " , Class: " << className << ",Year:" <<year 
           << " , Total Marks: " << totalMarks << endl; 
   } 
}; 

int main() { 
   Student students [5]; 
 
   // Taking input for 5 students 
   for (int i = 0; i < 5; i++) { 
      cout << "Enter details for Student " << i +1 << ":\n"; 
      students[i].input(); 
   } 
cout<<"\nStudent Details: \n"; 
for (int i=0; i < 5; 1++) { 
students[i].display(); 
} 
return 0; 
} 


##14


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








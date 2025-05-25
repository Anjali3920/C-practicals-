# C-practicals-

```
## practical 12  remove whitespace

```
#include <iostream>
#include <fstream>
using namespace std;

void removeWhitespace(string inputFile, string outputFile) {
    ifstream in(inputFile);
    ofstream out(outputFile);
    if (!in || !out) {
        cout << "Error opening files!" << endl;
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
    removeWhitespace(inputFile, outputFile);
    return 0;
}
```
## prac 11 details of 5 students

```
#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

    void input() {
        cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
        cin >> rollNo >> name >> className >> year >> totalMarks;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Class: " << className
             << ", Year: " << year
             << ", Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[5]; // array of 5 Student objects

    // Taking input for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        students[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
```

## prac 10  triangle class
```
// program 10
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z) {
        if (x <= 0 || y <= 0 || z <= 0) {
            cout << "Error: All sides must be greater than 0." << endl;
            exit(1);
        }
        if (x + y <= z || x + z <= y || y + z <= x) {
            cout << "Error: Sum of any two sides must be greater than the third side." << endl;
            exit(1);
        }
        a = x;
        b = y;
        c = z;
    }

    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t1(3, 4, 5);
    cout << "Area using Heron's formula: " << t1.area() << endl;
    cout << "Area of right-angled triangle (base=3, height=4): " << t1.area(3, 4) << endl;
    return 0;
}

```

## prac 9 class pearson
```
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    string course;
    int marks, year;
public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}
    void display() override {
        cout << "Name: " << name << "\nCourse: " << course << "\nMarks: " << marks << "\nYear: " << year << endl;
    }
};

class Employee : public Person {
    string department;
    float salary;
public:
    Employee(string n, string d, float s) : Person(n), department(d), salary(s) {}
    void display() override {
        cout << "Name: " << name << "\nDepartment: " << department << "\nSalary: " << salary << endl;
    }
};

int main() {
    Person* p;
    Student s("Aman", "BCA", 85, 2025);
    Employee e("Riya", "HR", 50000);

    p = &s; p->display();
    cout << endl;
    p = &e; p->display();

    return 0;
}
```
## practical 8 matrix class
```

```
## practical 7 GCD calculation
```

```
```
## prac 8 
# practical 1

![Image](https://github.com/user-attachments/assets/7f740462-eebb-4dc4-a8ac-f047eda0ac65)

# practical 2
![Image](https://github.com/user-attachments/assets/42daf852-7154-4aeb-9a14-4b341e811a59)

# practical 3
![Image](https://github.com/user-attachments/assets/b42bc627-bd90-4d8e-9995-553dcb9d78df)

# practical 4
![Image](https://github.com/user-attachments/assets/83258d6c-aa48-420b-951b-3e44317be151)
![Image](https://github.com/user-attachments/assets/857e1af8-6c37-4ff4-a208-783cc7299e9d)

![Image](https://github.com/user-attachments/assets/4fef2173-dfbe-4913-a916-72fffdabd479)

![Image](https://github.com/user-attachments/assets/7acccc8f-2ddd-426b-bdee-6783428751b1)

# practical 5
![Image](https://github.com/user-attachments/assets/d4ef3150-3a13-40ec-acb2-8bfb3ff37550)
![Image](https://github.com/user-attachments/assets/2bf3948f-7613-4f07-b83f-d27b3e03315b)

# practical 6
![Image](https://github.com/user-attachments/assets/1263bf80-1fe7-414e-8d4e-7ffdf734c067)
![Image](https://github.com/user-attachments/assets/90b5beaa-c896-4245-a73a-73b86e02fd02)

# practical 7
![Image](https://github.com/user-attachments/assets/563abfe4-d353-4e7e-a902-d253853231c2)
![Image](https://github.com/user-attachments/assets/8732513b-d591-4eb2-a2c1-9e124c74ef3d)

# practical 8 
![Image](https://github.com/user-attachments/assets/59d3f351-5d7e-4101-82f7-6c2ab3ad4ff0)
![Image](https://github.com/user-attachments/assets/c66977ca-52ec-4147-8a34-defe22a8ade1)
![Image](https://github.com/user-attachments/assets/0f3de777-c39a-46b5-92db-4fe3647fc1fb)

# practical 9
![Image](https://github.com/user-attachments/assets/38809941-9e71-4033-ac3e-1aa708e02c20)

![Image](https://github.com/user-attachments/assets/adcf7983-343a-4fbf-9dbe-94e4c7b8ddb1)

![Image](https://github.com/user-attachments/assets/90f44601-fd3c-4cd8-998a-975d36cf6b4a)

# practical 10
![Image](https://github.com/user-attachments/assets/31b3c6cd-8989-400c-8108-7894e6a36716)

![Image](https://github.com/user-attachments/assets/9e94c24c-6a51-4df2-bcb6-3773f8d93819)

# practical 11
![Image](https://github.com/user-attachments/assets/fd428fa0-ab6e-472f-b107-782bc081a83f)

![Image](https://github.com/user-attachments/assets/5554405b-2237-4d24-b663-2fcecc6284df)

# practical 12
![Image](https://github.com/user-attachments/assets/9517f2bd-af51-4fbe-b48d-924ddae7fc9f)

![Image](https://github.com/user-attachments/assets/48f116e4-562a-4b26-b8c9-0152113d38b5)

![Image](https://github.com/user-attachments/assets/b51e6005-f1a2-4ef3-b6cf-03cf99fdbed2)

# practical 13
![Image](https://github.com/user-attachments/assets/1546b8b9-5b50-4a15-ae6b-d2aa2eaae97d)

![Image](https://github.com/user-attachments/assets/b73e4865-e03c-4600-9654-2e10c1932571)

# practical 14
![Image](https://github.com/user-attachments/assets/58035326-abb3-472f-8f02-15578e047929)

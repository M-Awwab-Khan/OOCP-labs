#include <iostream>
#include <string>

struct Student {
    int rollNumber;
    std::string name;
    int age;
    float marks;
};

void studentDetails(Student student) {
    std::cout << "Roll Number: " << student.rollNumber << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
    std::cout << "Marks: " << student.marks << std::endl << std::endl;
}

Student findHighestMarksStudent(Student students[], int size) {
    Student highestMarksStudent = students[0];
    for (int i = 1; i < size; ++i) {
        if (students[i].marks > highestMarksStudent.marks) {
            highestMarksStudent = students[i];
        }
    }
    return highestMarksStudent;
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":" << std::endl;
        std::cout << "Roll Number: ";
        std::cin >> students[i].rollNumber;
        std::cin.ignore(100, '\n');
        std::cout << "Name: ";
        std::getline(std::cin, students[i].name);
        std::cout << "Age: ";
        std::cin >> students[i].age;
        std::cout << "Marks: ";
        std::cin >> students[i].marks;
    }

    std::cout << "\nDetails of all students:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Student " << i + 1 << ":" << std::endl;
        studentDetails(students[i]);
    }

    Student highestMarksStudent = findHighestMarksStudent(students, 3);

    std::cout << "Student with the highest marks:" << std::endl;
    studentDetails(highestMarksStudent);

    return 0;
}

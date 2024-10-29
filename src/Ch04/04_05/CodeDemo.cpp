// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
  
    
    
    //std::cout << grades[0].get_grade() << std::endl;
    //std::cout << (int) (('C' - grades[0].get_grade())+2) << std::endl;
    //std::cout << courses[grades[0].get_course_id()-1].get_credits() << std::endl;
    
    //std::cout << (int) (('C' - grades[1].get_grade())+2) << std::endl;
    //std::cout << courses[grades[1].get_course_id()-1].get_credits() << std::endl;

    //std::cout << (int) (('C' - grades[2].get_grade())+2) << std::endl;
    //std::cout << courses[grades[2].get_course_id()-1].get_credits() << std::endl;

    int TotalCredits = 0;

    for (int i = 3*(id-1); i < 3+(3*(id-1)); i++){
        GPA += ((int) (('C' - grades[i].get_grade())+2))*courses[grades[i].get_course_id()-1].get_credits();
    
        TotalCredits += courses[grades[i].get_course_id()-1].get_credits();

    }

   
    GPA /= TotalCredits;

    std::string student_str;
    student_str = students[id-1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;

    //std::cout << GPA << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}

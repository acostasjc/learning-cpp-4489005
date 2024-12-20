// Learning C++ 
// Challenge Solution 04_06
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    bool flag = false;

    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};


    //std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
    //                            Grade(2, 0, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    float points = 0.0f, credits = 0.0f;
    for (Grade& grd : grades)
        if (grd.get_student_id() == id){
            float num_grd;          // float for the numeric grade
            switch (grd.get_grade()){
                case 'A': num_grd = 4.0f;
                    break;
                case 'B': num_grd = 3.0f;
                    break;
                case 'C': num_grd = 2.0f;
                    break;
                case 'D': num_grd = 1.0f;
                    break;
                default:  num_grd = 0.0f;
                    break;
            };
            
            int j=0;
            while (j < courses.size()  &&  courses[j].get_id() != grd.get_course_id())
                j++;
            if (j < courses.size())
            {
                flag = false;
                credits += courses[j].get_credits();
                points += num_grd * courses[j].get_credits();
            }
            else
            {
                flag = true;
                break;
            }

        }
    
    
    int i = 0;
    while (i < students.size() && students[i].get_id() != id)
        i++;
    
    if (i < students.size())
    { 
        if (flag == false)
        {
            std::string student_str;

            GPA = points / credits;
            
            student_str = students[i].get_name();
            std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
        }
        else
        {
            std::cout << "Invalid Course ID" << std::endl;
        }    
    }
    else
    {
        std::cout << "Invalid Student ID" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}

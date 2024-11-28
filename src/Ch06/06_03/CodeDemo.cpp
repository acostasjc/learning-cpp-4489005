// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    //std::cout << "Enter a student ID: " << std::flush;
    //std::cin >> id;

    //SR.report_card(id);

    //SR.report_card(1);
    //SR.report_card(2);
    //SR.report_card(3);

    SR.report_card();
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    
    std::ifstream inFile;
    std::string str1, str2;
    int number1, number2;
    char letter;


    inFile.open("students.txt");
    if (inFile.fail())
    {
        std::cout << std::endl << "File students.txt not found!" << std::endl;
    }
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str1);
            number1 = stoi(str1);
            getline(inFile, str2);
            srec.add_student(number1, str2);
        }
        inFile.close();

    }
    
    
    //srec.add_student(1, "George P. Burdell");
    //srec.add_student(2, "Nancy Rhodes");
    //srec.add_student(3, "Antonio Costa");

    inFile.open("courses.txt");
    if (inFile.fail())
    {
        std::cout << std::endl << "File courses.txt not found!" << std::endl;
    }
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str1);
            number1 = stoi(str1);
            getline(inFile, str2);
            getline(inFile, str1);
            number2 = stoi(str1);
            srec.add_course(number1, str2, number2);
        }
        inFile.close();

    }
    
    
    
    
    //srec.add_course(1, "Algebra", 5);
    //srec.add_course(2, "Physics", 4);
    //srec.add_course(3, "English", 3);
    //srec.add_course(4, "Economics", 4);
    //srec.add_course(5, "Electronics", 2);

    
    inFile.open("grades.txt");
    if (inFile.fail())
    {
        std::cout << std::endl << "File grades.txt not found!" << std::endl;
    }
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str1);
            number1 = stoi(str1);
            getline(inFile, str1);
            number2 = stoi(str1);
            getline(inFile, str1);
            letter = str1[0];
            srec.add_grade(number1, number2, letter);
        }
        inFile.close();

    }

    
    
    
    //srec.add_grade(1, 1, 'B');
    //srec.add_grade(1, 2, 'A');
    //srec.add_grade(1, 3, 'C');
    //srec.add_grade(2, 1, 'A');
    //srec.add_grade(2, 2, 'A');
    //srec.add_grade(2, 4, 'B');
    //srec.add_grade(3, 5, 'B');
}

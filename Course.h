/*
Class for Course 
Author: Kingsley Loo-Xu 
*/
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class Course {

    private: 

        string Subject; //ex. CMPT, MATH, MACM
        const unsigned int Number; //ID assigned to course (ex. 125, 225, 295)
        string Title; //name of Course given by SFU (ex. CMPT 310's title would be "Intro to Artifical Intelligence")
        string Info; //Description of what will be taught in the course, provided by SFU or the instructor
        vector<Course> preReq; //vector array of prerequisites for the course

    public:

    //constructor 
    Course();

    //destructor
    ~Course();

    //Parameterized Constructor without preReq vector 
    Course(string newSubject, const unsigned int newNumber, string newtitle, string newInfo);

    //Paramerized Constructor with preReq vector


    //Description: returns Subject of Course 
    string getSubject() const;


    //Description: reutrns course number 
    unsigned int getNumber() const;


    //Description: returns the title of the Course
    string getTitle() const;

    //Description: returns the Course Info
    string getInfo() const;


    //Description:  returns the prerequisites for the Course 
    void getPreReq() const;

    //Description: prints out all of the Course's details (Subject, Number, Title, 
    //              Info, preReq) in a tidy manner


    //Description: 


};
#endif
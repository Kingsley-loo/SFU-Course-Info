/*
ADT For user.
Author: Kingsley Loo-Xu




*/

#ifndef USER_H
#define USER_H


#include <string>
#include "Course.h"

class User {

    private:

    constexpr static unsigned int MAX_LEVEL = 4;
    constexpr static unsigned int MAX_COURSES = 10;

    //will be an array of user arrays, ex: users[0] will have array of 100 level courses 
    User * users[MAX_LEVEL];
    unsigned int elementCount[MAX_LEVEL];

    public: 
    
    //default constructor 
    User();

    //destructor
    ~User();

    //Description: returns number of elements
    unsigned int getElementCount() const;


    //Description: inserts course to User profile 
    bool insert(const Course& newCourse);

    //Description: removes course from User profile 
    bool remove(const Course& toBeRemoved);

    //Description: removes all courses from User profile 
    bool removeAll();

    //Description: searches for courses 
    Course * search(const Course& target);

};
#endif
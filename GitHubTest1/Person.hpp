//
//  Person.hpp
//  GitHubTest1
//
//  Created by Kevin Lynch on 9/16/17.
//  Copyright © 2017 Kevin Lynch. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

class Person
{
    //attributes
private:
    int m_age;
   
    //constructors & destructor
public:
    Person(int age); //constructor
    ~Person(); //destructor
    
    //getters & stters
public:
    int getAge();
    
};

#endif /* Person_hpp */

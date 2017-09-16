//
//  Person.cpp
//  GitHubTest1
//
//  Created by Kevin Lynch on 9/16/17.
//  Copyright © 2017 Kevin Lynch. All rights reserved.
//

#include "Person.hpp"


//constructor
Person::Person(int age)
{
    m_age = age;
}

//destructor
Person::~Person()
{
    //not much to do here
}

//getter
int Person::getAge()
{
    return m_age;
}



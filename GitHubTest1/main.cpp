//
//  main.cpp
//  GitHubTest1
//
//  Created by Kevin Lynch on 9/16/17.
//  Copyright © 2017 Kevin Lynch. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int age = 54;
    Person Kevin(age);
    
    std::cout << "Hello, World!!!! Age:" << Kevin.getAge() << "\n";
    
    return 0;
}

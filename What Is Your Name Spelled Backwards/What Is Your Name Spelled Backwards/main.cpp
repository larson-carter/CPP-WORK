//
//  main.cpp
//  What Is Your Name Spelled Backwards
//
//  Created by Larson Carter on 6/24/18.
//  Copyright © 2018 Larson Carter. All rights reserved.
//

#include <iostream>

#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter Your First Name Please: \n";
    
    std::string inputname;
    
    std::getline(std::cin, inputname);
    
    std::cout << "Ok, You Entered: ";
    
    std::cout <<  inputname;
    
    std::cout << "\nNow Let's Spell That Backwards! \n";
    
    for(int i = inputname.length() - 1; i >= 0; --i){
        
        std::cout << inputname[i];
        
    }
    
    std::cout << '\n';
    
    return 0;
    
}

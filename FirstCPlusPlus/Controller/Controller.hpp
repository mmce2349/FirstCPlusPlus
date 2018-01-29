//
//  Controller.hpp
//  FirstCPlusPlus
//
//  Created by Mcentire, Mitchell on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
using namespace std;
#include <string>
#include <vector>


class Controller
{
private:
    int specialNumber;
    string favoriteWord;
    int * numberPointer;
protected:
    
public :
    Controller();
    void start();
    void useVector();
};

#endif /* Controller_hpp */

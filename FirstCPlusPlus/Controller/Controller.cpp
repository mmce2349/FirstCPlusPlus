//
//  Controller.cpp
//  FirstCPlusPlus
//
//  Created by Mcentire, Mitchell on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    cout << "I am in the constructor" << endl;
    this->specialNumber = 98765;
    this->favoriteWord = "Spork";
}

void Controller :: start()
{
    cout << "I am in the start method" << endl;
    
}

void Controller :: useVector()
{
    vector<int> numbers;
    
    numbers.push_back(specialNumber);
}

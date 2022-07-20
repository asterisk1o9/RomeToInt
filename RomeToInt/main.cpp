//
//  main.cpp
//  RomeToInt
//
//  Created by Marvin Augustin on 6/18/22.
//

#include <iostream>
#include "Conversion.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
   
    Conversion testObj;
    
    string str = "III";
    testObj.romanToInt(str);
    
    return 0;
}

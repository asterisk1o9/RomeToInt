//
//  Conversion.cpp
//  RomeToInt
//
//  Created by Marvin Augustin on 6/18/22.
//

#include "Conversion.hpp"

int Conversion::romanToInt(string str){
    
    map<char, int> roman;
    roman.insert(make_pair('I', 1));
    roman.insert(make_pair('V', 5));
    roman.insert(make_pair('X', 10));
    roman.insert(make_pair('L', 50));
    roman.insert(make_pair('C', 100));
    roman.insert(make_pair('D', 500));
    roman.insert(make_pair('M', 1000));
    
    cout << roman.at('L') << "\n";
    cout << roman['L'] << "\n";
    
    auto len = str.length();
    cout << "String length is " << str.length() << "\n";
    int num, sum = 0;
    
    for(int i=0; i<len;){
        if(i== (len - 1)||(roman[str[i]]>=roman[str[i+1]])){//If our i is less then the length of our string or the first value in our string is greater then the second
            num = roman[str[i]];//num is equal to the first value in our string
            i++;
        }
        else{
            num = roman[str[i+1]] - roman[str[i]];
            i = i+2;
        }
        sum = sum + num;
    }
    cout << sum;
    cout << "\n";
    
    return sum;
}

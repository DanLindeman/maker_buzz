//
//  main.cpp
//  day_one
//
//  Created by Daniel Lindeman on 2/5/15.
//  Copyright (c) 2015 Daniel Lindeman. All rights reserved.
//

#include <iostream>

int main() {
    int i = 1;
    while (i < 100)
    {
        if (i%15 == 0)
        {
            std::cout << "Fizzbuzz\n";
        }
        else if (i%3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else if (i%5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else
        {
            std::cout << i << "\n";
        }
        
        i++;
    }
    return 0;
}

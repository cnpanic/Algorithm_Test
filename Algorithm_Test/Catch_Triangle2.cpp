
//  Catch_Triangle2.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 4. 9..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    for(int i = 0; i < test_case; i++)
    {
        int x[2];
        int y[2];
        int length[2];
     
        for(int j = 0; j < 3; j++)
        {
            cin >> x[j] >> y[j];
            cout << x[0] << endl;
        }
        
       cout << x[0] << y[0] << x[1] << y[1] << x[2] << y[2] << endl;
        
        length[0] = pow((x[0] - x[1]),2) + pow((y[0] - y[1]),2);
        cout << length[0] << endl;
        length[1] = pow((x[0] - x[2]),2) + pow((y[0] - y[2]),2);
        cout << length[1] << endl;
        length[2] = pow((x[1] - x[2]),2) + pow((y[1] - y[2]),2);
        cout << length[2] << endl;
      
        
        sort(length,length+2);
        
        
        
        
    }
}



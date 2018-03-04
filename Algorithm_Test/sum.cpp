//
//  sum.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 3. 4..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.



#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T, test_case;
 
    cin >> T;
    for(test_case = 0; test_case  < T; test_case++)
    {
        
        
        int total = 0;
        cin >> total;
        int choose = 0;
        cin >> choose;
        int array[total-1];
    
        for(int i=0; i<total; i++){
            cin >> array[i];
        }
        sort(array,array+total);
    
        
        
        int anwser = 0;
        for(int i=0; i< choose; i++)
        {
            anwser += array[total-1-i];
        }
        
    
        
        
        cout << "Case #" << test_case+1 << endl;
        cout << anwser << endl;
    }
    
    return 0;//Your program should return 0 on normal termination.
}


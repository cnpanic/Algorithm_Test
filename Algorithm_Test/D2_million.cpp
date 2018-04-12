//
//  D2_million.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 4. 12..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//

#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    int test_case;
    cin >> test_case;
    for(int i = 0; i < test_case; i++)
    {
        int n;
        cin >> n;
        unsigned long long array[n-1];
        unsigned long long sum = 0;
        
        for(int j = 0; j < n; j ++)
        {
            cin >> array[j];
        }
        unsigned long long temp = array[n-1];
        
        for(int j = 1; j < n; j ++)
        {
            if(temp > array[n-j-1])
            {
                sum += temp - array[n-j-1];
            }
            else if(temp <= array[n-j-1])
            {
                temp = array[n-j-1];
            }
        }
        cout << "#" << i+1 << " " << sum << endl;
    }
    
}


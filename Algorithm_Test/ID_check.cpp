//
//  ID_check.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 4. 5..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        unsigned long long id;
        cin >> id;
        unsigned long long region_code;
        unsigned long long birth_code;
        unsigned long long order_code;
        unsigned long long checksum;
        
        region_code = id / 10000000000000;
        cout << "지역 코드 입니다. = "<< region_code << endl;
        birth_code = id % 10000000000000 / 100000;  // id / 100000 % 100000000;
        cout << "생일 코드 입니다. = "<< birth_code << endl;
        order_code = id / 100 % 1000;
        cout << "순서 코드 입니다. = "<< order_code << endl;
        checksum = id % 100;
        cout << "checksum 입니다. = "  << checksum << endl;
        
        // region_code
        if(region_code == 1 || region_code == 10 || region_code == 100 || region_code == 1000 || region_code == 10000 || region_code == 1000000)
        {
            
        }
        else
        {
            cout << "정확한 ID를 입력하세요. + region_code";
            return 0;
        }
        //birth_code
        if((birth_code / 10000) > 1899 && (birth_code / 10000) < 2015) // 연도 구별
        {
            if((birth_code / 100 % 100) > 0 && (birth_code / 100 %  100) < 13) // 달 구별
            {
                if((birth_code % 100) > 0  && (birth_code % 100) < 32 )
                {
                    
                }
                else
                {
                    cout << "정확한 ID를 입력하세요. + birth_code at day";
                    return 0;
                }
            }
            else
            {
                cout << "정확한 ID를 입력하세요. birth_code at month";
                return 0;
            }
            
        }
        else if((birth_code / 10000) <= 1899 && (birth_code / 10000) >= 2015) // 연도 구별
        {
            cout << "정확한 ID를 입력하세요. birth_code at year";
            return 0;
        }
            
        //order_code
        if(order_code != 0 && order_code % 2 == 0)
        {
            if(checksum < 12)
            {
                cout << "Female";
            }
        }
        else if(order_code != 0 && order_code % 2 == 1)
        {
            if(checksum < 12)
            {
                cout << "Male";
            }
        }
    }
}

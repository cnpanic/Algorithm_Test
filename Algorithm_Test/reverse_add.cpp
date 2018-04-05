//
//  reverse_add.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 4. 5..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//
// 10000000
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string anwser = "Yes";
    for(int i = 0; i < n; i++)
    {
        int test_case;
        cin >> test_case;
        int array[test_case];
        int reverse[test_case];
        
        // 각 자릿수 변수
        int first[test_case];
        int second[test_case];
        int third[test_case];
        int fourth[test_case];
        int fifth[test_case];
        int sixth[test_case];
        
        for(int j = 0; j < test_case; j++)
        {
            cin >> array[j];
        
        }
        for(int j = 0; j < test_case; j++)
        {
            first[j] = array[j] % 10;
            second[j] = array[j] % 100 /10;
            third[j] = array[j] % 1000 /100;
            fourth[j] = array[j] % 10000 /1000;
            fifth[j] = array[j] % 100000 /10000;
            sixth[j] = array[j] % 1000000 /100000;
            
           
            if(sixth[j] == first[j] && fifth[j] == second[j] && fourth[j] == third[j])
            {
                cout << anwser;
            }
            if(sixth[j] == 0) // 백만 미만일 경우
            {
                if(fifth[j] == first[j] && fourth[j] == second[j])
                {
                    cout << anwser;
                }
                if(fifth[j] == 0) //
                {
                    if(fourth[j] == first[j] && third[j] == second[j])
                    {
                        cout << anwser;
                    }
                    if(fourth[j] == 0)
                    {
                        if(third[j] == first[j])
                        {
                            cout << anwser;
                        }
                       
                    }
                }
            }
        }
    }
}

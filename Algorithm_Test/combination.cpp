//
//  combination.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 3. 4..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//


#include <iostream>

using namespace std;

int Answer;

int main()
{
    int T, test_case;
    cin >> T;
    
    for(test_case = 0; test_case  < T; test_case++)
    {
        
       
        int n,m;
        cin >> n >> m;
        int first[n-1][n-1];
        int second[n-1][n-1];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                first[i][j] = i+j;
                second[i][j] = i;
                cout << first[i][j] << "," << second[i][j] << endl;
            }
        }
//        int count = 0;
//        for(int i = 0; i <= n; i++)
//        {
//            for(int j = 0; j <= m; j++)
//            {
//                if(second[i][j] == 0) // nCr에서 r이 0인 경우
//                {
//                    count += 1;
//                }
//                else
//                {
//                    for()
//                }
//            }
//        }
        
        
        
        
//          슈도 코드 풀이법 대충
//          원리 = result라는 변수에 분자 값을 곱해준다 (ex) 6C3인 경우 j값의 감소에 따라 (6-0)*(6-1)*(6-2) 처럼 되도록
//          j == m 인 경우 헷갈린다.
//        for i
//            for j
//                if ( j < m )
//                    result *= first[i][j] - j
//                else if ( j == m )
//                {
//                        nothing to do
//                }
//
//                }
//
        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
    }
    
    return 0;//Your program should return 0 on normal termination.
}

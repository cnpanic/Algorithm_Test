////
////  combination.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 3. 4..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//
//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//    int T, test_case;
//    cin >> T;
//
//    for(test_case = 0; test_case  < T; test_case++)
//    {
//
//
//        int n,m;
//        cin >> n >> m;
//        int first[n-1][n-1];
//        int second[n-1][n-1];
//        for(int i = 0; i <= n; i++)
//        {
//            for(int j = 0; j <= m; j++)
//            {
//                first[i][j] = i+j;
//                second[i][j] = i;
////                if(second[i][j] == 0)   // r이 0인 경우  무조건 1이므로
////                {
////                    count += 1;
////                }
////                else if(first[i][j] == second[i][j] && first[i][j] != 0) // n 과 r이 같은 경우  무조건 1이므로 , 위에서 걸러진 0C0은 제외
////                {
////                    count += 1;
////                }
////                else if(first[i][j] - second[i][j] == 1)
////                {
////                    count += first[i][j];
////                }
////                else
////                {
////
////                }
//                cout << first[i][j] << "," << second[i][j] << endl;
//            }
//        }
//
//        for(int i = 0; i <= n; i++)
//        {
//            for(int j = 0; j <= m; j++)
//            {
//
//              /*  if
//                {
//                 //   for()
//                }
//               */
//            }
//        }
//
//
//
//
////          슈도 코드 풀이법 대충
////          원리 = result라는 변수에 분자 값을 곱해준다 (ex) 6C3인 경우 j값의 감소에 따라 (6-0)*(6-1)*(6-2) 처럼 되도록
////          j == m 인 경우 헷갈린다.
//        int up = 1;
//        int down = 1;
//        int result[n-1][m-1];
//        int count = 0;
//        for(int i = 0; i < n; i++)
//        {
//            for(int j = 0; j < m; j++)
//            {
//                if(second[i][j] == 0)
//                {
//                    count += 1;
//                    cout << "Seocnd[" << i << "][" << j << "]의 count 값 " << count << endl;
//                }
//                else
//                {
//                    for(int k = 0; second[i][j] - k == 1; k++)
//                    {
//                        up = up * (first[i][j] - k);
//                        down = down * (second[i][j] - k);
//                    }
//                    result[i][j] = up/down;
//                    cout << "result[" << i << "][" << j << "]의 result 값 " << result[i][j] << endl;
//                    up = 1;
//                    down = 1;
//                }
//
//                count += result[i][j];
//
//            }
//        }
//
//
//
//        cout << "Case #" << test_case+1 << endl;
//        cout << count << endl;
//    }
//
//    return 0;//Your program should return 0 on normal termination.
//}


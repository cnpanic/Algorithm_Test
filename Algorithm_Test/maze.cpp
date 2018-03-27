//////
//////  maze.cpp
//////  Algorithm_Test
//////
//////  Created by Jung Ho Chu on 2018. 3. 6..
//////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//////
////#include <iostream>
////
////using namespace std;
////
////
////int main()
////{
////    int T;
////    cin >> T;
////    for(int test_case = 0; test_case < T; test_case++)
////    {
////        int n;
////        cin >> n;
////        int array[n-1][n-1];
////        if(n > 4)
////        {
////            array[0][0] = 1;
////            array[0][1] = 2;
////            array[1][0] = 3;
////            array[1][1] = 5;
////            array[2][0] = 4;
////            array[0][2] = 6;
////        }
////
////        for(int i = 0; i < n; i++)
////        {
////            for(int j = 0; j < n; j++)
////            {
////                if(n % 2 == 1)
////                {
////                    array[n/2][n/2] = (n*n)/2 + 1;
////                    array[n+1][n-1] = array[n/2][n/2] - 1;
////                    array[n-1][n+1] = array[n/2][n/2] + 1;
////
////                }
////            }
////        }
////        for(int i = 0; i < n; i++)
////        {
////            for(int j = 0; j < n; j++)
////            {
////                if(n % 2 == 1)
////                {
////                    cout << array[i][j];
////                }
////
////            }
////        }
////
////
////    }
////}
////
//////
//////3
//////6 8
//////DDRRUULL
//////3 8
//////DDRRUULL
//////6 10
//////RRRRRDDDDD
////
////
////
////
////
//
//#include <stdio.h>
//#define S(n) (((long long)(n))*((n)+1)/2)
//
//
///*
// n = 1 s(n) = 1
// n = 2 s(n) = 3
// n = 3 s(n) = 6
// n = 4 s(n) = 10
// n = 5 s(n) = 15
//
//
//
//
//*/
//
//
//long long Ans;
//int T, N, K;
//
//int main() {
//    scanf("%d", &T);
//    for(int t_i = 1; t_i <= T; printf("Case #%d\n%lld\n", t_i, Ans), t_i++)
//    {
//        int y = 0, x = 0;
//        Ans = 1;
//        scanf("%d%d", &N, &K);
//        for(char str; K && scanf(" %c", &str); K--)
//        {
//            if('U' == str) y--;
//            if('R' == str) x++;
//            if('D' == str) y++;
//            if('L' == str) x--;
//            // 이동하는 좌표값
//            Ans += ((y+x < N) ? (S(y+x+1) - (((y+x)%2) ? x : y)) : ((long long)N*N - S(2*N-y-x-2) - N + 1 + (((y+x)%2) ? y : x)));
//
//            // y+x가 N보다 작으면 S(y+x+1) - (((y+x)%2 ? x : y)) || y와 x의 합이 홀수일 경우 x를 쓰고, 짝수일 경우 y를 쓴다
//            //
//        }
//    }
//    return 0;
//}
//

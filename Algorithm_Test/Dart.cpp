////
////  Dart.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 3. 4..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//
//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//
//int main()
//{
//    int T, test_case;
// 
//    cin >> T;
//    for(test_case = 0; test_case  < T; test_case++)
//    {
//          
//        int a,b,c,d,e;
//        cin >> a >> b >> c >> d >> e;
//        int n;
//        cin >> n;
//        int x[n-1],y[n-1];
////        int score[n-1];
//        for(int i = 0; i < n; i++){
//            cin >> x[i] >> y[i];
//        }
//        // Bull ,Triple,Double,Normal 조건
////        for(int i = 0; i < n; i++){
////            for(int j = 0; j < n; j++)
////            {
////                if(x[i] * x[i] + y[i] * y[i] < a*a)
////                {
////                    score[i] = 50;
////                }
////                else if(x[i] * x[i] + y[i] * y[i] > b*b && x[i] * x[i] + y[i] * y[i] < c*c)
////                {
////                    score[i] = 3;
////                }
////                else if(x[i] * x[i] + y[i] * y[i] > d*d && x[i] * x[i] + y[i] * y[i] < e*e)
////                {
////                    score[i] = 2;
////                }
////                else if(x[i] * x[i] + y[i] * y[i] > e*e)
////                {
////                    score[i] = 0;
////                }
////            }
//        
//       
//        // 각 점수판 점수 결정
//        float angle[n-1];
//        for(int i = 0; i < n; i++)
//        {
//            angle[i] = atan2(x[i],y[i]) * 57.2957951;
//            cout << i << "의 각도 값" << endl;
//            cout << angle[i] << endl;
//            cout << "X,Y 좌표값" << endl;
//            cout << x[i] << " " << y[i] << endl
//            ;
//        }
//   
//    }
//    
//    return 0;//Your program should return 0 on normal termination.
//}
//
////
////1
////10 50 60 80 90
////5
////5 5
////0 55
////45 -50
////-77 88
////-85 0
//

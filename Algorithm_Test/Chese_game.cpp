////
////  Chese_game.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 5..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    for(int i = 0; i < n; i++)
//    {
//        int size;
//        cin >> size;
//        int array[size-1][size-1];
//        for(int j = 0; j < size; j++)
//        {
//            for(int k = 0; k < size; k++)
//            {
//                array[j][k] = 1;
//            }
//        }
//        
//        for(int j = 0; j < 2; j++)
//        {
//           
//            char fx; // 한걸음씩 가는 퀸 x 좌표
//            char fy;
//            cin >> fx;
//            cin >> fy;
//            if(fx == ',' || fy == ',')
//            {
//                cout << "쉽표 발견 테스트" << endl;
//                j = 2;
//            }
//            else if(fx != ',' && fy != ',')
//            {
//                fx = digittoint(fx);
//                fy = digittoint(fy);
//                // 좌표값 더하기
//                array[fx+1][fy+1] = 1;array[fx][fy+1] = 1;array[fx-1][fy+1] = 1;array[fx+1][fy-1] = 1;array[fx][fy-1] = 1;array[fx-1][fy-1] = 1;array[fx+1][fy] = 1;array[fx][fy] = 1;array[fx-1][fy] = 1;
//            }
//        }
//        for(int j = 0; j < 2; j++)
//        {
//            char fx; // 퀸 x 좌표
//            char fy;
//            cin >> fx;
//            cin >> fy;
//            if(fx == ',' || fy == ',')
//            {
//                cout << "쉽표 발견 테스트 2" << endl;
//                j = 2;
//            }
//            else if(fx != ',' && fy != ',')
//            {
//                fx = digittoint(fx);
//                fy = digittoint(fy);
//                // 좌표값 더하기
//                array[fx+1][fy+1] = 1;array[fx][fy+1] = 1;array[fx-1][fy+1] = 1;array[fx+1][fy-1] = 1;array[fx][fy-1] = 1;array[fx-1][fy-1] = 1;array[fx+1][fy] = 1;array[fx][fy] = 1;array[fx-1][fy] = 1;
//                array[fx+2][fy+2] = 1;array[fx][fy+2] = 1;array[fx-2][fy+2] = 1;array[fx+2][fy-2] = 1;array[fx][fy-2] = 1;array[fx-2][fy-2] = 1;array[fx+2][fy] = 1;array[fx][fy] = 1;array[fx-2][fy] = 1;
//            }
//        }
//        for(int j = 0; j < 2; j++)
//        {
//            char fx; // 퀸 x 좌표
//            char fy;
//            cin >> fx;
//            cin >> fy;
//          
//            if(fx != ',' && fy != ',')
//            {
//                cout << "쉽표 조건 테스트 3" << endl;
//                fx = digittoint(fx);
//                fy = digittoint(fy);
//                // 좌표값 더하기
//                array[fx+1][fy+1] = 1;array[fx][fy+1] = 1;array[fx-1][fy+1] = 1;array[fx+1][fy-1] = 1;array[fx][fy-1] = 1;array[fx-1][fy-1] = 1;array[fx+1][fy] = 1;array[fx][fy] = 1;array[fx-1][fy] = 1;
//                array[fx+2][fy+2] = 1;array[fx][fy+2] = 1;array[fx-2][fy+2] = 1;array[fx+2][fy-2] = 1;array[fx][fy-2] = 1;array[fx-2][fy-2] = 1;array[fx+2][fy] = 1;array[fx][fy] = 1;array[fx-2][fy] = 1;
//                array[fx+3][fy+3] = 1;array[fx][fy+3] = 1;array[fx-3][fy+3] = 1;array[fx+3][fy-3] = 1;array[fx][fy-3] = 1;array[fx-3][fy-3] = 1;array[fx+3][fy] = 1;array[fx][fy] = 1;array[fx-3][fy] = 1;
//            }
//        }
//        
//        for(int j = 0; j < size; j++)
//        {
//            for(int k = 0; k < size; k++)
//            {
//                cout << array[j][k];
//            }
//        }
//        
//        
//    }
//}


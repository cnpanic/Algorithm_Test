////
////  st_block_1.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 9..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
////
////입력의 맨 첫 줄에는 총 테스트 케이스의 개수 T 가 주어지고,
////
////그 다음 줄부터 T 개의 테스트 케이스가 주어진다.
////
////각 테스트 케이스의 첫 번째 줄에는 지도의 한 변의 크기인 N 과 경사로의 길이 X 가 주어진다.
////
////다음 N 개의 줄에는 N * N 크기의 지형 정보가 주어진다.
////
////
////
////
////
////[출력]
////
////테스트 케이스 개수만큼 T 개의 줄에 각각의 테스트 케이스에 대한 답을 출력한다.
////
////각 줄은 "#t" 로 시작하고 공백을 하나 둔 다음 정답을 출력한다. ( t 는 1 부터 시작하는 테스트 케이스의 번호이다. )
////
////정답은 활주로를 건설할 수 있는 경우의 수이다.
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    int test_case;
//    cin >> test_case;
//    
//    for(int i = 0; i < test_case; i++)
//    {
//        int n;
//        int length;
//        cin >> n;
//        cin >> length;
//        int array[n][n];
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                cin >> array[j][k];
//            }
//            
//        }
//        
////        for(int j = 0; j < n; j++)
////        {
////            for(int k = 0; k < n; k++)
////            {
////                cout << array[j][k];
////            }
////            cout << endl;
////
////        }
//        int count = 0;
//        if(length == 2)
//        {
//            for(int j = 0; j < n; j++)
//            {
//                for(int k = 0; k < n; k++)
//                {
//                    if(array[j][k] == array[j][k+1] && array[j][k+1] + 1 == array[j][k+2])
//                    {
//                        if(array[j][k+2] == array[j][k+3] || array[j][k+2] - 1 == array[j][k+3])
//                        {
//                            
//                        }
//                    }
//                    else if(array[j][k] == array[j][k+1] + 1 && array[j][k+1] == array[j][k+2])
//                    {
//                        
//                    }
//                }
//            }
//
//            cout << count;
//        }
//    }
//    
//}


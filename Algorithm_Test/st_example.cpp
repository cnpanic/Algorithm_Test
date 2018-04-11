////
////  st_example.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 10..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
////1. 7 ≤  N ≤ 12
////
////2. Core의 개수는 최소 1개 이상 12개 이하이다.
////
////3. 최대한 많은 Core에 전원을 연결해도, 전원이 연결되지 않는 Core가 존재할 수 있다.
////
////
////
////[입력]
////
////입력의 가장 첫 줄에는 총 테스트 케이스의 개수 T가 주어지며 그 다음 줄부터 각 테스트 케이스가 주어진다.
////
////각 테스트 케이스의 첫 줄에는 N값이 주어지며, 다음 N줄에 걸쳐서 멕시노스의 초기 상태가 N x N 배열로 주어진다.
////
////0은 빈 cell을 의미하며, 1은 core를 의미하고, 그 외의 숫자는 주어지지 않는다.
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int test_case;
//    cin >> test_case;
//    for(int i = 0; i < test_case; i++)
//    {
//        int n;
//        cin >> n;
//        int array[n][n];
//        int length[n][n];
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                cin >> array[j][k];
//                length[j][k] = 0;
//                if(j == 0 || k == 0)
//                {
//                    length[j][k] = 1;
//                }
//            }
//        }
//        cout << "length 입니다" << endl;
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                cout << length[j][k] << " ";
//            }
//            cout << endl;
//        }
//        
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                if(array[j][k] == 1)
//                {
//                    array[j][k] = 0;
//                }
//                else if(array[j][k] == 0)
//                {
//                    array[j][k] = 1;
//                }
//            }
//        }
//        cout << endl;
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                cout << array[j][k] << " ";
//            }
//            cout << endl;
//        }
//        
//        
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                if(j > 0 && k > 0){
//                    if(k > j && array[j-1][k] != 0){
//                        if(j >= 2)
//                        {
//                            length[j][k] = length[j-1][k] + 1;
//                        }
//                        else{
//                        length[j][k] = length[j][k] + 1;
//                        }
//                    }
//                    else if(k > j && array[j-1][k] == 0)
//                    {
//                        if(k >= 2){
//                            length[j][k] = length[j][k-1] + 1;
//                        }
//                        else{
//                            length[j][k] = length[j][k] + 1;
//                        }
//                    }
//                    else if(j >= k && array[j][k-1] != 0){
//                        if(k >= 2){
//                            length[j][k] = length[j][k-1] + 1;
//                        }
//                        else{
//                            length[j][k] = length[j][k] + 1;
//                        
//                        }
//                    }
//                   
//                }
//            }
//        }
//        
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                if(j == 0 || k == 0)
//                {
//                       length[j][k] = 0;
//                }
//            }
//        }
//        cout << "수정 후 length입니다" << endl;
//        for(int j = 0; j < n; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                cout << length[j][k] << " ";
//            }
//            cout << endl;
//        }
//        
//        
//    }
//    
//}


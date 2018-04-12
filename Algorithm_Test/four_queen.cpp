////
////  four_queen.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 11..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
////bit[0..n-1] : 집합에 대한 비트 표현 저장,크기는 원소의 수
////k : 선택한 횟수(현재 노드의 높이),n: 모든 선택 수(트리의 높이)
//
//
//int subset(int bit [], int k, int n) // bit == 상태 공간 트리 경로 저장, 경로 정보 = 집합 생성을 위한 비트 표현
//{
//    if (k == n) // k 와 n 이 같으면 모든 선택이 끝남. == 단말 노드에 도달
//    {
//        cout << bit;
//        return 1;
//    }
//    else
//    {
//        bit[k] <- 0;
//        subset(bit,n,k+1);
//        bit[k] <- 1;
//        subset(bit,n,k+1);
//        return 1;
//    }
//}
//
//int main()
//{
//    
//}


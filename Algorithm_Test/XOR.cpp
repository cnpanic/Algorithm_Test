//
//  XOR.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 3. 3..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int Answer;
//
//int main()
//{
//    int T, test_case;
//
//
//    // freopen("input.txt", "r", stdin);
//
//    cin >> T;
//    for(test_case = 0; test_case  < T; test_case++)
//    {
//
//        Answer = 0;
//        int n;
//        cin >> n;
//        int array[n-1];
//        for(int i=0; i<n; i++)
//        {
//            cin >> array[i];
//        }
//
//        sort(array,array+n);
//        for(int i=0; i<n; i++)
//        {
//            if(array[i] == array[i+1])
//            {
//                array[i] = 0;
//                array[i+1] = 0;
//            }
//
//        }
//        int result = 0;
//
//        for(int i=0; i<n; i++)
//        {
//
//            if(i < n-1)
//            {
//                array[i+1] = array[i] ^ array[i+1];
//                result =  array[i+1];
//            }
//        }
//        
//
//
//
//        cout << "Case #" << test_case+1 << endl;
//        cout << result << endl;
//    }
//
//    return 0;//Your program should return 0 on normal termination.
//}


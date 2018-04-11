////
////  st_cook_1.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 10..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int teaming(int n){
//    int team[n];
//    for(int z = 1; z <= n; z++)
//    {
//        team[z] = z;
//    }
//    int red[n];
//    int blue[n];
//    
//}
//
//
//
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
//        for(int j = 0; j < n; j++){
//            for(int k = 0; k < n; k ++)
//            {
//                cin >> array[j][k];
//            }
//        }
//        for(int j = 0; j < n; j++){
//            for(int k = 0; k < n; k ++)
//            {
//                cout << array[j][k] << " ";
//            }
//            cout << endl;
//        }
//
//        int synergy[n][n];
//        for(int j = 0; j < n; j ++)
//        {
//            for(int k = 0; k < n; k ++)
//            {
//                if(k > j)
//                {
//                synergy[j][k] = array[j][k] + array[k][j];
//                }
//                else
//                {
//                    synergy[j][k] = 0;
//                }
//            }
//        }
//        int min = 0;
//        for(int j = 0; j < n; j++){
//            for(int k = 0; k < n; k ++)
//            {
////              cout << synergy[j][k] << " ";
//                for(int l = 0; l < n; l++)
//                {
//                    if(synergy[j][k] != 0 && l != k)
//                    {
//                        min = synergy[j][k] - synergy[j][l];
//                    }
//                }
//            }
//            cout << endl;
//        }
//    }
//}
//

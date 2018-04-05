////
////  matrix.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 4..
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
//    for(int i = 1; i <= n; i++)
//    {
//        int size;
//        cin >> size;
//        char array[size-1][size-1];
//        for(int j = 0; j < size; j++)
//        {
//            for(int k = 0; k < size; k++)
//            {
//                array[j][k] = '1';
//            }
//        }
//        
////        for(int j = 0; j < size; j++)
////        {
////            int x,y;
////            cin >> x;
////            cin >> y;
////
////        }
////    }
//    
//
//    
//    
//
//
//        for(int j = 0; j < size; j++)
//        {
//            char a;
//            char b;
//            cin >> a;
//            cin >> b;
//            if(a == ',' || b == ',')
//            {
//                j = size;
//                
//            }
//            
//            else if(a != ',' || b != ','){
//                cout << endl << "x의 값은 " << a << "입니다";
//                cout << endl << "y의 값은 " << b << "입니다" << endl;
//
//                int x = a - '0';
//                int y = b - '0';
//                
////                digittoint(x);
////                digittoint(y);
//                array[x+1][y] = '0';
//                array[x-1][y] = '0';
//                array[x][y] = '0';
//                array[x][y-1] = '0';
//                array[x][y+1] = '0';
////                cout << array[x+1][y];
////                cout << array[x-1][y];
////                cout << array[x][y];
////                cout << array[x][y-1];
////                cout << array[x][y+1];
//                cout << "hi";
//                for(int t = 0; t < size; t++)
//                {
//                    for(int k = 0; k < size; k++)
//                    {
//                        cout << array[j][k];
//                        
//                    }
//                }
//            }
//            
//        }
//       
//
//        for(int j = 0; j < size; j++)
//        {
//            char x;
//            char y;
//            cin >> x;
//            cin >> y;
//            if(x == ',' || y == ',')
//            {
//                j = size;
//            }
//            else if(x != ',' || y != ','){
//                digittoint(x);
//                digittoint(y);
//                array[x+1][y] = '0';
//                array[x-1][y] = '0';
//                array[x][y] = '0';
//                array[x][y-1] = '0';
//                array[x][y+1] = '0';
//                array[x+2][y] = '0';
//                array[x-2][y] = '0';
//                array[x][y-2] = '0';
//                array[x][y+2] = '0';
//                
//            }
//            
//        }
//
//        for(int j = 0; j < size; j++)
//        {
//            char x;
//            char y;
//            cin >> x;
//            cin >> y;
//            if(x == ',' || y == ',')
//            {
//                j = size;
//            }
//            else if(x != ',' || y != ','){
//                digittoint(x);
//                digittoint(y);
//                array[x+1][y] = '0';
//                array[x-1][y] = '0';
//                array[x][y] = '0';
//                array[x][y-1] = '0';
//                array[x][y+1] = '0';
//                array[x+2][y] = '0';
//                array[x-2][y] = '0';
//                array[x][y-2] = '0';
//                array[x][y+2] = '0';
//                array[x+3][y] = '0';
//                array[x-3][y] = '0';
//                array[x][y-3] = '0';
//                array[x][y+3] = '0';
//
//            }
//            if(x == ',' || y == ',')
//            {
//                j = size;
//            }
//        }
//        int count = 0;
//        for(int j = 0; j < size; j++)
//        {
//            for(int k = 0; k < size; k++)
//            {
//                cout << array[j][k];
//                if(array[j][k] == '1')
//                {
//                    count++;
//                }
//            }
//        }
//        
//        cout << endl << count;
//    }
//}
//

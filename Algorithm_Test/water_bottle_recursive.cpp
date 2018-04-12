////
////  water_bottle_recursive.cpp
////  Algorithm_Test
////
////  Created by Jung Ho Chu on 2018. 4. 11..
////  Copyright © 2018년 Jung Ho Chu. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//
//int recursive(int n,int* array, int temp)
//{
//    if(array[1] == array[0] || array[2] == array[0] || array[2] == array[1] )
//    {
//        return 1 && cout << "End of First" << endl << "첫번째 값 : " << array[0] << " 두번째 값 : " << array[1] << " 세번째 값 : " << array[2] << endl;
//    }
////    if(array[2] - array[1] == 2*array[1] || array[2] - array[0] == 2*array[0] || array[1] - array[0] == 2*array[0] || array[2] - array[1] == array[0])
////    {
////        return 1 && cout << "End of Second" << endl << "첫번째 값 : " << array[0] << " 두번째 값 : " << array[1] << " 세번째 값 : " << array[2] << endl;
////    }
//    if(array[2] - array[1] == array[1] || array[2] - array[0] == array[0] || array[1] - array[0] == array[0] || array[2] - array[1] == array[0])
//    {
//        return 1 && cout << "End of Second" << endl << "첫번째 값 : " << array[0] << " 두번째 값 : " << array[1] << " 세번째 값 : " << array[2] << endl;
//    }
//    else{
//        array[2] = array[2] - array[1];
//        array[1] = 2 * array[1];
//        temp = array[2];
//        array[0] = array[2];
//        return array[2] && array[1];
//        
//    }
//    
//}
//
//
//int main()
//{
//    int n = 2;
//    int array[n];
//    int temp;
//    for(int i = 0; i < 3; i ++)
//    {
//        cin >> array[i];
//    }
//    sort(array,array + 3);
// 
//
//    for(int i = 0; i < 1000; i ++)
//    {
//        recursive(n, array,temp);
//        sort(array,array+3);
//    }
//    
//    
//    
//    
//}


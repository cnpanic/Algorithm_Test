//
//  operation_1.cpp
//  Algorithm_Test
//
//  Created by Jung Ho Chu on 2018. 3. 27..
//  Copyright © 2018년 Jung Ho Chu. All rights reserved.
//




//상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
//
//상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.
//
//상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
//입력
//
//첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)
//출력
//
//상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int five_o;
    five_o = n / 5;
    int five_n;
    five_n = n % 5;
    int result;
    
    if(n == 3)
    {
        cout << "1" << endl;
        return 1;
    }
    if(n == 4 || n == 7)
    {
        cout << "-1" << endl;
        return 1;
    }
    for(int i = 0; i < five_o; i++)
    {
        if(five_n == 0)
        {
//            cout << "뒤에가 5나 0으로 끝나는 수" << endl;
            cout << five_o << endl;
            return five_o;
        }
        else if(five_n % 3 == 0)
        {
            result = five_o + (five_n/3);
//            cout << "뒤에가 3으로 이나 8로 끝나는 수" << endl;
            cout << result << endl;
            return result;
        }
        
        
//        30이나 33은 문제가 없음

        else if(five_n % 3 != 0)
        {
//            cout << "뒤에가 1이나 2 혹은 6이나 7로 끝나는 수" << endl;
            for(int i = 1; i <= five_n; i++)
            {
                five_n = five_n + 5;
                if(five_n%3 == 0)
                {
                    five_o = five_o - i;
                    result = five_o + (five_n/3);
                    cout << result << endl;
                    return result;
                }
                else
                {
                }
            }
            
        }
        
    
    }
    
    
}

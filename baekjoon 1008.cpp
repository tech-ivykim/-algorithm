/*

백준 온라인 저지
출처: https://www.acmicpc.net/problem/1008
문제: 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
입력: 첫째 줄에 A와 B가 주어진다. (0<A,B<10)
출력: 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9 이하이면 정답이다. 
예제 입력: 1 3
예제 출력: 0.33333333333333333333333333333333

*/

#include<iostream>
int main(){
    using namespace std;
    long double a, b;
    cin >> a >> b;
    cout.precision(12);
    cout << fixed;
    cout << a / b;
    return 0;
}

/*
1. C++ cout 소수점 개수 조절
cout을 사용해서 실수를 출력하면 소수점 뒤 6자리로 고정되어서 출력된다.
cout<<fixed;를 사용하면 소수점을 고정할 수 있고, 
cout.precision(n)을 사용하면 n자리의 소수점 자리수만큼 출력된다.(반올림) 

ex)
#include<iostream>
using namespace std;
int main(){
    double num = 0.123456789;
    cout<<num<<endl;
    cout<<fixed;
    cout.precision(8);
    cout<<num<<endl;
    return 0;
}

출력:
0.123457
0.12345679
*/
/*

백준 온라인 저지
출처: https://www.acmicpc.net/problem/10951
문제: 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
입력: 입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 <A,B< 10)
출력: 각 테스트 케이스마다 A+B를 출력한다.
예제 입력:
1 1
2 3
3 4
9 8
5 2
예제 출력:
2
5
7
17
7

*/

#include<iostream>
using namespace std;
int main(){
    int a, b;
    while(!(cin>>a>>b).eof()){
        cout << a + b << endl;
    }
    return 0;
}

/*
1. 입력받는 테스트 케이스의 개수를 알 수 없는 경우
입력 스트림이 파일의 끝에 도달했을 경우 즉, 입력받을 데이터가 없을 경우 EOF가 된다. 
따라서 위 문제같은 경우에는 !cin.eof()가 아니라 !(cin>>a>>b).eof()가 되어야한다. 
*/
/*

백준 온라인 저지
출처: https://www.acmicpc.net/problem/1152
문제: 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
입력: 첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 
단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.
출력: 첫째 줄에 단어의 개수를 출력한다.
예제 입력: The Curious Case of Benjamin Button
예제 출력: 6

*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt = 1;
    for (int i = 0; i < s.length();i++){
        if(s[i]==' ')
            cnt++;
    }
    if(s[0]==' ')
        cnt--;
    if(s[s.length()-1]==' ')
        cnt--;
    cout<<cnt;
    return 0;
}

/*
1. 공백 문자열 입력
공백 문자열을 입력받기 위해서는 cin.getline 또는 getline()을 사용할 수 있다.
cin.getline은 cin의 멤버함수이며 cin.getline(char, n)의 형태로 사용할 수 있다. (char은 문자열, n은 문자열의 크기)
getline()은 <string>에 정의되어 있으며, string형으로 저장된 문자열을 읽을 때 사용한다. 
getline(cin, str)의 형태로 사용할 수 있다. == 표준입력방식으로 str에 문자열 끝까지 저장.
*/
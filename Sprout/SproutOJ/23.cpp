#include <bits/stdc++.h>
using namespace std;

void push_train() {

};
void move_station_1_to_2(){

};
void move_station_2_to_1(){

};
void pop_train(){

};
void no_solution(){

};

int now=0;
stack<int> s1, s2;

void solve(int N,int order[]) {
    for (int i=1; i<=N; i++) {
        push_train();
        s1.push(i);
    }
    while (!(s1.empty() && s2.empty())) {
        while (!s1.empty()) {
            move_station_1_to_2();
            s2.push(s1.top());
            s1.pop();
            while (!s1.empty() && s1.top()==order[now]) {
                move_station_1_to_2();
                pop_train();
                s1.pop();
                now++;
            }
            while (!s2.empty() && s2.top()==order[now]) {
                pop_train();
                s2.pop();
                now++;
            }
        }
        while (!s2.empty()) {
            move_station_2_to_1();
            s1.push(s2.top());
            s2.pop();
            while (!s1.empty() && s1.top()==order[now]) {
                move_station_1_to_2();
                pop_train();
                s1.pop();
                now++;
            }
            while (!s2.empty() && s2.top()==order[now]) {
                pop_train();
                s2.pop();
                now++;
            }
        }
    }
}

int main() {

}

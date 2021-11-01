#include <iostream>
#include <map>
using namespace std;
int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> freq;

    string num;
    for(const auto &i : s) {
        if(i != ',') {
            num += i;
        } else {
            freq[num]++;
            num.clear();
        }
    }
    freq[num]++;
    num.clear();

    int answer = 0;
    for(const auto &i : freq) {
        if (i.second > 1) {
            answer += i.second - 1;
        }
    }
    cout << answer;
    return 0;
}

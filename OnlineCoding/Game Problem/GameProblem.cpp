// Problem :    https://exercise.acmcoder.com/online/online_judge_ques?ques_id=1685&konwledgeId=140
// Solution:    https://github.com/tjzhym/ACMcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-11


#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double n = 0.0, m = 0.0, x = 0.0;
    int p = 0, q = 0;
    double chooseNumber = 0.0;
    cin >> n >> m >> x;
    cin >> p >> q;

    chooseNumber = (p * x) / ((n + 1) * q - p * n);

    if (chooseNumber > m) {
        chooseNumber = m;
    }
    else if (chooseNumber < 1) {
        chooseNumber = 1;
    }
    cout << fixed << setprecision(2) << chooseNumber;
    return 0;
}
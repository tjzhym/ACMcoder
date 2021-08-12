// Problem :    https://exercise.acmcoder.com/online/online_judge_ques?ques_id=1530&konwledgeId=134
// Solution:    https://github.com/tjzhym/ACMcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-12


#include <iostream>
using namespace std;

int computeLeastStep(int a, int b) {
    int leastStep = abs(a) + abs(b);
    return leastStep;
}

bool isTrue(int step, int leastStep) {
    int remainStep = step - leastStep;
    if (step < leastStep) {
        return false;
    }
    else if (remainStep % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a = 0, b = 0, step = 0;
    int leastStep = 0;
    cin >> a >> b >> step;
    leastStep = computeLeastStep(a, b);

    if (isTrue(step, leastStep)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
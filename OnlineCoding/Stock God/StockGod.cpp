// Problem :    https://exercise.acmcoder.com/online/online_judge_ques?ques_id=1685&konwledgeId=140
// Solution:    https://github.com/tjzhym/ACMcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-12


#include <iostream>
using namespace std;

int computePrice(int totalDay) {
    if (totalDay == 1) {
        return 1;
    }
    else if (totalDay == 2) {
        return 2;
    }

    int descendDay = 2;
    int currentDay = 3;

    while (currentDay <= totalDay) {
        currentDay += descendDay + 1;
        descendDay++;
    }
    return (2 + totalDay - 2 * (descendDay - 1));
}

int main() {
    int totalDay = 0, price = 0;
    while (cin >> totalDay) {
        price = computePrice(totalDay);
        cout << price;
    }
    return 0;
}
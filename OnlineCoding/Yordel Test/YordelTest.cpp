// Problem :    https://exercise.acmcoder.com/online/online_judge_ques?ques_id=1677&konwledgeId=135
// Solution:    https://github.com/tjzhym/ACMcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-12


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double computeSimilarity(string changedString, string observedString) {
	int count = 0;
	for (int index = 0; index < changedString.size(); index++) {
		if (changedString[index] == observedString[index]) {
			count += 1;
		}
	}
	return  (100.0 * count / changedString.size());
}

int main() {
	string historyString, observedString, changedString;
	double similarity = 0.0;
	getline(cin, historyString);
	getline(cin, observedString);
	for (auto c : historyString) {
		if (isalnum(c)) {
			changedString += "1";
		}
		else {
			changedString += "0";
		}
	}
	similarity = computeSimilarity(changedString, observedString);
	cout << fixed << setprecision(2) << similarity << '%';

	return 0;
}
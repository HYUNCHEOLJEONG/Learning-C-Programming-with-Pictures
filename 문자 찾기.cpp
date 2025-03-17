#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
	vector<string>vt;
	string str1;
	cout << "문자열을 입력하십시오" << endl;
	//문자열 입력받기
	while (true) {
		getline(cin, str1);
		if (str1 == "end") { break; }
		vt.push_back(str1);
	}
	// 문자 찾기
	char target;
	cin >> target;
	for (size_t i = 0; i < vt.size(); i++) {
		vector<size_t>vt1;
		size_t pos = vt[i].find(target);//문자열에서 찾기
		while (pos != string::npos) {
			vt1.push_back(pos);
			pos = vt[i].find(target, pos + 1);//다음 위치 찾기
		}
		cout << "문자 " << target << " 의 위치 " << i + 1 << "): ";
		if (vt1.empty()) {
			cout << "없음";
		}
		else {
			for (size_t p : vt1) {
				cout << p;
			}
		}
		cout << '\n';
	}
	return 0;
}
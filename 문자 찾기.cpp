#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
	vector<string>vt;
	string str1;
	cout << "���ڿ��� �Է��Ͻʽÿ�" << endl;
	//���ڿ� �Է¹ޱ�
	while (true) {
		getline(cin, str1);
		if (str1 == "end") { break; }
		vt.push_back(str1);
	}
	// ���� ã��
	char target;
	cin >> target;
	for (size_t i = 0; i < vt.size(); i++) {
		vector<size_t>vt1;
		size_t pos = vt[i].find(target);//���ڿ����� ã��
		while (pos != string::npos) {
			vt1.push_back(pos);
			pos = vt[i].find(target, pos + 1);//���� ��ġ ã��
		}
		cout << "���� " << target << " �� ��ġ " << i + 1 << "): ";
		if (vt1.empty()) {
			cout << "����";
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
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string chr;
    vector<string> vt;

    // ���ڿ� �Է� �ޱ�
    getline(cin, chr);
    vt.push_back(chr);

    // ������ ù ��° ���(���ڿ�)�� �ݺ��ڸ� ����Ͽ� ���� ����
    for (auto it = vt[0].begin(); it != vt[0].end(); it++) {
        if (*it == 'h') {
            *it = 'H';
        }
        if (*it == 'w') {
            *it = 'W';
        }
        if (*it == 't') {
            *it = 'T';
        }
        if (*it == 'i') {
            *it = 'I';
        }
    }

    // ����� ���ڿ� ���
    for (const string& p : vt) {
        cout << p;
    }

    return 0;
}
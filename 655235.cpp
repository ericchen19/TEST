#include <iostream>
#include <string>
using namespace std;

int main() {
    int sort;
    cout << "�@���X�ءG";
    cin >> sort;
    cin.ignore();
    string name[100];

    for (int i = 0; i < sort; i++) {
        cout << "��" << i + 1 << "���W�١G";
        getline(cin,name[i]);
    }

    int account[1000][2] = {0};
    int num = 0;
    cout << "�@���X���b�G";
    cin >> num;
    cin.ignore();
    string goods[1000];
    
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "�G�ĴX�����b��G";
        cin >> account[i][0];
        cin.ignore();
        cout << i + 1 << "�G�b��W�١G";
        getline(cin,goods[i]);
        cout << i + 1 << "�G���B�G";
        cin >> account[i][1];
        cin.ignore();
    }

    int output[100] = {0};
    for (int i = 0; i < sort; i++) {
        for (int j = 0; j < num; j++) {
            if(account[j][0] == i + 1) {
                output[i] += account[j][1];
            }
        }
    }

    for (int i = 0; i < sort; i++) {
        cout << name[i] << "�~���`�@��F�G" << output[i] << "��\n";
        cout << "�Ӷ��G\n";
        for (int j = 0; j < num; j++) {
            if (account[j][0] == i + 1) {
                cout << goods[j] << "\n";
            }
        }
    }
}

#include "manager.h"
#include <iostream>
#include <string>
using namespace std;

int Password_Setting(string &d) {
	//��й�ȣ �缳��
	return 0; //�ϴ���
}
int Cafe_Management() {
	//ī�� ����
	return 0; //�ϴ���
}

int Cat_Management() {
	//����� ����
	return 0; //�ϴ���
}


bool manager_Interface(string &c){
	while (1)
	{
		cout << "�����ڸ�忡 ���Ű��� ȯ���մϴ�." << endl << "�Ʒ� ��ȣ�� �ϳ��� �����ϼ���." << endl;
		cout << "1.��ȣ����" << endl << "2.ī�����" << endl << "3.����� ����";
		char b;
		cin >> b;
		switch (b) {
		case '1':
			if (Password_Setting(c) == 1) {
				return true;
			}
			break;
		case '2':
			if (Cafe_Management() == 1) {
				return true;
			}
			break;
		case '3':
			if (Cat_Management() == 1) {
				return true;
			}


			
		}
	}
}
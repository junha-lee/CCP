#include "customer.h"


int admission_fee(int &r) {
	//�ο����� �Է¹޾Ƽ� ��ݿ� �����*�ο����� ��ģ�� �߰��ֹ� ����
	return 0; //�ϴ���
}
int coffee(int &r) {
	//Ŀ�� ���� ����� �ֹ�,HoT/ICE,������ �߰��ֹ� ����, ��� ����
	return 0; //�ϴ���
}
int catfood(int &r) {
	//����� ���� ��ݿ� ��ģ�� �߰��ֹ� ���� ����
	return 0; //�ϴ���
}
bool customer_Interface(string &c) {
	bool lp2 = true;
	int fee = 0;
	char a = 0;
	string pass;
	while (lp2) {
		cout << "�ȳ��ϼ���, ����� ī�信 ���Ű��� ȯ���մϴ�." << endl << "�Ʒ� ��ȣ�� �ϳ��� �����ϼ���." << endl;
		cout << "1. �����" << endl << "2.Ŀ��" << endl << "3.����� ��ǰ" << endl << endl << endl << endl << endl << "*. ������ ���";
		cin >> a;
		switch (a) {
		case '1':
			if (admission_fee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '2':
			if (coffee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '3':
			if (coffee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '#':
		case '*':
			getline(cin, pass);
			if (c == pass) {
				return true;
			}
			else
				break;
			
			// �Է¹��� ���� password���� ���ؼ� ���� ��� return boolean �Ҽ� �ִ�.
		default:
			cout << "�ٽ� �Է� ���ּ���";
		}
		
	}
	return false;
}
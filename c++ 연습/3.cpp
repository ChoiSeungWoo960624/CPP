//��� �ڵ� ���߱� ����~

#include <iostream>
using namespace std;

int main()
{
	char secret_code = 'h';

	cout << "����ڵ带 �Է����ּ��� ! : ";
	
	char code;
		cin >> code;
	
		if (code < secret_code)
			cout << code << "���ʿ� ����" << endl;
		else if (code > secret_code)
			cout << code << "���ʿ� ����" << endl;
		else
			cout << "�����Դϴ�." << endl;
		return 0;

}
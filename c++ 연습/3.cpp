//비밀 코드 맞추기 게임~

#include <iostream>
using namespace std;

int main()
{
	char secret_code = 'h';

	cout << "비밀코드를 입력해주세요 ! : ";
	
	char code;
		cin >> code;
	
		if (code < secret_code)
			cout << code << "뒤쪽에 있음" << endl;
		else if (code > secret_code)
			cout << code << "앞쪽에 있음" << endl;
		else
			cout << "정답입니다." << endl;
		return 0;

}
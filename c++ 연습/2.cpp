//�ֻ��� ����

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << " �� �ֻ��� �� = " << dice1 + dice2 << endl;
	return 0;


}

/*
 �� �ֻ��� �� = 8
  �� �ֻ��� �� = 8
*/
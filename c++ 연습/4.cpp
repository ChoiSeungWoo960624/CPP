#include <iostream>
#include <string>
using namespace std;

int main()
{
	// === char은 문자를 나타내는 데이터 타입이다. char은 1바이트의 크기를 가지며 -128 ~ 127까지의 값을 가진다. ===

	char a = 85;
	cout << a << endl; // 출력 값 U

	//u가 char값에 정수를 대입해도 정수로 받아 들이는 것이 아닌 ASCII 코드로 해석한다.




	// === char*는 문자열을 나타내는 것이며 글자 여러개가 계속 이어진 값을 가질 수 있다. 문자의 포인터 변수는 문자열을 담기 위해 사용한다. ===
/*
char*는 문자열을 나타내는 것이며 글자 여러개가 계속 이어진 값을 가질 수 있다. 문자의 포인터 변수는 문자열을 담기 위해 사용한다.

char* str ="가나다라마바사" 일 때 포인터가 변수는 첫 글자 이자 문자열의 시작 주소(가나다라마바사에서 '가')를 가리킨다.

또한 문자열 끝의 경우에는 마지막 지정 문자가 들어간다.
*/
	
	char* p = "abcdef";

	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;
	cout << p[3] << endl;

	cout << p << endl;
	cout << p + 1 << endl;
	cout << p + 2 << endl;
	cout << p + 3 << endl;

	return 0;
}
		/* 
		문자열 리터럴은 수정할 수 없는 메모리 영역(일반적으로 읽기 전용 영역)에 저장됩니다.
		char* p는 읽기 / 쓰기 가능한 메모리를 가리키는 포인터입니다.

		char* p = "abcdef"; → 오류 또는 경고 발생 가능(컴파일러에 따라 다름)

		const char* p = "abcdef"; → 올바른 방법(읽기 전용으로 사용 가능)
		*/

		// const char* p = 읽기 전용으로 사용가능 하며, 수정이 불가능하다. 

	const char* p = "abcdef";

	cout << p[0] << endl; //a
	cout << p[1] << endl; //b
	cout << p[2] << endl; //c
	cout << p[3] << endl; //d

	cout << p << endl; //abcdef
	cout << p + 1 << endl; //bcdef
	cout << p + 2 << endl; //cdef	
	cout << p + 3 << endl; //def

	return 0;
}
	
/*
char*와 같이 문자열을 나타내는 것은 똑같으나 포인터 변수가 아닌 배열을 통해 나타내는 것이다. 
즉 주소값에 대해서 접근하는 것이 아니기 때문에 char*와 큰 차이점은 문자열 하나하나 수정이 가능하다는 점이다. 
여기서도 문자열을 5개로 선언한 이유는 끝에 마지막 지정 문자가 들어가기 때문이다.
또한 ***char[] 선언에서는 꼭 크기를 정해주어야 한다. ***
*/


	// === char [] ===
	char p[5] = "abcd";

	cout << p << endl; //abcd
	p[2] = 'z';
	cout << p << endl; //abzd
	//p[4] ="abcd"일 때에는 error: initializer-string for array of chars is too long [-fpermissive] 길이가 맞지 않는 에러가 발생한다.

/*
 선언 방식		문자열 수정 가능?			포인터 변경 가능?		메모리 저장 위치
char *p			x(수정 시 오류 가능)		o						읽기 전용 영역
const char *p	x(수정 불가)				o						읽기 전용 영역
char p[]		o(수정 가능)				x						스택 영역
*/
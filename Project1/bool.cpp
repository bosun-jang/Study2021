#include <iostream> //입출력을 위한 표준 라이브러리
int main(void) { //main
	int num = 10; //정수형 변수 num의 값을 10으로 설정
	int i = 0; // 정수형 변수 i의 값을 0으로 설정

	std::cout << "true : " << true << std::endl; //true 값을 출력함. true는 1이므로 1 출력
	std::cout << "false : " << false << std::endl; // false 값을 출력함. false는 0이므로 0 출력
	while (true) //무한루프 while 문
	{
		std::cout << i++ << ' '; //i에 1을 더하여 출력함
		if (i > num) //i가 num보다 클 때 실행
			break; //무한루프 탈출
	}
	std::cout << std::endl;   //줄바꿈

	std::cout << "sizeof 1: " << sizeof(1) << std::endl;   //정수형 1의 크기를 출력함 (32bit)
	std::cout << "sizeof 0: " << sizeof(0) << std::endl;   //정수형 0의 크기를 출력함(32bit)
	std::cout << "sizeof ture: " << sizeof(true) << std::endl;   //bool형 true의 크기를 출력함 (8bit)
	std::cout << "sizeof false: " << sizeof(false) << std::endl;   //bool 형 false의 크기를 출력함(8bit)

	return 0;   //0 리턴

}
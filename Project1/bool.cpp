#include <iostream> //������� ���� ǥ�� ���̺귯��
int main(void) { //main
	int num = 10; //������ ���� num�� ���� 10���� ����
	int i = 0; // ������ ���� i�� ���� 0���� ����

	std::cout << "true : " << true << std::endl; //true ���� �����. true�� 1�̹Ƿ� 1 ���
	std::cout << "false : " << false << std::endl; // false ���� �����. false�� 0�̹Ƿ� 0 ���
	while (true) //���ѷ��� while ��
	{
		std::cout << i++ << ' '; //i�� 1�� ���Ͽ� �����
		if (i > num) //i�� num���� Ŭ �� ����
			break; //���ѷ��� Ż��
	}
	std::cout << std::endl;   //�ٹٲ�

	std::cout << "sizeof 1: " << sizeof(1) << std::endl;   //������ 1�� ũ�⸦ ����� (32bit)
	std::cout << "sizeof 0: " << sizeof(0) << std::endl;   //������ 0�� ũ�⸦ �����(32bit)
	std::cout << "sizeof ture: " << sizeof(true) << std::endl;   //bool�� true�� ũ�⸦ ����� (8bit)
	std::cout << "sizeof false: " << sizeof(false) << std::endl;   //bool �� false�� ũ�⸦ �����(8bit)

	return 0;   //0 ����

}
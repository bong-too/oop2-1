//#include <iostream>
//using namespace std;
//
//void Hello(int); // �λ�
//int Factorial(int); // ���丮�� �Լ�, �ݺ��� �̿�
//int FactorialRecursion(int); // ���丮�� �Լ�, ����Լ� �̿�
//int main() {
//	int(*pFact)(int); // �Լ�������
//	void(*pHi)(int);
//
//	pFact = &Factorial;
//	pHi = &Hello;
//
//	int in;
//	cin >> in;
//
//	cout << (*pFact)(in) << endl;
//	(*pHi)(in);
//
//
//	//cout << FactorialRecursion(in) << endl;
//	//cout << Factorial(in) << endl; 
//	//Hello(in); // �Լ� ȣ��
//	return 0;
//}
//int FactorialRecursion(int f) {
//	// f = 4
//	// f = 3
//	// f = 2
//	if (f <= 1)
//		return 1;
//	else
//		return f * FactorialRecursion(f - 1);
//		// 4 * FactorialRecursion(3)
//		// 3 * FactorialRecursion(2)
//		// 2 * FactorialRecursion(1)
//}
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++)
//		result = result * i;
//	return result;
//}
//void Hello(int n) {
//	cout << "Hi~ " << n << endl;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 5;
//	const int& ra = 9;
//	cout << ra << endl;
//
//	//int a = 1;
//	//int b = 2;
//	//const int& c = a; // �ʱ�ȭ
//
//	////c = 3;
//	////c = b; // b�� ���� ���� (�����ϴ°� �ƴ�)
//	////c = 4;
//
//	////cout << a << endl;
//	//cout << c << endl;
//	//a = 5;
//	//cout << c << endl;
//
//
//	// �ڷ�Ÿ�� &�����̸� = ��󺯼�;
//	//short s = 5;
//	//short& rs = s; // ���۷���
//	//short* ps = &s; // ������
//
//	//cout << s << " " << &s <<  endl;
//	//cout << rs << " " << &rs << endl;
//	//cout << *ps << " " << &ps << endl;
//
//	return 0;
//}


// Modern Style (enum class c++11)
//#include <iostream>
//using namespace std;
//
//enum class Java { PASS, FAIL };
//enum class Python { PASS, FAIL };
//enum class Cplusplus { PASS, FAIL };
//
//int main() {
//	Cplusplus c = Cplusplus::FAIL;
//
//	switch (c) {
//		case Cplusplus::PASS:
//			cout << "�հ�!";
//			break;
//		case Cplusplus::FAIL:
//			cout << "�����!";
//			break;
//	}
//	return 0;
//}

// Old Style
//#include <iostream>
//using namespace std;
//
//namespace sophomore {
//	enum Java { PASS, FAIL };
//}
//
//namespace freshman {
//	enum Python { PASS, FAIL };
//}
//
//int main(){
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//enum Color { RED, GREEN, BLUE, YELLOW };
//enum Java { PASS, FAIL };
//enum Python { PASS, FAIL };
//
//int main() {
//	Color c1 = RED;
//	Color c2;
//	
//	// ����� Casting �� ���� ����
//	//Color c3 = (Color)2;
//	Color c3 = (Color)1000;
//	cout << (Color)c3 << endl;
//
//	// ������� �Ұ�
//	//c1 = GREEN + BLUE;
//	//c1 = c1 + 2;
//
//	// �������� �Ұ�
//	//c2 = 3;
//
//	// �ݴ��� ��� ���԰� ��������� ����
//	// ������ Casting
//	//int n = BLUE;
//	//int o = GREEN + BLUE;
//
//	//cout << n << endl;
//	//cout << o << endl;
//
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//enum JOB_KINDS { JOB_NECROMANCER=10, JOB_BARBARIAN, JOB_WIZARD };
//struct Character {
//	JOB_KINDS jobType; // 0: ���ɼ���, 1: �߸����, 2:������
//};
//int main(){
//	Character c;
//	c.jobType = JOB_WIZARD;
//	if (c.jobType == JOB_WIZARD) {
//		cout << "�����ݷ�!" << endl;
//	}
//
//	return 0;
//}
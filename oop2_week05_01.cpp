//#include <iostream>
//using namespace std;
//int main() {
//	short* p = new short[100]; // 200byte ���� �Ҵ�	
//	cout << p << endl;
//	delete[] p; // ����
//	p = NULL;
//
//	cout << p << endl;
//	delete[] p; // ����
//	p = NULL;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//	int* p = new int; // �Ҵ�
//	*p = 486;
//	cout << *p << endl;
//	delete p; // ����
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//	int* p;
//	int length, total = 0;
//	double average;
//	cin >> length;
//	p = new int[length]; // ���� �޸� �Ҵ�
//
//	for (auto i = 0; i < length; ++i)
//		cin >> *(p + i);
//
//	for (auto i = 0; i < length; ++i)
//		total = total + p[i];
//
//	average = total / (double)length;
//	cout << total << endl;
//	cout << average << endl;
//
//	delete[] p;// ����� �޸� ����
//	return 0;
//}











//#include <iostream>
//#include <functional>
//using namespace std;
//// �͸��Լ�, �Լ���ü�� ����
//// �Լ� �����Ϳ� �Լ���ü�� ������ ���Ѵ�.
//// ĸ�� ����� ���� �Լ� ���� ������ ������ �� �ְ�
//// & ��ȣ�� ���� �����Լ� �ȿ����� �ܺ� ������ ���� ������ �� �ִ�.
//// ��� ȣ�⵵ �����ϴ�.
//
//int main() {
//	// ���ٿ��� ��͸� ���� �� �� auto Ÿ�����δ� �߷� �Ұ�
//	// �ݵ�� �����Ϸ��� �ϴ� �Լ��� Ÿ���� ��õǾ�� ��.
//	function<int(int)> fact = [&fact](int n)-> int {		
//		return n <= 1 ? 1 : n * fact(n - 1);
//		//if (n <= 1)
//		//	return 1;
//		//else
//		//	return n * fact(n - 1);
//	};
//	cout << fact(6) << endl;
//
//
//	//auto power = [](int b, int e) {
//	//	int r = 1;
//	//	for (auto i = 1; i <= e; i++)
//	//		r = r * b;
//	//	return r;
//	//};
//	//cout << power(2, 8) << endl;
//	//cout << power(4, 2) << endl;
//	return 0;
//}




//#include <iostream>
//using namespace std;
//int main() {
//	//short c = 5, d = 7;
//	//auto inha = [&c, d](float a, int b) -> int {
//	//	c = -5;
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9f, 2) << endl;
//	//cout << c << endl;
//
//	//short c = 5, d = 7;
//	//auto inha = [&](float a, int b) -> int {
//	//	c = -5;
//	//	d = 8;
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9f, 2) << endl;
//
//	//short c = 5, d = 7;
//	//auto inha = [=](float a, int b) -> int {
//	//	return a + b + c + d;
//	//};
//	//cout << typeid(inha).name() << endl;
//	//cout << inha(1.9f, 2) << endl;
//	
//	//short c = 5, d = 7;
//	//auto inha = [=](float a, int b) -> int {
//	//	return a + b + c + d;
//	//}(1.9f, 2);
//	//cout << typeid(inha).name() << endl;
//	//cout << inha << endl;
//	return 0;
//}




//#include <iostream>
//using namespace std;
//int main() {
//	// Lambda Expression (C++11, 14)
//	// [ĸ�ĺ�](�Ű���������Ʈ)->����Ÿ��{�Լ��ٵ�};
//	[]()->void {};
//	[]() {};
//	[] {};
//
//	// �ǳ��� �Ұ�ȣ ���� ����ǥ������ ��� �����Ű�� ����
//	//[] {cout << "Hi Lambda!" << endl; }();
//
//	//auto inha = [] {cout << "Hi Lambda!" << endl; };
//	//inha();
//
//	//auto inha = []() { return 5 + 10; };
//	//cout << inha() << endl;
//	
//	//auto inha = [](int a, int b) { return a + b; };
//	//cout << inha(5, 10) << endl;
//
//	//auto inha = [](int a, int b) -> int { return a + b; };
//	//cout << inha(5, 10) << endl;
//	
//	//auto inha = [](int a, int b) -> int { return a + b; }(5, 10);
//	//cout << inha << endl;
//
//	//auto inha = [](float a, int b) -> int { return a + b; };
//	//cout << inha(7.7f, 2) << endl;
//
//	//auto inha = [](float a, int b) -> float { return a + b; };
//	//cout << inha(7.7f, 2) << endl;
//
//	//auto inha = [](float a, int b) { return a + b; };
//	//cout << inha(7.7f, 2) << endl;
//
//	short c = 5, d = 7;
//	auto inha = [c, d](float a, int b) -> int {
//		return a + b + c + d;
//	};
//	cout << inha(1.9f, 2) << endl;
//
//	return 0;
//}














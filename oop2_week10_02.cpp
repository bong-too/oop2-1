//#include <string>
//using namespace std;
//// 2개 이상의 부모 클래스를 동시에 상속하는 경우
//class UnderGradStudent {
//public:
//	string name;
//	string dept;
//
//	void Warn(){};
//};
//class DormStudent {
//public:
//	string building;
//	int roomNo;
//
//	void Warn(){};
//};
//class UnderGrad_DormStudent :
//	public UnderGradStudent, public DormStudent {
//public:
//};
//void main() {
//	UnderGrad_DormStudent s1;
//	s1.name = "김인하";
//	s1.dept = "CSE";
//	s1.building = "1st";
//	s1.roomNo = 1024;
//
//	s1.DormStudent::Warn();
//}
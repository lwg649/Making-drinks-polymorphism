#include<iostream>
using namespace std;

// 多态案列  制作饮品

class AbstractDrinking {
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup()=0;
	// 加入辅料
	virtual void PutSomething() = 0;
	//制作饮品
	void makedrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class coffee:public AbstractDrinking{
public:
	//煮水
	virtual void Boil() {
		cout << "朱农夫山泉" << endl;
	};
	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	};
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	};
	// 加入辅料
	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	};
	
};

class Tea :public AbstractDrinking {
public:
	//煮水
	virtual void Boil() {
		cout << "朱农夫山泉" << endl;
	};
	//冲泡
	virtual void Brew() {
		cout << "冲泡茶叶" << endl;
	};
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	};
	// 加入辅料
	virtual void PutSomething() {
		cout << "加入枸杞" << endl;
	};

};


//制作函数
void dowork(AbstractDrinking*abs) {
	abs->makedrink();
	delete abs;//释放
}

void test01() {
	//制作咖啡
	dowork(new coffee);

	//制作茶叶
	dowork(new Tea);
}


int main() {
	test01();
	return 0;
}
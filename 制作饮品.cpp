#include<iostream>
using namespace std;

// ��̬����  ������Ʒ

class AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup()=0;
	// ���븨��
	virtual void PutSomething() = 0;
	//������Ʒ
	void makedrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class coffee:public AbstractDrinking{
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪ" << endl;
	};
	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	};
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	};
	// ���븨��
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	};
	
};

class Tea :public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪ" << endl;
	};
	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	};
	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	};
	// ���븨��
	virtual void PutSomething() {
		cout << "�������" << endl;
	};

};


//��������
void dowork(AbstractDrinking*abs) {
	abs->makedrink();
	delete abs;//�ͷ�
}

void test01() {
	//��������
	dowork(new coffee);

	//������Ҷ
	dowork(new Tea);
}


int main() {
	test01();
	return 0;
}
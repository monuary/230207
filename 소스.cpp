//ĸ��ȭ�� ������ �ݵ�� �ش��ϴ� �͸��� �����ؾ� �Ѵ�.

#include<iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
class Circle
{
	Point center;
	int rad;
public:
	void Init(int a, int b, int c)
	{
		center.Init(a, b);
		rad = c;
	}
	void ShowRadInfo() const
	{
		cout << "radius: " << rad << endl;
		center.ShowPointInfo();
	}
};
class Ring
{
	Circle in, out;
public:
	void Init(int a, int b, int c, int d, int e, int f)
	{
		if (((a - c) ^ 2 + (b - d) ^ 2) > ((f - c) ^ 2))
		{
			cout << "Ring�Լ��� �����Է��� �߸��Ǿ����ϴ�." << endl;
			exit(0);	//exit()�Լ��� ���α׷� ��ü�� �����Ų��. 
		}
		in.Init(a, b, c);
		out.Init(d, e, f);
	}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		in.ShowRadInfo();
		cout << "Outter Circle Info..." << endl;
		out.ShowRadInfo();
	}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
#pragma once
/*
�������� ���� �����������. � ������� ������ ��������� ����:
� ������ �
� ������.
������:
� ���������� �����,
� ���������� ���������,
� ������������ ������,

� ������������ ������,
� ��������� ������,
� ��������� ������;
� ��������� ������� �������� ����� �� �����.
������ ������������ ���� ����� ����� ��������� ���������� ���������, ��
���������.
*/
#include <iostream>

using namespace std;

class Rectangle
{
private:
	int h; // high
	int w; // weight
public: 
	int getH() { return this->h; };
	int getW() { return this->w; };
	void setH(int h) { this->h = h; };
	void setW(int w) { this->w = w; };
	bool Init(int h, int w);
	void Read();
	void Display() const;
	friend int getPerimeter(Rectangle);
	friend int getArea(Rectangle);
};


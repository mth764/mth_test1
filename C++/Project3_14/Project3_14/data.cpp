#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& out,const Date& d1);
public:
	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];
		if (month == 2 
			&& (year % 4 == 0 && year % 100 != 0)||year%400==0)
		{
			day = days[month] + 1;
		}
		return day;
	}
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year=year;
		_month=month;
		_day=day;
	}
	// �������캯��
	// d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	// ��ֵ���������
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	// ��������
	//~Date();
	// ����+=����
	Date& operator+=(int day)
	{
		int curday = GetMonthDay(_year,_month);
		while(day >=curday)
		{
			if (_month + 1 > 12)
			{
				_year += 1;
				_month = 0;
			}
			_month += 1;
			day = day - curday;
			curday = GetMonthDay(_year, _month);
		}
		if (_day + day > curday)
		{
			_month += 1;
			day = day - (curday - _day);
			_day = 0;
		}
		_day += day;
		return *this;
	}
	// ����+����
	Date operator+(int day)
	{

	}
	// ����-����
	Date operator-(int day);
	// ����-=����
	Date& operator-=(int day);
	// ǰ��++
	Date& operator++();
	// ����++
	Date operator++(int);
	// ����--
	Date operator--(int);
	// ǰ��--
	Date& operator--();
	// >���������
	bool operator>(const Date& d);
	// ==���������
	bool operator==(const Date& d);
	// >=���������
	inline bool operator >= (const Date& d);
	// <���������
	bool operator < (const Date& d);
	// <=���������
	bool operator <= (const Date& d);
	// !=���������
	bool operator != (const Date& d);
	// ����-���� ��������
	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d1)
{
	out << d1._year << "��" << d1._month << "��" << d1._day << "��";
	return out;
}
int main()
{
	Date d0(2021, 3, 15);
	//Date d1;
	d0 += 18;//18
	cout << d0;
	return 0;
}

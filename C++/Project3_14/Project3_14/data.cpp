#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& out,const Date& d1);
public:
	// 获取某年某月的天数
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
	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year=year;
		_month=month;
		_day=day;
	}
	// 拷贝构造函数
	// d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	// 赋值运算符重载
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
	// 析构函数
	//~Date();
	// 日期+=天数
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
	// 日期+天数
	Date operator+(int day)
	{

	}
	// 日期-天数
	Date operator-(int day);
	// 日期-=天数
	Date& operator-=(int day);
	// 前置++
	Date& operator++();
	// 后置++
	Date operator++(int);
	// 后置--
	Date operator--(int);
	// 前置--
	Date& operator--();
	// >运算符重载
	bool operator>(const Date& d);
	// ==运算符重载
	bool operator==(const Date& d);
	// >=运算符重载
	inline bool operator >= (const Date& d);
	// <运算符重载
	bool operator < (const Date& d);
	// <=运算符重载
	bool operator <= (const Date& d);
	// !=运算符重载
	bool operator != (const Date& d);
	// 日期-日期 返回天数
	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d1)
{
	out << d1._year << "年" << d1._month << "月" << d1._day << "日";
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

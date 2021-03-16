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
			if (_month + 1 > 12)
			{
				_year += 1;
				_month = 0;
			}	
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
		int curday = GetMonthDay(_year, _month);
		while (day >= curday)
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
			if (_month + 1 > 12)
			{
				_year += 1;
				_month = 0;
			}
			_month += 1;
			day = day - (curday - _day);
			_day = 0;
		}
		_day += day;
		Date tmp(*this);
		return tmp;
	}
	// 日期-天数
	Date operator-(int day)
	{
		if (_month - 1 < 1)
		{
			_year -= 1;
			_month = 13;
		}
		int curday = GetMonthDay(_year, _month-1);
		while (day >= curday)
		{
			_month -= 1;
			day = day - curday;
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			curday = GetMonthDay(_year, _month-1);
		}
		if (_day < day )
		{
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			_month -= 1;
			day = day-_day;
			_day = curday;
		}
		_day -= day;
		Date tmp(*this);
		return tmp;
	}
	// 日期-=天数
	Date& operator-=(int day)
	{
		if (_month - 1 < 1)
		{
			_year -= 1;
			_month = 13;
		}
		int curday = GetMonthDay(_year, _month - 1);
		while (day >= curday)
		{
			_month -= 1;
			day = day - curday;
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			curday = GetMonthDay(_year, _month - 1);
		}
		if (_day < day)
		{
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			_month -= 1;
			day = day - _day;
			_day = curday;
		}
		_day -= day;
		return *this;
	}
	// 前置++
	Date& operator++()
	{
		int curday = GetMonthDay(_year, _month);
		if (_day + 1 > curday)
		{
			if (_month + 1 > 12)
			{
				_year += 1;
				_month = 0;
				_day = 0;
			}
			_month += 1;
			_day = 0;
		}
		_day++;
		return *this;
	}
	// 后置++
	Date operator++(int)
	{
		Date tmp(*this);
		int curday = GetMonthDay(_year, _month);
		if (_day + 1 > curday)
		{
			if (_month + 1 > 12)
			{
				_year += 1;
				_month = 0;
				_day = 0;
			}
			_month += 1;
			_day = 0;
		}
		_day++;
		return tmp;
	}
	// 后置--
	Date operator--(int)
	{
		Date tmp(*this);
		if (_day - 1<1)
		{
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			int curday = GetMonthDay(_year, _month - 1);
			_month--;
			_day = curday + 1;
		}
		_day--;
		return tmp;
	}
	// 前置--
	Date& operator--()
	{
		if (_day - 1<1)
		{
			if (_month - 1 < 1)
			{
				_year -= 1;
				_month = 13;
			}
			int curday = GetMonthDay(_year, _month - 1);
			_month--;
			_day = curday + 1;
		}
		_day--;
		return *this;
	}
	// >运算符重载
	bool operator>(const Date& d)
	{
		if (_year == d._year)
		{
			if (_month == d._month)
			{
				return _day > d._day;
			}
			return _month > d._month;
		}
		return _year > d._year;
	}
	// ==运算符重载
	bool operator==(const Date& d)
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	// >=运算符重载
	inline bool operator >= (const Date& d)
	{
		if (_year == d._year)
		{
			if (_month == d._month)
			{
				return _day >= d._day;
			}
			return _month >= d._month;
		}
		return _year >= d._year;
	}
	// <运算符重载
	bool operator < (const Date& d)
	{
		if (_year == d._year)
		{
			if (_month == d._month)
			{
				return _day < d._day;
			}
			return _month < d._month;
		}
		return _year < d._year;
	}
	// <=运算符重载
	bool operator <= (const Date& d)
	{
		if (_year == d._year)
		{
			if (_month == d._month)
			{
				return _day <= d._day;
			}
			return _month <= d._month;
		}
		return _year <= d._year;
	}
	// !=运算符重载
	bool operator != (const Date& d)
	{
		return _year != d._year||d._month != d._month||_day != d._day;
	}
	int GetYearDay(int year)
	{
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			return 366;
		}
		return 365;
	}
	// 日期-日期 返回天数
	int operator-(const Date& d)
	{
		int sum = 0;
		if (*this > d)
		{
			while (_year > d._year)
			{
				int curday = GetYearDay(_year - 1);
				sum += curday;
				_year--;
			}
			while (_month > d._month)
			{
				int curday = GetMonthDay(_year, _month - 1);
				sum += curday;
				_month--;
			}
			while (_month < d._month)
			{
				int curday = GetMonthDay(_year, _month);
				sum -= curday;
				_month++;
			}
			if (_day>d._day)
				sum += _day - d._day;
			else
				sum -= d._day - _day;
		}
		else
		{
			while (_year < d._year)
			{
				int curday = GetYearDay(_year);
				sum += curday;
				_year++;
			}
			while (_month > d._month)
			{
				int curday = GetMonthDay(_year, _month - 1);
				sum -= curday;
				_month--;
			}
			while (_month < d._month)
			{
				int curday = GetMonthDay(_year, _month);
				sum += curday;
				_month++;
			}
			if (_day>d._day)
				sum -= _day - d._day;
			else
				sum += d._day - _day;
		}
		return sum;
	}
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
	Date d0(2021, 10, 15);
	Date d1(2021, 10, 15);
	Date d2(2021,3,16);
	Date d3(2021, 3, 16);
	Date d4(2021, 12, 31);
	Date d5(1997, 12, 22);//(1998, 5, 22)(1996, 12, 24)(1998, 5, 22)
	Date d6(1998, 11, 22);//(1998, 5, 22)(1998, 5, 12)(1998, 5, 12)
	Date d7(2021, 8, 27);
	Date d8(2018, 7, 27);
	int t = d7 - d8;
	cout << t << endl;
	d0 += 79;//18  79
	d1 = d1 + 79;//18 79
	d2 -= 20;//12  20  90
	d3 = d3 - 20;//12  20  90
	if (d5 > d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (d5 == d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (d5 >= d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (d5 < d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (d5 <= d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	/*if (d5 != d6)
		cout << "true" << endl;
	else
		cout << "false" << endl;*/
	cout << d0 << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << ++d4 << endl;
	cout << d4++ << endl;
	cout << d4 << endl;
	cout << --d4 << endl;
	cout << d4-- << endl;
	cout << d4 << endl;
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class String
{
private:
	char *str;
public:
	String(char *);
	void operator= (String &obj2);
	void operator +(const String &s);
	void showstring(void);
	bool operator <(const String & s);
	bool operator >(const String & s);
	bool operator ==(const String & s);
	friend ostream &operator<<(ostream &stream, String obj);
	friend istream &operator>>(istream &stream, String obj);

};

 String::String(char *s)
{
	strcpy(str, s);
}
 void String::operator=(String &obj2)
 {
	 strcpy(str, obj2.str);
 }
 void String::operator +(const String &s)
{
	strcat(str, s.str);
}

void String::showstring(void)
{
	cout << str << endl;
}

bool String::operator < (const String & s)
{
	if (strcmp(str, s.str) < 0) return true;
	else return false;
}
bool String::operator > (const String & s)
{
	if (strcmp(str, s.str) > 0) return true;
	else return false;
}
bool String::operator == (const String & s)
{
	if (strcmp(str, s.str) == 0) return true;
	else return false;
}

ostream &operator<<(ostream &stream, String obj)
{
	stream << obj.str;
	return stream;
}


istream &operator>>(istream &stream, String obj)
{
	stream >> obj.str;
	return stream;
}


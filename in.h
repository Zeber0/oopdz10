#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <list>
#include <deque>



class base {
public:
	virtual base* copy() = 0;
	virtual void set(std::wstring *str) = 0;
	virtual void get() = 0;
};
class listovyi;
class vectornyi;
class dequchnii;
class listovyi:public base {
protected:
	listovyi();
	
public:
	std::list<std::wstring*> l;
	listovyi(const listovyi& obj);
	base* copy() override;
	void set(std::wstring *str) override;
	void get() override;

	listovyi& operator=(class vectornyi& v) {
		std::list <std::wstring*> ltemp(v.v.begin(), v.v.end());
		l = ltemp;
		return *this;
	}
	listovyi& operator=(class dequchnii& d) {
		std::list <std::wstring*> ltemp(d.d.begin(), d.d.end());
		l = ltemp;
		return *this;
	}
	template<typename T>
	friend void addl(std::vector<T*>& v);
	/*
	friend void ravno(vectornyi& v, const listovyi& l);
	friend void ravno(vectornyi& v, const dequchnii& d);
	friend void ravno(listovyi& l, const vectornyi& v);
	friend void ravno(listovyi& l, const dequchnii& d);
	friend void ravno(dequchnii& d, const listovyi& l);
	friend void ravno(dequchnii& d, const vectornyi& v);
	*/
	~listovyi();
};
class vectornyi :public base {
protected:
	vectornyi();
	
public:
	std::vector<std::wstring*> v;
	vectornyi(const vectornyi& obj);
	base* copy() override;
	void set(std::wstring *str) override;
	void get() override;
	
	vectornyi& operator=(class listovyi& l) {
		std::vector <std::wstring*> vtemp(l.l.begin(), l.l.end());
		v = vtemp;
		return *this;
	}
	vectornyi& operator=(class dequchnii& d) {
		std::vector <std::wstring*> vtemp(d.d.begin(), d.d.end());
		v = vtemp;
		return *this;
	}
	template<typename T>
	friend void addv(std::vector<T*>& v);
	/*
	friend void ravno(vectornyi& v, const listovyi& l);
	friend void ravno(vectornyi& v, const dequchnii& d);
	friend void ravno(listovyi& l, const vectornyi& v);
	friend void ravno(listovyi& l, const dequchnii& d);
	friend void ravno(dequchnii& d, const listovyi& l);
	friend void ravno(dequchnii& d, const vectornyi& v);
	*/
	~vectornyi();
};
class dequchnii :public base {
protected:
	dequchnii();
	
public:
	std::deque<std::wstring*> d;
	dequchnii(const dequchnii& obj);
	base* copy() override;
	void set(std::wstring *str) override;
	void get() override;
	
	dequchnii& operator=(class listovyi& l) {
		std::deque <std::wstring*> dtemp(l.l.begin(), l.l.end());
		d = dtemp;
		return *this;
	}
	dequchnii& operator=(class vectornyi& v) {
		std::deque <std::wstring*> dtemp(v.v.begin(), v.v.end());
		d = dtemp;
		return *this;
	}
	template<typename T>
	friend void addd(std::vector<T*>& v);
	/*
	friend void ravno(vectornyi& v, const listovyi& l);
	friend void ravno(vectornyi& v, const dequchnii& d);
	friend void ravno(listovyi& l, const vectornyi& v);
	friend void ravno(listovyi& l, const dequchnii& d);
	friend void ravno(dequchnii& d, const listovyi& l);
	friend void ravno(dequchnii& d, const vectornyi& v);
	*/
	~dequchnii();
};

template<typename T>
void addl(std::vector<T*>& v)
{
	v.push_back(new listovyi);
}
template<typename T>
void addv(std::vector<T*>& v)
{
	v.push_back(new vectornyi);
}
template<typename T>
void addd(std::vector<T*>& v)
{
	v.push_back(new dequchnii);
};
/*
void ravno(vectornyi& v, const listovyi& l) {
	std::vector <std::wstring*> vtemp(l.l.begin(), l.l.end());
	v.v = vtemp;
}
void ravno(vectornyi& v, const dequchnii& d) {
	std::vector <std::wstring*> vtemp(d.d.begin(), d.d.end());
	v.v = vtemp;
}
void ravno(listovyi& l, const vectornyi& v) {
	std::list <std::wstring*> ltemp(v.v.begin(), v.v.end());
	l.l = ltemp;
}
void ravno(listovyi& l, const dequchnii& d) {
	std::list <std::wstring*> ltemp(d.d.begin(), d.d.end());
	l.l = ltemp;
}
void ravno(dequchnii& d, const listovyi& l) {
	std::deque <std::wstring*> dtemp(l.l.begin(), l.l.end());
	d.d = dtemp;
}
void ravno(dequchnii& d, const vectornyi& v) {
	std::deque <std::wstring*> dtemp(v.v.begin(), v.v.end());
	d.d = dtemp;
}*/
	

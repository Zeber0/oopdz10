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
	base();
	virtual void clone(base& dbt) = 0;
	virtual base* copy() = 0;
	virtual void write() = 0;
	virtual void set(std::wstring str) = 0;
	virtual std::wstring get() = 0;
	virtual ~base();
};
class listovyi;
class vectornyi;
class dequchnii;
class listovyi:public base {
protected:
	listovyi();
public:
	std::list<std::wstring*> db;
	listovyi(const listovyi& obj);
	base* copy() override;
	void set(std::wstring str) override;
	std::wstring get() override;
	void clone(base& dbt);
	void write();
	std::list<std::wstring*>::iterator geti();
	template<typename T>
	friend void addl(std::vector<T*>& v);
	~listovyi();
};
class vectornyi :public base {
protected:
	vectornyi();
	
public:
	std::vector<std::wstring*> db;
	vectornyi(const vectornyi& obj);
	base* copy() override;
	void set(std::wstring str) override;
	std::wstring get() override;
	void clone(base& dbt);
	void write();
	std::vector<std::wstring*>::iterator geti();
	template<typename T>
	friend void addv(std::vector<T*>& v);
	~vectornyi();
};
class dequchnii :public base {
protected:
	dequchnii();
	
public:
	std::deque<std::wstring*> db;
	dequchnii(const dequchnii& obj);
	base* copy() override;
	void set(std::wstring str) override;
	std::wstring get() override;
	void clone(base& dbt);
	void write();
	std::deque<std::wstring*>::iterator geti();
	template<typename T>
	friend void addd(std::vector<T*>& v);
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

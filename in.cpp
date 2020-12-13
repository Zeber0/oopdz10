#include "in.h"

listovyi::listovyi()
{
}

listovyi::listovyi(const listovyi& obj)
{
	l = obj.l;
}

base* listovyi::copy()
{
	return new listovyi(*this);
}

void listovyi::set(std::wstring str)
{
	l.push_back(new std::wstring(str));
}

void listovyi::get()
{
	for (std::list<std::wstring*>::iterator i = l.begin(); i != l.end(); i++) {
		std::wcout << **i << std::endl;
	}
}

listovyi& listovyi::operator=(dequchnii& d)
{
		std::list <std::wstring*> ltemp(d.d.begin(), d.d.end());
		//l = ltemp;
		l.clear();
		for (std::list<std::wstring*>::iterator i = ltemp.begin(); i != ltemp.end(); i++) {
			l.push_back(*i);
		}
		return *this;
}



listovyi::~listovyi()
{
	for (std::list<std::wstring*>::iterator i = l.begin(); i != l.end(); i++) delete *i;
}

vectornyi::vectornyi()
{
}

vectornyi::vectornyi(const vectornyi& obj)
{
	v = obj.v;
}

base* vectornyi::copy()
{
	return new vectornyi(*this);
}

void vectornyi::set(std::wstring str)
{
	v.push_back(new std::wstring(str));
}

void vectornyi::get()
{
	for (std::vector<std::wstring*>::iterator i = v.begin(); i != v.end(); i++) {
		std::wcout << **i << std::endl;
	}
}

vectornyi& vectornyi::operator=(listovyi& l)
{
		std::vector <std::wstring*> vtemp(l.l.begin(), l.l.end());
		//v = vtemp;
		v.clear();
		for (std::vector<std::wstring*>::iterator i = vtemp.begin(); i != vtemp.end(); i++) {
			v.push_back(*i);
		}
		return *this;
}



vectornyi::~vectornyi()
{
	for (std::vector<std::wstring*>::iterator i = v.begin(); i != v.end(); i++) delete* i;
}

dequchnii::dequchnii()
{
}

dequchnii::dequchnii(const dequchnii& obj)
{
	d = obj.d;
}

base* dequchnii::copy()
{
	return new dequchnii(*this);
}

void dequchnii::set(std::wstring str)
{
	d.push_back(new std::wstring(str));
}

void dequchnii::get()
{
	for (std::deque<std::wstring*>::iterator i = d.begin(); i != d.end(); i++) {
		std::wcout << **i << std::endl;
	}
}

dequchnii& dequchnii::operator=(vectornyi& v)
{

	std::deque <std::wstring*> dtemp(v.v.begin(), v.v.end());
	//d = dtemp;
	d.clear();
	for (std::deque<std::wstring*>::iterator i = dtemp.begin(); i != dtemp.end(); i++) {
		d.push_back(*i);
	}
	return *this;
}



dequchnii::~dequchnii()
{
	for (std::deque<std::wstring*>::iterator i = d.begin(); i != d.end(); i++) delete* i;
}

base::base()
{
}

base::~base()
{
}

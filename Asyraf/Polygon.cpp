#include "Polygon.h"
#include <iostream>
#include <stdlib.h>

Polygon::Polygon() {
	m_size = 5;
	m_count = 0;
	m_points = new Point[m_size];
}

Polygon::Polygon(int size) {
	m_size = size;
	m_count = 0;
	m_points = new Point[m_size];
}

Polygon::Polygon(Polygon& p) {
	m_size = p.m_size;
	m_count = p.m_count;
	if(p.m_points)
	{
		m_points = new Point[m_size];

		for (int i=0; i<m_count; i++)
		{
			m_points[i] = p.m_points[i];
		} 
	}
	else m_points=0;
}

void Polygon::addPoint(Point& p) {
	if (m_count < m_size) {
		m_points[m_count] = p;
		m_count++;
		cout << p << " has been added" << endl;
		}
	else cout << "Penuh cuy" << endl;
} 

void Polygon::delPoint() {
	if (m_count>0)
	{
		cout << m_points[m_count-1] << " has been deleted" << endl;
		--m_count;
	} 
}

ostream& operator<<(ostream& out, Polygon& p) {
	out << "{ ";
	for(int i=0; i<p.m_count; ++i)
	{
		out << p.m_points[i] <<" ";
	}
	out << "}";

	return out;
}

Polygon& Polygon::operator=(Polygon& src) {
	
	if (this == &src) return *this;

	m_size = src.m_size;
	m_count = src.m_count;

	delete[] m_points;

	if(m_points)
	{

		m_points = new Point[m_size];
		for(int i=0; i<m_count; i++)
		{
			m_points[i] = src.m_points[i];
		}
	}

	else m_points = 0;

	return *this;
}

Polygon::~Polygon() {
	delete[] m_points;
}


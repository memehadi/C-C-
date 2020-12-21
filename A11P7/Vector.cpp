/*
CH-230-A
a11 p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include<cmath>
#include <iostream>
#include "Vector.h"
#include <string>
using namespace std;

Vector::Vector(int y)
		{
			size = y;
		
			
			 ptr =new double [size];
			 for (int i=0;i<size;i++)
			 {
			 	cout<<"enter an element"<<endl;
			 	cin>>ptr[i];	 	
			 }
			
}
	Vector::Vector(const Vector& x )
	
		{
			size = x.size;
			for (int i=0;i<size;i++)
			{
				ptr[i] = x.ptr[i];
			}
			
		}
	
	
	
		void Vector:: print()
		{
		 for (int i=0;i<size;i++)
			 {
			 	cout<<ptr[i]<<"  "<<endl;
			  }
			
		}
		double Vector::norm()
		
		{ double sum = 0 , nor ;
			for (int i=0;i<size;i++)
			{
			sum += pow(ptr[i],2);	
			}
			nor = pow(sum,0.5);
			return nor;
		}
 Vector Vector::add(const Vector v1) const
{
	if( size != v1.size)
	{
		cout<<"not of the same size"<<endl;
		
	}
	Vector temp(v1.size);
	for (int i=0;i<size;i++)
	{
		temp.ptr[i]=ptr[i]+v1.ptr[i];
	}
	return temp;
		}
		 
	Vector Vector:: sub(const Vector v1) const
{
	if( size != v1.size)
	{
		cout<<"not of the same size"<<endl;
		
	}
	Vector temp(v1.size);
	for (int i=0;i<size;i++)
	{
		temp.ptr[i]=ptr[i]-v1.ptr[i];
	}
	return temp;
		}		
		
		 
	Vector Vector:: mul(const Vector v1) const
{
	if( size != v1.size)
	{
		cout<<"not of the same size"<<endl;
		
	}
	Vector temp(v1.size);
	for (int i=0;i<size;i++)
	{
		temp.ptr[i]=ptr[i]*v1.ptr[i];
	}
	return temp;
		}

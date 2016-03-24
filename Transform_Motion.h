#pragma once
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
class Transform_Motion
{
public:
	Transform_Motion(void);
	pair<double,double> Transform (double x , double y);
	~Transform_Motion(void);
};


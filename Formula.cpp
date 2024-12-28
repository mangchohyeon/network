#include "Formula.h"
#include <iostream>
#include <string>

using namespace std;

formula::formula()
{
	frml = "";
}

void formula::set_frml(string frm)
{
	frml = frml;
}


void formula::convert(void)
{
	int n = frml.length();
	string temp = frml;
	for (int i = 0; i < n; i++)
	{
		if (frml[i] == 'x')
		{
			if (i == 0)
			{
				continue;
			}
			
			if (frml[i - 1] >= 48 && frml[i - 1] <= 57)
			{
				temp.insert(i, "*");
			}
		}
	}

	int t = temp.find("x**");
	temp.replace(t, 3, "pow");
	temp.insert(t + 3, "(x,");
	for (int i = t + 6; i < t + 8; i++)
	{
		if (!(temp[i] >= 48 && temp[i] <= 57))
		{
			temp.insert(i, ")");
			break;
		}
	}

	frml = temp;
}

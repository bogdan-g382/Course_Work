// Synchronizer_Course.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"stdafx.h"
#include<iostream>
#include"FileorDirectory.h"
#include"Synchronizer.h"

	int main()
	{
		Synchronizer file("D:\\1\\1.avi");
		Synchronizer fileto("D:\\2");
		file.Syn(fileto);
		return 0;
	}



// Synchronizer_Course.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"stdafx.h"
#include<iostream>
#include"FileorDirectory.h"
#include"Synchronizer.h"
#include"ReDir.h"

	int main()
	{
		try
		{
			Synchronizer file("D:\\1");
			Synchronizer fileto("D:\\2");
			ReDir rem;
			/*rem.Rerecurse(fileto);*/
			file.Syn(fileto);
		}
		catch (std::exception exc)
		{
			std::cout << exc.what() << std::endl;
		}
		catch (...)
		{
			std::cout << "Unknown exception" << std::endl;
		}
		return 0;
	}






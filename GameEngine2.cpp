// GameEngine2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <D3DX10.h>
#include <iostream>
#include <windows.h>

auto main() -> int
{
	try
	{
		
		D3DXVECTOR3 vec1(1.0f, 2.0f, 3.0f);
		D3DXVECTOR3 vec2(1.0f, 2.0f, 6.0f);
		auto resVec = vec1 + vec2;
		std::cout << "Resulting vector is:" << resVec.x << std::endl;        
        return 0;
		
	}
    catch(std::exception &e)
    {
		std::cout << "Exception occured: " << e.what() << std::endl;
    }
}
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	PlaySound(L"Project_25.wav", NULL, SND_SYNC);
	return 0;
}
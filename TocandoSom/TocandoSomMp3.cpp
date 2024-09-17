#include <iostream>
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")

int main()
{
    MCIERROR Erro =
        mciSendString(L"open E:\\TEMP\\Teste.mp3 type mpegvideo alias MusicaEmMp3", NULL, 0, 0);

    if (Erro == 0)
    {
        Erro = mciSendString(L"play MusicaEmMp3 wait", NULL, 0, 0);
        mciSendString(L"close MusicaEmMp3", NULL, 0, 0);
    }

    return 0;
}
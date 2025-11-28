#include <iostream>
#include <windows.h>


void liniiGoale(int n)
{
    for(int i = 0; i < n; ++i)
        std::cout << std::endl;
}

int main()
{
    const int N = 10;
    const int L = 256;

   char versuri[N][L] =
    {
        "Si fara armani poti sa te numesti o doamna,",
        "Poti sa fii regina si fara sa porti coroana.",
        "Ia asculta-mi inima cat de sincer te cheama,",
        "Fara accesorii la care se fac reclama.",

        "Fara armani poti sa te numesti o doamna,",
        "Poti sa fii regina si fara sa porti coroana.",
        "Ia asculta-mi inima cat de sincer te cheama,",
        "Ca dragostea nu are nevoie de reclama."
    };

    liniiGoale(2);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; versuri[i][j]; ++j)
        {
            std::cout << versuri[i][j] << std::flush;
            Sleep(50);
        }

        if (i == 3) // spatiu intre strofe si versuri
            liniiGoale(3);
        else
            liniiGoale(1);

        Sleep(800);
    }

    std::cout << std::endl;

    return 0;
}

#include <cstring>
#include <cctype>

void checkIfNull(const char *name, char *soundex)
{
    if (name[0] == '\0')
    {
        soundex[0] = '\0';
        return;
    }
}

void padSoundex(char *soundex,int *sIndex)
{
    while (*sIndex < 4) 
    {
        soundex[(*sIndex)++] = '0';
    }
    soundex[4] = '\0';
}

void initializeSoundex(char firstChar, char *soundex ,int *sIndex)
{
    soundex[0] = toupper(firstChar);
    *sIndex = 1;
}

void generateSoundex(const char* input, char* soundex)
{
    int sIndex = 0;
    checkIfNull(input,soundex);
    initializeSoundex(input[0],soundex,&sIndex);
    padSoundex(soundex,&sIndex);
}

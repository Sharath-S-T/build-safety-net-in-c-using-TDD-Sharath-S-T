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

void initializeSoundex(char firstChar, char *soundex)
{
    soundex[0] = toupper(firstChar);
}

void generateSoundex(const char* input, char* soundex)
{
  checkIfNull(input,soundex);
  initializeSoundex(input[0],soundex);
}

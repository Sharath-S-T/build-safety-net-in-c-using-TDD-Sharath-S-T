#include <cstring>
#include <cctype>
#include "Soundex.h"

void checkIfNull(const char *name, char *soundex)
{
    if (name[0] == '\0')
    {
        soundex[0] = '\0';
        return;
    }
}

char getSoundexCode(char c)
{
    char c = toupper(c);
    if(c <= 'A' && c >= 'Z')
    {
      return ;
    }
}

void processRemaniningChars(const char* input)
{
    for(int index = 0; index< strlen(input);index++)
    {
      getSoundexCode(input[index]);
    }
}


void initializeSoundex(char firstChar, char *soundex)
{
    soundex[0] = toupper(firstChar);
}

void generateSoundex(const char* input, char* soundex)
{
  checkIfNull(input,soundex);
  initializeSoundex(name[0],soundex);
  processRemaniningChars(input);
}

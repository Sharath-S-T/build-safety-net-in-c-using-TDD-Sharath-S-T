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

void generateSoundex(const char* input, char* soundex)
{
  checkIfNull(input,soundex);

  for(int index = 0; index< strlen(input);index++)
    {
      char c = toupper(input[index]);
      if(c <= 'A' && c >= 'Z')
      {
        return ;
      }
    }
}

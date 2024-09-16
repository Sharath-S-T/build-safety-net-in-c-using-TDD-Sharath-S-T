#include <cstring>
#include <cctype>
#include "Soundex.h"

void generateSoundex(const char* input, char* soundex)
{
  if (input[0] == '\0')
    {
        soundex[0] = '\0';
        return;
    }

  for(int index = 0; index< strlen(input);index++)
    {
      char c = toupper(input[index]);
      if(c <= 'A' && c >= 'Z')
      {
        return ;
      }
    }
}

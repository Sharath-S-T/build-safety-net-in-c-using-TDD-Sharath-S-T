#include "Soundex.h"

void generateSoundex(const char* input, char* soundex)
{
  if (input[0] == '\0')
    {
        soundex[0] = '\0';
        return;
    }

  for(int index = 0; index< strlen(input);i++)
    {
      char c = toupper(input[i]);
      if(c <= 'A' && c >= 'Z')
      {
        soundex[0] = '\0'
        return ;
      }
    }
}

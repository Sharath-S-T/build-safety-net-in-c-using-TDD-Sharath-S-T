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

char getSoundexCode(char c)
{
    c = toupper(c);
    static const char code[] = {'0','1','2','3','0','1','2','0','0','2','2','4','5','5','0','1','2','6','2','3','0','1','0','2','0','2'};
    return (c >= 'A' && c <= 'Z') ? code[c - 'A'] : '0';
}

void processEachChar(const char* input, char* soundex , int* sIndex,int index)
{
    char code = getSoundexCode(input[index]);
    if(code != '0' && soundex[(*sIndex)-1]!= code)
    {
      soundex[(*sIndex)++] = code;
    }
}

void processChars(const char* input,char* soundex,int* sIndex,int inputLength)
{
  for(int index = 1; index < inputLength ; index ++)
  {
    processEachChar(input,soundex,sIndex,index);
  }
  padSoundex(soundex,sIndex);
}



void generateSoundex(const char* input, char* soundex)
{
    int sIndex = 0;
    int inputLength = strlen(input);
    checkIfNull(input,soundex);
    initializeSoundex(input[0],soundex,&sIndex);
    processChars(input,soundex,&sIndex,inputLength);
}

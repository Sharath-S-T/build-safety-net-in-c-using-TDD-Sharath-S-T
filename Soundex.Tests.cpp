#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, SoundexTestForEmptyString)
{
    char soundexCode[5];
    //Empty String
    generateSoundex("",soundexCode);
    ASSERT_STREQ(soundexCode,"");

    //non alphabetic single character
    generateSoundex("1",soundexCode);
    ASSERT_STREQ(soundexCode,"");
}

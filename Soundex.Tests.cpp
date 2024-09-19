#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, SoundexTestForEmptyString)
{
    char soundexCode[5];
    //Empty String
    generateSoundex("",soundexCode);
    ASSERT_STREQ(soundexCode,"");

    //Alphabetic single character
    generateSoundex("a",soundexCode);
    ASSERT_STREQ(soundexCode,"A000");
}

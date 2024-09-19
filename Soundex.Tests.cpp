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

    //Non Alphabetic single character
    generateSoundex("1",soundexCode);
    ASSERT_STREQ(soundexCode,"1000");

    //Alphabetic consonant characters
    generateSoundex("xyzc",soundexCode);
    ASSERT_STREQ(soundexCode,"X200");

    //Alphabetic vowel characters
    generateSoundex("aeiou",soundexCode);
    ASSERT_STREQ(soundexCode,"X200");
}

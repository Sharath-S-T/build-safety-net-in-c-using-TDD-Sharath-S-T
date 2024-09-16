#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, SoundexTestForEmptyString)
{
    char soundexCode[5];
    generateSoundex("",soundexCode);
    ASSERT_STREQ(soundexCode,"");

    generateSoundex("1",soundexCode);
    ASSERT_STREQ(soundexCode,"");
}

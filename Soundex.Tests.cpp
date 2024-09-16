#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, SoundexTestForEmptyString)
{
    char soundexCode[5];
    generateSoundex("",soundexCoode);
    ASSERT_STREQ(soundexCode,"");
}

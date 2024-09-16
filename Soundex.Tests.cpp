#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoundexTestsuite, SoundexTests)
{
    char soundexCode[5];
    generateSoundex("",soundexCoode);
    ASSERT_STREQ(soundexCode,"");
}

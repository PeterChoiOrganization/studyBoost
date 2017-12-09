//
//  main.cpp
//  boostLibrary
//
//  Created by PeterChoi on 2017. 12. 9..
//  Copyright © 2017년 Changmin.Choi. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"

TEST(HelloGtest, hello)
{
    ASSERT_EQ(1, 1);
    ASSERT_GE(2, 1);
    ASSERT_FALSE(false);
    ASSERT_TRUE(true);
}

int main(int argc, char * argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

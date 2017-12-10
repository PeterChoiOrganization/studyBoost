//
//  main.cpp
//  boostLibrary
//
//  Created by PeterChoi on 2017. 12. 9..
//  Copyright © 2017년 Changmin.Choi. All rights reserved.
//

// boost versionL 1.65.1

#include <iostream>
#include "gtest/gtest.h"
#include "boost/lambda/lambda.hpp"
#include <boost/lambda/bind.hpp>
#include "boost/function.hpp"

int addTwo(const int a, const int b) {
    return a+b;
}

TEST(BoostTest, lambda)
{
    static const int kSecondInput = 113;
    
    boost::function<int (const int)> boostAdd = boost::lambda::bind(addTwo, boost::lambda::_1, kSecondInput);
    
    for(int i = 0 ; i< 1000 ; ++i){
        ASSERT_EQ(addTwo(i,kSecondInput), boostAdd(i));
    }
}

int main(int argc, char * argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

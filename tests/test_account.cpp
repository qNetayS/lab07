#include <gtest/gtest.h>
#include "Account.h"

TEST(AccountTest, ConstructorInitializesBalance) {
    Account acc("123", 100.0);
    EXPECT_EQ(acc.getBalance(), 100.0);
}

TEST(AccountTest, DepositIncreasesBalance) {
    Account acc("123", 100.0);
    acc.deposit(50.0);
    EXPECT_EQ(acc.getBalance(), 150.0);
}

TEST(AccountTest, WithdrawDecreasesBalance) {
    Account acc("123", 100.0);
    acc.withdraw(30.0);
    EXPECT_EQ(acc.getBalance(), 70.0);
}

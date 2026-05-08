#include <gtest/gtest.h>
#include "Account.h"
#include "Transaction.h"

TEST(TransactionTest, ExecuteTransfersMoney) {
    Account from("A", 100.0);
    Account to("B", 0.0);
    Transaction tx("A", "B", 50.0);
    
    bool success = tx.execute(from, to);
    
    EXPECT_TRUE(success);
    EXPECT_EQ(from.getBalance(), 50.0);
    EXPECT_EQ(to.getBalance(), 50.0);
}

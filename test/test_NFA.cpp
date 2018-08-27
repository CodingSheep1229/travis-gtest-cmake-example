#include <iostream>
#include <string>
#include "gtest/gtest.h"

#include "NFA.h"

TEST(NFA, nfa1) {
	string in = "2 1 3 3\nq0 q1\nq0\nq1\na b c\nq0 a q1\nq1 b q1\nq1 c q1";
	string out = "(declare-const r_a Int)\n(declare-const x_q0_a_q1 Int)\n(declare-const r_b Int)\n(declare-const x_q1_b_q1 Int)\n(declare-const r_c Int)\n(declare-const x_q1_c_q1 Int)\n(declare-const out_q0 Int)\n(declare-const out_q1 Int)\n(declare-const in_q0 Int)\n(declare-const in_q1 Int)\n(declare-const start_q0 Bool)\n(declare-const start_q1 Bool)\n(declare-const t_q0 Int)\n(declare-const t_q1 Int)\n(declare-const flag_q0_1 Bool)\n(declare-const flag_q0_2 Bool)\n(declare-const flag_q0_3 Bool)\n(declare-const flag_q1_1 Bool)\n(declare-const flag_q1_2 Bool)\n(declare-const flag_q1_3 Bool)\n(assert (>= r_a 0))\n(assert (>= x_q0_a_q1 0))\n(assert (>= r_b 0))\n(assert (>= x_q1_b_q1 0))\n(assert (>= r_c 0))\n(assert (>= x_q1_c_q1 0))\n(assert (>= out_q0 0))\n(assert (>= out_q1 0))\n(assert (>= in_q0 0))\n(assert (>= in_q1 0))\n(assert (>= t_q0 0))\n(assert (<= t_q0 1))\n(assert (>= t_q1 0))\n(assert (<= t_q1 1))\n(assert (and (and (and (and (and (and (and (and (and (and (and (and (and (and (and (and (and (and (= r_a x_q0_a_q1 )(= r_b x_q1_b_q1 ))(= r_c x_q1_c_q1 ))(= out_q0 x_q0_a_q1 ))(= out_q1 (+ x_q1_b_q1 x_q1_c_q1 )))(= in_q0 0 ))(= in_q1 (+ x_q0_a_q1 (+ x_q1_b_q1 x_q1_c_q1 ))))start_q0 )(not  start_q1 ))(= t_q0 0 ))(= 1 t_q1 ))(or (or flag_q0_1 flag_q0_2 )flag_q0_3 ))(= flag_q0_1 (and (and (not start_q0  )(= t_q0 1 ))(= in_q0 (+ out_q0 1 )))))(= flag_q0_2 (and (and start_q0 (= t_q0 0 ))(= in_q0 (- out_q0 1 )))))(= flag_q0_3 (and (= in_q0 out_q0 )(not (xor start_q0 (= t_q0 1 )) ))))(or (or flag_q1_1 flag_q1_2 )flag_q1_3 ))(= flag_q1_1 (and (and (not start_q1  )(= t_q1 1 ))(= in_q1 (+ out_q1 1 )))))(= flag_q1_2 (and (and start_q1 (= t_q1 0 ))(= in_q1 (- out_q1 1 )))))(= flag_q1_3 (and (= in_q1 out_q1 )(not (xor start_q1 (= t_q1 1 )) )))))\n(check-sat)\n(get-model)";
	EXPECT_EQ(in,out);
}


// The fixture for testing class Project1. From google test primer.
class NFA : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	NFA() {
		// You can do set-up work for each test here.
	}

	virtual ~NFA() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for Project1.
	Project1 p;
};

// Test case must be called the class above
// Also note: use TEST_F instead of TEST to access the test fixture (from google test primer)


// }  // namespace - could surround NFA in a namespace
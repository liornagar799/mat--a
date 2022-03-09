#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good input") {
	CHECK(nospaces(mat(9, 7, '#', '-')) == nospaces("#########\n"
													"#-------#\n"
													"#-#####-#\n"
													"#-#---#-#\n"
													"#-#####-#\n"
													"#-------#\n"
													"#########"));

    CHECK(nospaces(mat(13, 5, '@', '-')) == nospaces("@@@@@@@@@@@@@\n"
													"@-----------@\n"
													"@-@@@@@@@@@-@\n"
													"@-----------@\n"
													"@@@@@@@@@@@@@"));

    CHECK(nospaces(mat(3, 5, '$', '+')) == nospaces("$$$\n"
													"$+$\n"
													"$+$\n"
													"$+$\n"
													"$$$"));

    CHECK(nospaces(mat(1, 1, '#', ')')) == nospaces("#"));


    CHECK(nospaces(mat(3, 3, '@', ')')) == nospaces("@@@\n"
                                                    "@)@\n"
                                                    "@@@"));																								

    CHECK(nospaces(mat(5, 7, '-', '@')) == nospaces("-----\n"
													"-@@@-\n"
													"-@-@-\n"
                                                    "-@-@-\n"
                                                    "-@-@-\n"
													"-@@@-\n"
													"-----"));

    CHECK(nospaces(mat(5, 5, '-', '-')) == nospaces("-----\n"
													"-----\n"
                                                    "-----\n"
													"-----\n"
													"-----"));

    CHECK(nospaces(mat(5, 7, '1', '0')) == nospaces("11111\n"
													"10001\n"
													"10101\n"
                                                    "10101\n"
                                                    "10101\n"
													"10001\n"
													"11111"));

    CHECK(nospaces(mat(9, 5, '#', '-')) == nospaces("#########\n"
													"#-------#\n"
													"#-#####-#\n"
													"#-------#\n"
													"#########"));

    CHECK(nospaces(mat(11, 7, '#', '-')) == nospaces("###########\n"
													"#---------#\n"
													"#-#######-#\n"
													"#-#-----#-#\n"
													"#-#######-#\n"
													"#---------#\n"
													"###########"));  

    CHECK(nospaces(mat(9, 7, '!', '-')) == nospaces("!!!!!!!!!\n"
													"!-------!\n"
													"!-!!!!!-!\n"
													"!-!---!-!\n"
													"!-!!!!!-!\n"
													"!-------!\n"
													"!!!!!!!!!"));                                                                                              

    CHECK(nospaces(mat(15, 5, '@', '-')) == nospaces("@@@@@@@@@@@@@@@\n"
													 "@-------------@\n"
													 "@-@@@@@@@@@@@-@\n"
													 "@-------------@\n"
													 "@@@@@@@@@@@@@@@"));


    CHECK(nospaces(mat(3, 3, '$', '+')) == nospaces("$$$\n"
													"$+$\n"
													"$$$"));

    CHECK(nospaces(mat(1, 1, '@', ')')) == nospaces("@"));

    CHECK(nospaces(mat(3, 3, '-', ')')) == nospaces("---\n"
                                                    "-)-\n"
                                                    "---"));

	CHECK(nospaces(mat(5, 3, '^', '&')) == nospaces("^^^^^\n"
                                                    "^&&&^\n"
                                                    "^^^^^"));												
													 

    CHECK(nospaces(mat(7, 7, 'x', '@')) == nospaces("xxxxxxx\n"
													"x@@@@@x\n"
													"x@xxx@x\n"
                                                    "x@x@x@x\n"
                                                    "x@xxx@x\n"
													"x@@@@@x\n"
													"xxxxxxx"));

    CHECK(nospaces(mat(3, 5, 'y', 'y')) == nospaces("yyy\n"
													"yyy\n"
													"yyy\n"
													"yyy\n"
													"yyy"));

    CHECK(nospaces(mat(5, 7, 'T', 'O')) == nospaces("TTTTT\n"
													"TOOOT\n"
													"TOTOT\n"
                                                    "TOTOT\n"
                                                    "TOTOT\n"
													"TOOOT\n"
													"TTTTT"));                                                                                                  

		

	CHECK(nospaces(mat(15, 13, '@', '*')) ==nospaces("@@@@@@@@@@@@@@@\n"
									    			 "@*************@\n"
												     "@*@@@@@@@@@@@*@\n"
												     "@*@*********@*@\n"
                                                     "@*@*@@@@@@@*@*@\n"
												     "@*@*@*****@*@*@\n"
												     "@*@*@*@@@*@*@*@\n"
												     "@*@*@*****@*@*@\n"       
												     "@*@*@@@@@@@*@*@\n"
                                                     "@*@*********@*@\n"
												     "@*@@@@@@@@@@@*@\n"
											         "@*************@\n"
												     "@@@@@@@@@@@@@@@"));												


										


                                                                                          
                                              
}
TEST_CASE("Bad input") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
    CHECK_THROWS(mat(0, 0, '$', '%'));   
    CHECK_THROWS(mat(-1, 5, '$', '%'));
    CHECK_THROWS(mat(10, -1, '-', '%'));
    CHECK_THROWS(mat(-5, -1, '$', '%'));
	CHECK_THROWS(mat(13, 6, '$', '%'));
   
}

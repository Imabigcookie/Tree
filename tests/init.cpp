#include <bintree.hpp>
#include <catch.hpp>

SCENARIO(" Zero ") 
{
tree <int> test;
REQUIRE(root_.test() == nullptr);
REQUIRE(get_count.test() == 0);	
}
SCENARIO(" 1 ")
{
  tree <int> test;
  test.ins_node(7);
  REQUIRE(test.get_count() == 1);
  REQUIRE(test.find_node(7, test.root_())->key == 7);
}

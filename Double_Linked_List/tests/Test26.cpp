#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../DoubleLinkedList.hpp"
#include "doctest.h"

TEST_CASE("Iterator equality operator") {
  DoubleLinkedList<int> list1;
  list1.push_back(1);
  list1.push_back(2);
  list1.push_back(3);

  DoubleLinkedList<int> list2;
  list2.push_back(1);
  list2.push_back(2);
  list2.push_back(3);

  DoubleLinkedList<int> list3;
  list3.push_back(4);
  list3.push_back(5);
  list3.push_back(6);

  auto it1 = list1.begin();
  auto it2 = list1.begin();
  CHECK(it1 == it2);

  // Test equality of iterators pointing to different elements
  it1 = list1.begin();
  it2 = list1.end();
  CHECK_FALSE(it1 == it2);

}

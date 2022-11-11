#include "pch.h"
//#include "../Stack/Deque.h"
//#include "../Stack/Queue.h"
#include "../Stack/StackArray.h"
#include "../Stack/StackList.h"


auto stackArray = Stack();
auto stackList = StackList();

TEST(StackArray, IsEmpty) 
{
	EXPECT_EQ(stackArray.IsEmpty(), 1);
}

TEST(StackArray, Pop)
{
	stackArray.Push(1);
	EXPECT_EQ(stackArray.Pop(), 1);
	EXPECT_EQ(stackArray.IsEmpty(), 1);
}

TEST(StackArray, Push )
{
	stackArray.Push(1);
	EXPECT_EQ(stackArray.IsEmpty(), 0);
}

TEST(StackList, Push)
{
	stackList.AddTail(4);
	EXPECT_EQ(stackList.IsEmpty(), 0);	
}
TEST(StackList, Push)
{
	stackList.AddTail(1);
	EXPECT_EQ(stackList.RemoveTail(), 1);
}

TEST(StackList, Push)
{

}

TEST(StackList, Push)
{

}

TEST(StackList, Push)
{

}











//TEST(StackList, Push)
//{
//
//}
/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      CMock_Init(); \
      setUp(); \
      TestFunc(); \
      CMock_Verify(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  CMock_Destroy(); \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "mock_StringObject.h"
#include "mock_Token.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_tryToPushOperatorAndEvaluate_given_plus_should_push_to_stack(void);
extern void test_tryToPushOperatorAndEvaluate_given_plus_multi_should_push_to_stack(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_StringObject_Init();
  mock_Token_Init();
}
static void CMock_Verify(void)
{
  mock_StringObject_Verify();
  mock_Token_Verify();
}
static void CMock_Destroy(void)
{
  mock_StringObject_Destroy();
  mock_Token_Destroy();
}

//=======Test Reset Option=====
void resetTest()
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_Evaluate.c";
  UnityBegin();
  RUN_TEST(test_tryToPushOperatorAndEvaluate_given_plus_should_push_to_stack, 23);
  RUN_TEST(test_tryToPushOperatorAndEvaluate_given_plus_multi_should_push_to_stack, 38);

  return (UnityEnd());
}

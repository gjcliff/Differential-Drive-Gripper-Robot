/*lint -e???? -save */
/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_nrf_802154_priority_drop.h"

typedef struct _CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE;

static struct mock_nrf_802154_priority_dropInstance
{
  int nrf_802154_priority_drop_init_IgnoreBool;
  CMOCK_nrf_802154_priority_drop_init_CALLBACK nrf_802154_priority_drop_init_CallbackFunctionPointer;
  int nrf_802154_priority_drop_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_priority_drop_init_CallInstance;
  int nrf_802154_priority_drop_hfclk_stop_IgnoreBool;
  CMOCK_nrf_802154_priority_drop_hfclk_stop_CALLBACK nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer;
  int nrf_802154_priority_drop_hfclk_stop_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_priority_drop_hfclk_stop_CallInstance;
  int nrf_802154_priority_drop_hfclk_stop_terminate_IgnoreBool;
  CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALLBACK nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer;
  int nrf_802154_priority_drop_hfclk_stop_terminate_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_nrf_802154_priority_drop_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_priority_drop_init_CallInstance, cmock_line, "Function 'nrf_802154_priority_drop_init' called less times than expected.");
  if (Mock.nrf_802154_priority_drop_init_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_priority_drop_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance, cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop' called less times than expected.");
  if (Mock.nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance, cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop_terminate' called less times than expected.");
  if (Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance = CMOCK_GUTS_NONE;
}

void mock_nrf_802154_priority_drop_Init(void)
{
  mock_nrf_802154_priority_drop_Destroy();
}

void mock_nrf_802154_priority_drop_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.nrf_802154_priority_drop_init_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_priority_drop_init_CallbackCalls = 0;
  Mock.nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_priority_drop_hfclk_stop_CallbackCalls = 0;
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void nrf_802154_priority_drop_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_priority_drop_init_CallInstance);
  Mock.nrf_802154_priority_drop_init_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_priority_drop_init_CallInstance);
  if (Mock.nrf_802154_priority_drop_init_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_priority_drop_init_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_priority_drop_init_CallbackFunctionPointer(Mock.nrf_802154_priority_drop_init_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_priority_drop_init' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_init' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_init' called later than expected.");
}

void nrf_802154_priority_drop_init_CMockIgnore(void)
{
  Mock.nrf_802154_priority_drop_init_IgnoreBool = (int)1;
}

void nrf_802154_priority_drop_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE));
  CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_priority_drop_init_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_priority_drop_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_priority_drop_init_StubWithCallback(CMOCK_nrf_802154_priority_drop_init_CALLBACK Callback)
{
  Mock.nrf_802154_priority_drop_init_CallbackFunctionPointer = Callback;
}

void nrf_802154_priority_drop_hfclk_stop(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance);
  Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance);
  if (Mock.nrf_802154_priority_drop_hfclk_stop_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer(Mock.nrf_802154_priority_drop_hfclk_stop_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop' called later than expected.");
}

void nrf_802154_priority_drop_hfclk_stop_CMockIgnore(void)
{
  Mock.nrf_802154_priority_drop_hfclk_stop_IgnoreBool = (int)1;
}

void nrf_802154_priority_drop_hfclk_stop_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE));
  CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_hfclk_stop_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_priority_drop_hfclk_stop_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_priority_drop_hfclk_stop_StubWithCallback(CMOCK_nrf_802154_priority_drop_hfclk_stop_CALLBACK Callback)
{
  Mock.nrf_802154_priority_drop_hfclk_stop_CallbackFunctionPointer = Callback;
}

void nrf_802154_priority_drop_hfclk_stop_terminate(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance);
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance);
  if (Mock.nrf_802154_priority_drop_hfclk_stop_terminate_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer(Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop_terminate' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop_terminate' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_priority_drop_hfclk_stop_terminate' called later than expected.");
}

void nrf_802154_priority_drop_hfclk_stop_terminate_CMockIgnore(void)
{
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_IgnoreBool = (int)1;
}

void nrf_802154_priority_drop_hfclk_stop_terminate_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE));
  CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_priority_drop_hfclk_stop_terminate_StubWithCallback(CMOCK_nrf_802154_priority_drop_hfclk_stop_terminate_CALLBACK Callback)
{
  Mock.nrf_802154_priority_drop_hfclk_stop_terminate_CallbackFunctionPointer = Callback;
}

/* lint -restore */

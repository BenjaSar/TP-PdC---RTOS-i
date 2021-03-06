/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_MEFDEC.h"

static const char* CMockString_DEC_Init = "DEC_Init";
static const char* CMockString__sleep_idle = "_sleep_idle";
static const char* CMockString_cmock_arg1 = "cmock_arg1";
static const char* CMockString_cmock_arg2 = "cmock_arg2";
static const char* CMockString_fsmDECInit = "fsmDECInit";
static const char* CMockString_fsmDECUpdate = "fsmDECUpdate";
static const char* CMockString_fsmgetstate = "fsmgetstate";
static const char* CMockString_pDEC_Update = "pDEC_Update";
static const char* CMockString_pDEC_state = "pDEC_state";

typedef struct _CMOCK_fsmDECInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  DataDEC_t* Expected_cmock_arg1;
  gpioMap_t Expected_cmock_arg2;

} CMOCK_fsmDECInit_CALL_INSTANCE;

typedef struct _CMOCK_fsmDECUpdate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  DataDEC_t* Expected_cmock_arg1;

} CMOCK_fsmDECUpdate_CALL_INSTANCE;

typedef struct _CMOCK_DEC_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_DEC_Init_CALL_INSTANCE;

typedef struct _CMOCK__sleep_idle_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool_t ReturnVal;
  int CallOrder;
  DataDEC_t* Expected_pDEC_Update;

} CMOCK__sleep_idle_CALL_INSTANCE;

typedef struct _CMOCK_fsmgetstate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  fsmDEC_t ReturnVal;
  int CallOrder;
  DataDEC_t* Expected_pDEC_state;

} CMOCK_fsmgetstate_CALL_INSTANCE;

static struct mock_MEFDECInstance
{
  int fsmDECInit_IgnoreBool;
  CMOCK_fsmDECInit_CALLBACK fsmDECInit_CallbackFunctionPointer;
  int fsmDECInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE fsmDECInit_CallInstance;
  int fsmDECUpdate_IgnoreBool;
  CMOCK_fsmDECUpdate_CALLBACK fsmDECUpdate_CallbackFunctionPointer;
  int fsmDECUpdate_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE fsmDECUpdate_CallInstance;
  int DEC_Init_IgnoreBool;
  CMOCK_DEC_Init_CALLBACK DEC_Init_CallbackFunctionPointer;
  int DEC_Init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE DEC_Init_CallInstance;
  int _sleep_idle_IgnoreBool;
  bool_t _sleep_idle_FinalReturn;
  CMOCK__sleep_idle_CALLBACK _sleep_idle_CallbackFunctionPointer;
  int _sleep_idle_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE _sleep_idle_CallInstance;
  int fsmgetstate_IgnoreBool;
  fsmDEC_t fsmgetstate_FinalReturn;
  CMOCK_fsmgetstate_CALLBACK fsmgetstate_CallbackFunctionPointer;
  int fsmgetstate_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE fsmgetstate_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_MEFDEC_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.fsmDECInit_IgnoreBool)
    Mock.fsmDECInit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_fsmDECInit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.fsmDECInit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.fsmDECInit_CallbackFunctionPointer != NULL)
    Mock.fsmDECInit_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.fsmDECUpdate_IgnoreBool)
    Mock.fsmDECUpdate_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_fsmDECUpdate);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.fsmDECUpdate_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.fsmDECUpdate_CallbackFunctionPointer != NULL)
    Mock.fsmDECUpdate_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.DEC_Init_IgnoreBool)
    Mock.DEC_Init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_DEC_Init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.DEC_Init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.DEC_Init_CallbackFunctionPointer != NULL)
    Mock.DEC_Init_CallInstance = CMOCK_GUTS_NONE;
  if (Mock._sleep_idle_IgnoreBool)
    Mock._sleep_idle_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString__sleep_idle);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock._sleep_idle_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock._sleep_idle_CallbackFunctionPointer != NULL)
    Mock._sleep_idle_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.fsmgetstate_IgnoreBool)
    Mock.fsmgetstate_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_fsmgetstate);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.fsmgetstate_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.fsmgetstate_CallbackFunctionPointer != NULL)
    Mock.fsmgetstate_CallInstance = CMOCK_GUTS_NONE;
}

void mock_MEFDEC_Init(void)
{
  mock_MEFDEC_Destroy();
}

void mock_MEFDEC_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.fsmDECInit_CallbackFunctionPointer = NULL;
  Mock.fsmDECInit_CallbackCalls = 0;
  Mock.fsmDECUpdate_CallbackFunctionPointer = NULL;
  Mock.fsmDECUpdate_CallbackCalls = 0;
  Mock.DEC_Init_CallbackFunctionPointer = NULL;
  Mock.DEC_Init_CallbackCalls = 0;
  Mock._sleep_idle_CallbackFunctionPointer = NULL;
  Mock._sleep_idle_CallbackCalls = 0;
  Mock.fsmgetstate_CallbackFunctionPointer = NULL;
  Mock.fsmgetstate_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void fsmDECInit(DataDEC_t* cmock_arg1, gpioMap_t cmock_arg2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fsmDECInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fsmDECInit);
  cmock_call_instance = (CMOCK_fsmDECInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fsmDECInit_CallInstance);
  Mock.fsmDECInit_CallInstance = CMock_Guts_MemNext(Mock.fsmDECInit_CallInstance);
  if (Mock.fsmDECInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.fsmDECInit_CallbackFunctionPointer != NULL)
  {
    Mock.fsmDECInit_CallbackFunctionPointer(cmock_arg1, cmock_arg2, Mock.fsmDECInit_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_fsmDECInit,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_cmock_arg1), (void*)(cmock_arg1), sizeof(DataDEC_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_fsmDECInit,CMockString_cmock_arg2);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_cmock_arg2), (void*)(&cmock_arg2), sizeof(gpioMap_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_fsmDECInit(CMOCK_fsmDECInit_CALL_INSTANCE* cmock_call_instance, DataDEC_t* cmock_arg1, gpioMap_t cmock_arg2)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
  memcpy(&cmock_call_instance->Expected_cmock_arg2, &cmock_arg2, sizeof(gpioMap_t));
}

void fsmDECInit_CMockIgnore(void)
{
  Mock.fsmDECInit_IgnoreBool = (int)1;
}

void fsmDECInit_CMockExpect(UNITY_LINE_TYPE cmock_line, DataDEC_t* cmock_arg1, gpioMap_t cmock_arg2)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fsmDECInit_CALL_INSTANCE));
  CMOCK_fsmDECInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_fsmDECInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fsmDECInit_CallInstance = CMock_Guts_MemChain(Mock.fsmDECInit_CallInstance, cmock_guts_index);
  Mock.fsmDECInit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_fsmDECInit(cmock_call_instance, cmock_arg1, cmock_arg2);
  UNITY_CLR_DETAILS();
}

void fsmDECInit_StubWithCallback(CMOCK_fsmDECInit_CALLBACK Callback)
{
  Mock.fsmDECInit_IgnoreBool = (int)0;
  Mock.fsmDECInit_CallbackFunctionPointer = Callback;
}

void fsmDECUpdate(DataDEC_t* cmock_arg1)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fsmDECUpdate_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fsmDECUpdate);
  cmock_call_instance = (CMOCK_fsmDECUpdate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fsmDECUpdate_CallInstance);
  Mock.fsmDECUpdate_CallInstance = CMock_Guts_MemNext(Mock.fsmDECUpdate_CallInstance);
  if (Mock.fsmDECUpdate_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.fsmDECUpdate_CallbackFunctionPointer != NULL)
  {
    Mock.fsmDECUpdate_CallbackFunctionPointer(cmock_arg1, Mock.fsmDECUpdate_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_fsmDECUpdate,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_cmock_arg1), (void*)(cmock_arg1), sizeof(DataDEC_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_fsmDECUpdate(CMOCK_fsmDECUpdate_CALL_INSTANCE* cmock_call_instance, DataDEC_t* cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void fsmDECUpdate_CMockIgnore(void)
{
  Mock.fsmDECUpdate_IgnoreBool = (int)1;
}

void fsmDECUpdate_CMockExpect(UNITY_LINE_TYPE cmock_line, DataDEC_t* cmock_arg1)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fsmDECUpdate_CALL_INSTANCE));
  CMOCK_fsmDECUpdate_CALL_INSTANCE* cmock_call_instance = (CMOCK_fsmDECUpdate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fsmDECUpdate_CallInstance = CMock_Guts_MemChain(Mock.fsmDECUpdate_CallInstance, cmock_guts_index);
  Mock.fsmDECUpdate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_fsmDECUpdate(cmock_call_instance, cmock_arg1);
  UNITY_CLR_DETAILS();
}

void fsmDECUpdate_StubWithCallback(CMOCK_fsmDECUpdate_CALLBACK Callback)
{
  Mock.fsmDECUpdate_IgnoreBool = (int)0;
  Mock.fsmDECUpdate_CallbackFunctionPointer = Callback;
}

void DEC_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_DEC_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_DEC_Init);
  cmock_call_instance = (CMOCK_DEC_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.DEC_Init_CallInstance);
  Mock.DEC_Init_CallInstance = CMock_Guts_MemNext(Mock.DEC_Init_CallInstance);
  if (Mock.DEC_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.DEC_Init_CallbackFunctionPointer != NULL)
  {
    Mock.DEC_Init_CallbackFunctionPointer(Mock.DEC_Init_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void DEC_Init_CMockIgnore(void)
{
  Mock.DEC_Init_IgnoreBool = (int)1;
}

void DEC_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_DEC_Init_CALL_INSTANCE));
  CMOCK_DEC_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_DEC_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.DEC_Init_CallInstance = CMock_Guts_MemChain(Mock.DEC_Init_CallInstance, cmock_guts_index);
  Mock.DEC_Init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

void DEC_Init_StubWithCallback(CMOCK_DEC_Init_CALLBACK Callback)
{
  Mock.DEC_Init_IgnoreBool = (int)0;
  Mock.DEC_Init_CallbackFunctionPointer = Callback;
}

bool_t _sleep_idle(DataDEC_t* pDEC_Update)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK__sleep_idle_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString__sleep_idle);
  cmock_call_instance = (CMOCK__sleep_idle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock._sleep_idle_CallInstance);
  Mock._sleep_idle_CallInstance = CMock_Guts_MemNext(Mock._sleep_idle_CallInstance);
  if (Mock._sleep_idle_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock._sleep_idle_FinalReturn;
    Mock._sleep_idle_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock._sleep_idle_CallbackFunctionPointer != NULL)
  {
    return Mock._sleep_idle_CallbackFunctionPointer(pDEC_Update, Mock._sleep_idle_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString__sleep_idle,CMockString_pDEC_Update);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_pDEC_Update), (void*)(pDEC_Update), sizeof(DataDEC_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters__sleep_idle(CMOCK__sleep_idle_CALL_INSTANCE* cmock_call_instance, DataDEC_t* pDEC_Update)
{
  cmock_call_instance->Expected_pDEC_Update = pDEC_Update;
}

void _sleep_idle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK__sleep_idle_CALL_INSTANCE));
  CMOCK__sleep_idle_CALL_INSTANCE* cmock_call_instance = (CMOCK__sleep_idle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock._sleep_idle_CallInstance = CMock_Guts_MemChain(Mock._sleep_idle_CallInstance, cmock_guts_index);
  Mock._sleep_idle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock._sleep_idle_IgnoreBool = (int)1;
}

void _sleep_idle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, DataDEC_t* pDEC_Update, bool_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK__sleep_idle_CALL_INSTANCE));
  CMOCK__sleep_idle_CALL_INSTANCE* cmock_call_instance = (CMOCK__sleep_idle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock._sleep_idle_CallInstance = CMock_Guts_MemChain(Mock._sleep_idle_CallInstance, cmock_guts_index);
  Mock._sleep_idle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters__sleep_idle(cmock_call_instance, pDEC_Update);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void _sleep_idle_StubWithCallback(CMOCK__sleep_idle_CALLBACK Callback)
{
  Mock._sleep_idle_IgnoreBool = (int)0;
  Mock._sleep_idle_CallbackFunctionPointer = Callback;
}

fsmDEC_t fsmgetstate(DataDEC_t* pDEC_state)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fsmgetstate_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fsmgetstate);
  cmock_call_instance = (CMOCK_fsmgetstate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fsmgetstate_CallInstance);
  Mock.fsmgetstate_CallInstance = CMock_Guts_MemNext(Mock.fsmgetstate_CallInstance);
  if (Mock.fsmgetstate_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.fsmgetstate_FinalReturn;
    memcpy(&Mock.fsmgetstate_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(fsmDEC_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.fsmgetstate_CallbackFunctionPointer != NULL)
  {
    return Mock.fsmgetstate_CallbackFunctionPointer(pDEC_state, Mock.fsmgetstate_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_fsmgetstate,CMockString_pDEC_state);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_pDEC_state), (void*)(pDEC_state), sizeof(DataDEC_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fsmgetstate(CMOCK_fsmgetstate_CALL_INSTANCE* cmock_call_instance, DataDEC_t* pDEC_state)
{
  cmock_call_instance->Expected_pDEC_state = pDEC_state;
}

void fsmgetstate_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, fsmDEC_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fsmgetstate_CALL_INSTANCE));
  CMOCK_fsmgetstate_CALL_INSTANCE* cmock_call_instance = (CMOCK_fsmgetstate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fsmgetstate_CallInstance = CMock_Guts_MemChain(Mock.fsmgetstate_CallInstance, cmock_guts_index);
  Mock.fsmgetstate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.fsmgetstate_IgnoreBool = (int)1;
}

void fsmgetstate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, DataDEC_t* pDEC_state, fsmDEC_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fsmgetstate_CALL_INSTANCE));
  CMOCK_fsmgetstate_CALL_INSTANCE* cmock_call_instance = (CMOCK_fsmgetstate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fsmgetstate_CallInstance = CMock_Guts_MemChain(Mock.fsmgetstate_CallInstance, cmock_guts_index);
  Mock.fsmgetstate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_fsmgetstate(cmock_call_instance, pDEC_state);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(fsmDEC_t));
  UNITY_CLR_DETAILS();
}

void fsmgetstate_StubWithCallback(CMOCK_fsmgetstate_CALLBACK Callback)
{
  Mock.fsmgetstate_IgnoreBool = (int)0;
  Mock.fsmgetstate_CallbackFunctionPointer = Callback;
}


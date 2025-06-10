#pragma once

#include <iostream>
//#include <pigpio.h>
#include <string>
extern "C"
{
#include <CmndLib/CmndLib.h>
#include "main_extern.h"
}

namespace simpleDect {
// Minimum time to detect button pressed
static constexpr auto BUTTON_ACTIVE_TIME = 10;
static constexpr auto EXAMPLE_UART_SEND_TIMEOUT_MS = 100;
// The raw data unit and interface
static constexpr auto DSPG_RAW_DATA_UNIT_NUMBER = 3;
static constexpr auto DSPG_RAW_DATA_INTERFACE_ID = 0x7f16;
} // namespace simpleDect

enum class ButtonState
{
    Initial, // initial state
    Pending  // pending
};

enum class ButtonMovement
{
    NoChange,
    Pressed
};

struct Button
{
    u64         startTicks;
    bool        pressed;
    ButtonState state;
};

// Handle button state change
//static ButtonMovement p_HandleButton(Button* pst_Button, bool CurrentState);

// Send raw FUN message with up to 128 bytes to remote
static bool ExampleSendRawFunMessage(u16 g_DeviceId, u8* pu8_Data, u16 u16_DataSize);

// handler for Hello indication from DU-EB
static void ExampleHandleHelloInd(t_st_Msg* pst_Msg);

// handler for Link Confirm from DU-EB
static void ExampleHandleLinkCfm(t_st_Msg* pst_Msg);

// handler for FUN Message receive indication
void ExampleHandleFunRecvInd(t_st_Msg* pst_Msg);

// initialize context to zeros
static void ExampleInitParserContext(void);

// example function for writing a buffer to uart port + logging the buffer
// static HAL_StatusTypeDef ExampleUartWrite(void* buffer, size_t bufferSize);

// LED control to indicate success or failure
static void ExampleSuccessIndication(void);
static void ExampleFailureIndication(u8 u8_Count);

// global state
static int g_Registered;
static int g_DeviceId;

// holds incoming CMND Message
static t_st_Msg        g_st_Msg;
static t_stReceiveData g_ParserContext;
Button                 g_st_Button;

static u8 g_SendResult;
static u8 g_RawDataLen;
static u8 g_RawData[40];

static int g_GotLinkCfmResponse;
static int g_GotRawFunReceiveInd;
static int g_GotHelloInd;

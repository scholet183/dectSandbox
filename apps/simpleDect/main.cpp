//#include <rawDataExampleLib/core/lib.hpp>
#include <pigpio.h>

int main([[maybe_unused]] int argc, [[maybe_unused]] char** argv)
{
 //   std::print("\n");
 //   std::print("RawData Example Started\n");
 //   std::print("\n");
 //
 //   // Initialize Parser Context
 //   //ExampleInitParserContext();
 //
 //   // Start booting the DU-EB by asserting GPIOA8 (connected to RST_N)
 //   // Setze den Pin als Ausgang
 //   pinMode(RST_N_PIN, OUTPUT);
 //
 //   // Warte 100 ms
 //   std::this_thread::sleep_for(std::chrono::milliseconds(100));
 //
 //   // Setze GPIO14 (RST_N) auf HIGH
 //   digitalWrite(RST_N_PIN, HIGH);
 //
 //   // Infinite loop that waits for button press and executes an action
 //   while (1)
 //   {
 //       t_en_ButtonMovement en_ButtonMovement = BUTTON_NOCHANGE;
 //
 //       // this is the first message received, once the DU-EB finished booting
 //       // following a power-on-reset or a software reset
 //       if (g_GotHelloInd != 0)
 //       {
 //           std::print("Got Hello World indication\n");
 //           g_GotHelloInd = 0;
 //
 //           if (!g_Registered)
 //           {
 //               log_warn("Device not registered, please register\n");
 //               ExampleFailureIndication(1);
 //           }
 //       }
 //
 //       if (g_GotLinkCfmResponse != 0)
 //       {
 //           std::print("Got LinkCfm response, result = 0x%x\n", g_SendResult);
 //           g_GotLinkCfmResponse = 0;
 //
 //           if (g_SendResult == 0) { ExampleSuccessIndication(); }
 //           else { ExampleFailureIndication(3); }
 //       }
 //
 //       if (g_GotRawFunReceiveInd != 0)
 //       {
 //           char buf[g_RawDataLen + 1];
 //
 //           memcpy(buf, g_RawData, g_RawDataLen);
 //           buf[g_RawDataLen] = '\0';
 //
 //           std::print("Got Raw FUN message: '%s'\n", buf);
 //
 //           g_GotRawFunReceiveInd = 0;
 //           ExampleSuccessIndication();
 //       }
 //
 //       // Detect button state change
 //       en_ButtonMovement = p_HandleButton(&g_st_Button, !HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin));
 //
 //       if (en_ButtonMovement == BUTTON_PRESSED)
 //       {
 //           // If device registered
 //           if (g_Registered)
 //           {
 //               // Send Raw FUN message
 //               u8 u8_RawData[] = "Hello, World!";
 //               std::print("Send raw FUN request\n");
 //               ExampleSendRawFunMessage(g_DeviceId, u8_RawData, sizeof(u8_RawData) - 1);
 //           }
 //           else
 //           {
 //               log_warn("Device not registered\n");
 //               ExampleFailureIndication(1);
 //           }
 //       }
 //   }
    return 0;
}
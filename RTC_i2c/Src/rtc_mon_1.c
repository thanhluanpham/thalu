#include "rtc_mon_1.h"
#include "ssd1306_tests.h"
#include "ssd1306.h"
void RTC_Mon(RTC_TimeTypeDef* sTime){
    char buff[64];
    char buff2[64];
    char buff3[64];
    snprintf(buff, sizeof(buff), "%02d",sTime->Seconds);
    snprintf(buff2, sizeof(buff2), "%02d:",sTime->Minutes);
    snprintf(buff3, sizeof(buff3), "%02d:",sTime->Hours);
    ssd1306_Fill(White);
    ssd1306_SetCursor(22,22);
    ssd1306_WriteString(buff3, Font_11x18, Black);
    ssd1306_SetCursor(55,22);
    ssd1306_WriteString(buff2, Font_11x18, Black);
    ssd1306_SetCursor(84,22);
    ssd1306_WriteString(buff, Font_11x18, Black);
    ssd1306_UpdateScreen();
}

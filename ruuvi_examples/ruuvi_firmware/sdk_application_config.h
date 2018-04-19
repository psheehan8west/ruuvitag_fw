#ifndef SDK_APPLICATION_CONFIG_H
#define SDK_APPLICATION_CONFIG_H

// Define any application-specific sdk configuration overrides here
#define PWM_ENABLED 0
#define PWM0_ENABLED 0
#define PWM1_ENABLED 0
#define APP_PWM_ENABLED 0
#define PPI_ENABLED 1
#define RTC_ENABLED 1
#define TIMER_ENABLED 1
#define TIMER0_ENABLED 1
#define TIMER1_ENABLED 1  //CSense
#define TIMER2_ENABLED 1  //CSense
#define TIMER3_ENABLED 1
#define TIMER4_ENABLED 0  //Required by NFC
#define NFC_HAL_ENABLED 1
#define CRC16_ENABLED 1   //Required by DFU
#define CRC32_ENABLED 1
#define NRF_LOG_ENABLED 0
#define APP_GATT_PROFILE_ENABLED 0
#define PEER_MANAGER_ENABLED 0
#define BLE_DIS_ENABLED 0
#define BLE_NUS_ENABLED 0
#define BLE_DFU_ENABLED 0

// WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> (ms)
// Watchdog cannot be stopped even when entering bootloader, 
// so use 6 minutes to allow DFU process to complete.
#ifndef WDT_CONFIG_RELOAD_VALUE
#define WDT_CONFIG_RELOAD_VALUE 360000 
#endif

#endif

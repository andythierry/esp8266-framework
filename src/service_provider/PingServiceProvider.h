/****************************** ping service **********************************
This file is part of the Ewings Esp8266 Stack.

This is free software. you can redistribute it and/or modify it but without any
warranty.

Author          : Suraj I.
created Date    : 1st June 2019
******************************************************************************/

#ifndef _PING_SERVICE_PROVIDER_H_
#define _PING_SERVICE_PROVIDER_H_


#include <ESP8266WiFi.h>
#include <config/Config.h>
#include <utility/Log.h>

extern "C" {
  #include <ping.h>
}

// This function is called when a ping is received or the request times out:
static void ICACHE_FLASH_ATTR ping_recv_cb(void* arg, void* pdata);

/**
 * PingServiceProvider class
 */
class PingServiceProvider{

  public:

    ping_option _opt;
    // bool host_resp;

    /**
     * PingServiceProvider constructor.
     */
    PingServiceProvider(){

      this->init_ping();
    }

    /**
     * initialize ping
     */
    void init_ping( void );
    bool ping( void );
    bool isHostRespondingToPing( void );
};

#endif

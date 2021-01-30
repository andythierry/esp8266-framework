/****************************** Web Resource **********************************
This file is part of the Ewings Esp8266 Stack.

This is free software. you can redistribute it and/or modify it but without any
warranty.

Author          : Suraj I.
created Date    : 1st June 2019
******************************************************************************/

#include "WebResource.h"

/**
 * WebResourceProvider constructor
 */
WebResourceProvider::WebResourceProvider():
  m_wifi(nullptr),
  m_server(nullptr),
  m_db_conn(nullptr)
{
}

/**
 * WebResourceProvider destructor
 */
WebResourceProvider::~WebResourceProvider(){
  this->m_server = nullptr;
  this->m_db_conn = nullptr;
  this->m_wifi = nullptr;
}

/**
 * collect resources for web services
 *
 * @param ESP8266WebServer* _server
 * @param ESP8266WiFiClass* _wifi
 */
void WebResourceProvider::collect_resource( ESP8266WebServer* _server, ESP8266WiFiClass* _wifi ){

  this->m_server = _server;
  this->m_db_conn = &__database_service;
  this->m_wifi = _wifi;
}

WebResourceProvider __web_resource;

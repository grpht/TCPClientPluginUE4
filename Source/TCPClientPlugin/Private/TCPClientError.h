// Copyright 2022. Elogen Co. All Rights Reserved.

#pragma once

enum TCPClientError
{
    TCP_No_Error = 0,
    Connect_AddressisNotValid,
    Connect_Closed,
    Connect_AlreadyConnected,
    Connect_CallbackIsNull,
    Connect_SockeSubsystemIsNull,
    Send_NotConnected,
    Send_CallbackIsNull,
    Recv_NotConnected,
    Recv_CallbackIsNull,
    Recv_ProhibitDoubleReceiving
};
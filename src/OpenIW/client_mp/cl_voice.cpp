//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int CL_CanWeConnectToClient(struct SessionData_s* session, const int ourClientNum, const int theirClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_CanClientTalkToAllClientsInList(struct SessionData_s* session, const int sender, const int clientBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_UpdateConnectivityBits(int localClientNum, struct SessionData_s* session, int connectivityBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SendPeerConnectivityTest(const int localClientNum, struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SendVoiceTestPackets(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SendPeerVoiceData(struct SessionData_s* session, const int localClientNum, const enum netsrc_t sock, const int clientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_ServerIsTheOnlyWayToTalkToClient(struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_FindGoodRouteForClientList(struct SessionData_s* session, int* routeList, const int clientBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_FindGoodRouteForClientNum(struct SessionData_s* session, int* routeList, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_BuildRouteList(struct SessionData_s* session, int localClientNum, int ourClientNum, int* routeList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_WriteVoicePacket(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoiceConnectionTestPacket(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoicePacket(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_IsPlayerTalking(struct SessionData_s* session, int localClientNum, int talkingClientIndex)
{

}

#endif // __UNIMPLEMENTED__

//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_msg()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct NetFieldList* MSG_GetStateFieldListForEntityType(const int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteReliableCommandToBuffer(const char* pszCommand, char* pszBuffer, int iBufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteOriginFloat(const int clientNum, struct msg_t* msg, int bits, float value, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteOriginZFloat(const int clientNum, struct msg_t* msg, float value, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MSG_ValuesAreEqual(const struct SnapshotInfo_s* snapInfo, int bits, const int* fromF, const int* toF)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_ShouldSendPSField(const struct SnapshotInfo_s* snapInfo, bool sendOriginAndVel, const struct playerState_s* ps, const struct playerState_s* oldPs, const struct NetField* field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEntityIndex(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int index, const int indexBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteLastChangedField(struct msg_t* msg, const int lastChangedFieldNum, int numFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaTime(const int clientNum, struct msg_t* msg, int timeBase, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_Write24BitFlag(const int clientNum, struct msg_t* msg, const int oldFlags, const int newFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteGroundEntityNum(const int clientNum, struct msg_t* msg, const int groundEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEventNum(const int clientNum, struct msg_t* msg, int eventNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEventParam(const int clientNum, struct msg_t* msg, int eventParam)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PacketEntityType MSG_GetPacketEntityTypeForEType(int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_CheckWritingEnoughBits(int value, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_GetBitCount(int bits, bool* estimate, int from, int to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaField(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const struct NetField* field, int fieldNum, bool forceSend)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaFields(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, unsigned char* from, unsigned char* to, int force, int numFields, const struct NetField* stateFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_WriteDeltaStruct(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, unsigned char* from, unsigned char* to, int force, int numFields, int indexBits, const struct NetField* stateFields, int bChangeBit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_WriteEntityDelta(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, int force, int numFields, int indexBits, const struct NetField* stateFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteEntityRemoval(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, unsigned char* from, int indexBits, bool changeBit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteEntityDeltaForEType(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, int eType, const struct entityState_s* from, const struct entityState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct entityState_s* from, const struct entityState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaArchivedEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct archivedEntity_s* from, const struct archivedEntity_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaClient(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct clientState_s* from, const struct clientState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaHudElems(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct hudelem_s* from, const struct hudelem_s* to, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaPlayerstate(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct playerState_s* from, const struct playerState_s* to)
{

}

#endif // __UNIMPLEMENTED__

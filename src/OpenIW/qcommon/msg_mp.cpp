//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int GetMinBitCountForNum(const unsigned int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_Init(struct msg_t* buf, unsigned char* data, int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_InitReadOnly(struct msg_t* buf, unsigned char* data, int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_InitReadOnlySplit(struct msg_t* buf, unsigned char* data, int length, unsigned char* data2, int length2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_BeginReading(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_Discard(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_GetByte(struct msg_t* msg, int where)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_GetBytes(struct msg_t* msg, int where, unsigned char* dest, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_GetUsedBitCount(const struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteBits(struct msg_t* msg, int value, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteBit0(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteBit1(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadBits(struct msg_t* msg, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadBit(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_WriteBitsCompress(bool trainHuffman, const unsigned char* from, unsigned char* to, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadBitsCompress(const unsigned char* from, unsigned char* to, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteByte(struct msg_t* msg, int c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteData(struct msg_t* buf, const void* data, int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteShort(struct msg_t* msg, int c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteLong(struct msg_t* msg, int c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteInt64(struct msg_t* msg, unsigned __int64 c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteString(struct msg_t* sb, const char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteBigString(struct msg_t* sb, const char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteAngle(struct msg_t* sb, float f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteAngle16(struct msg_t* sb, float f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadByte(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadShort(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadLong(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 MSG_ReadInt64(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* MSG_ReadString(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* MSG_ReadBigString(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* MSG_ReadStringLine(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float MSG_ReadAngle16(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ReadData(struct msg_t* msg, void* data, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKey(struct msg_t* msg, int key, int oldV, int newV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKey(struct msg_t* msg, int key, int oldV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteKey(struct msg_t* msg, int key, int newV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadKey(struct msg_t* msg, int key, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKeyByte(struct msg_t* msg, int key, int oldV, int newV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKeyByte(struct msg_t* msg, int key, int oldV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKeyShort(struct msg_t* msg, int key, int oldV, int newV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKeyShort(struct msg_t* msg, int key, int oldV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_SetDefaultUserCmd(struct playerState_s* ps, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, const struct usercmd_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ReadDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, struct usercmd_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ClearLastReferencedEntity(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaTime(struct msg_t* msg, int timeBase)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaGroundEntity(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEventField(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEventParamField(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_Read24BitFlag(struct msg_t* msg, const int oldFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float MSG_ReadOriginFloat(int bits, struct msg_t* msg, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float MSG_ReadOriginZFloat(struct msg_t* msg, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadEntityIndex(struct msg_t* msg, int indexBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadLastChangedField(struct msg_t* msg, int totalFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ReadDeltaField(struct msg_t* msg, const int time, const void* from, void* to, const struct NetField* field, int print, bool noXor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_ReadDeltaFields(struct msg_t* msg, const int time, const void* from, void* to, int numFields, const struct NetField* stateFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, int numFields, int indexBits, const struct NetField* stateFields, int totalFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEntityStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaEntity(struct msg_t* msg, const int time, const struct entityState_s* from, struct entityState_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaArchivedEntity(struct msg_t* msg, const int time, const struct archivedEntity_s* from, struct archivedEntity_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaClient(struct msg_t* msg, const int time, const struct clientState_s* from, struct clientState_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_ReadDeltaHudElems(struct msg_t* msg, const int time, const struct hudelem_s* from, struct hudelem_s* to, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ReadDeltaPlayerstate(const int localClientNum, struct msg_t* msg, const int time, const struct playerState_s* from, struct playerState_s* to, bool predictedFieldsIgnoreXor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_initHuffmanInternal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_InitHuffman()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_DumpNetFieldChanges_f()
{

}

#endif // __UNIMPLEMENTED__

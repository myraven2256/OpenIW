//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void tom_game_mem_begin(void* hunk, unsigned int hunkSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void tom_game_mem_end()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* tom_game_malloc(unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool tom_game_free_internal(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* tom_game_realloc(void* ptr, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* tom_game_calloc(unsigned int num, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void tom_game_free(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DBX_AuthBoth_GenerateHash(const unsigned char* data, unsigned int size, struct DB_AuthHash* hash)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ValidateHash(const unsigned char* data, unsigned int size, const struct DB_AuthHash* hash)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ValidateSignature_Try(const struct DB_AuthHash* hash, const struct DB_AuthSignature* signature)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ValidateSignature(const struct DB_AuthHash* hash, const struct DB_AuthSignature* signature)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ProcessHeader(const unsigned char* chunkPtr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ProcessMasterBlock(const unsigned char* chunkPtr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ProcessDataBlock(const unsigned char* chunkPtr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DBX_AuthLoad_ProcessChunk(const unsigned char* chunkPtr, bool* isMetadata)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int DBX_AuthLoad_InflateCopyBuffer(struct z_stream_s* stream, int flush)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DB_AuthLoad_InflateInit(struct z_stream_s* stream, bool isSecure, const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_AuthLoad_InflateEnd(struct z_stream_s* stream)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DB_AuthLoad_Inflate(struct z_stream_s* stream, int flush)
{

}

#endif // __UNIMPLEMENTED__

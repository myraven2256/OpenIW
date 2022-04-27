//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_DrawRotatedPicPhysical(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawRotatedPic(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawRotatedQuadPic(const struct ScreenPlacement* scrPlace, float x, float y, const float* verts[0x2], float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawVLine(const struct ScreenPlacement* scrPlace, float x, float top, float lineWidth, float height, int horzAlign, int vertAlign, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Draw2DLine(const struct ScreenPlacement* scrPlace, float p1x, float p1y, float p2x, float p2y, float lineWidth, int horzAlign, int vertAlign, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Draw2DTri(const struct ScreenPlacement* scrPlace, float* p0, float* p1, float* p2, int horzAlign, int vertAlign, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawStringExt(const struct ScreenPlacement* scrPlace, float x, float y, const char* string, const float* setColor, int forceColor, int shadow, float charHeight, int adjust)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DrawDevString(const struct ScreenPlacement* scrPlace, float x, float y, float xScale, float yScale, const char* s, const float* color, int align, struct Font_s* font)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DrawBigDevString(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, float alpha, int align)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DrawBigDevStringColor(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, const float* color, int align)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DrawSmallDevString(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, float alpha, int align)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DrawSmallDevStringColor(const struct ScreenPlacement* scrPlace, float x, float y, const char* s, const float* color, int align)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float* CG_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetColorForHealth(int health, int armor, float* hcolor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_MiniMapChanged(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_NorthDirectionChanged(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugLine(const float* start, const float* end, const float* color, int depthTest, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugStar(const float* point, const float* color, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugStarWithText(const float* point, const float* starColor, const float* textColor, const char* string, float fontsize, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugBox(const float* origin, const float* mins, const float* maxs, float yaw, const float* color, int depthTest, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugBoxOriented(const float* origin, const float* mins, const float* maxs, float* rotation[0x3], const float* color, int depthTest, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugCircle(const float* center, float radius, const float* dir, const float* color, int depthTest, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DebugArc(const float* center, float radius, float angle0, float angle1, const float* color, int depthTest, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_TeamColor(int team, const char* prefix, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RelativeTeamColor(int clientNum, const char* prefix, float* color, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

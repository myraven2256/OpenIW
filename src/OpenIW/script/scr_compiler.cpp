//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_scr_compiler()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompileRemoveRefToString(unsigned int stringValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCanonicalString(unsigned int stringValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCanonicalStringConst(unsigned int stringValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CompileTransferRefToString(unsigned int stringValue, unsigned int user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAssignmentPos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPreAssignmentPos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitOpcode(unsigned int op, int offset, int callType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEnd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitReturn()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitInteger(int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitShort(short value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitUnsignedShort(unsigned short value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitByte(unsigned char value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFloat(float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitString(unsigned int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCodepos(const char* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EvalUndefined(union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetUndefined(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EvalInteger(int value, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetInteger(int value, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EvalFloat(float value, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetFloat(float value, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAnimTree(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSetVariableField(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_FindLocalVar(struct scr_block_s* block, int startIndex, unsigned int name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_FindLocalVarIndex(unsigned int name, union sval_u sourcePos, bool create, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCreateLocalVars(struct scr_block_s* block, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitRemoveLocalVars(struct scr_block_s* block, struct scr_block_s* outerBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitNOP2(bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CheckMaxSwitchCases(int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CheckLocalVarsCount(int localVarsCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RegisterLocalVar(unsigned int name, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CopyBlock(struct scr_block_s* from, struct scr_block_s** to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_InitFromChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AppendChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_MergeChildBlocks(struct scr_block_s** childBlocks, int childCount, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_TransferBlock(struct scr_block_s* from, struct scr_block_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSafeSetVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsSafeSetVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSafeSetWaittillVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EvalString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetString(unsigned int value, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EvalIString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetIString(unsigned int value, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetVector(const float* value, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitValue(struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PushValue(struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PopValue()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCastBool(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBoolNot(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBoolComplement(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSize(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSelf(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitLevel(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGame(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAnim(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSelfObject(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitLevelObject(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAnimObject(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitLocalVariable(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitLocalVariableRef(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsLocalVariableRef(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGameRef(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEvalArray(union sval_u sourcePos, union sval_u indexSourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEvalArrayRef(union sval_u sourcePos, union sval_u indexSourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitClearArray(union sval_u sourcePos, union sval_u indexSourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEmptyArray(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAnimation(union sval_u anim, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFieldVariable(union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFieldVariableRef(union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitClearFieldVariable(union sval_u expr, union sval_u field, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitObject(union sval_u expr, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitDecTop()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCastFieldObject(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitArrayVariable(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitArrayVariableRef(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsArrayVariableRef(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitClearArrayVariable(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitVariableExpression(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int GetExpressionCount(union sval_u exprlist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int EmitExpressionList(union sval_u exprlist, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static union sval_u* GetSingleParameter(union sval_u exprlist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AddExpressionListOpcodePos(union sval_u exprlist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int AddFilePrecache(unsigned int filename, unsigned int sourcePos, bool include)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFunction(union sval_u func, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitGetFunction(union sval_u func, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int AddFunction(int func, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptFunction(union sval_u func, int param_count, bool bMethod, union sval_u nameSourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptFunctionPointer(union sval_u expr, int param_count, bool bMethod, union sval_u nameSourcePos, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptThread(union sval_u func, int param_count, bool bMethod, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptThreadPointer(union sval_u expr, int param_count, bool bMethod, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptFunctionCall(union sval_u func_name, int param_count, bool bMethod, union sval_u nameSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostScriptThreadCall(union sval_u func_name, int param_count, bool bMethod, union sval_u sourcePos, union sval_u nameSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPreFunctionCall(union sval_u func_name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPostFunctionCall(union sval_u func_name, int param_count, bool bMethod, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Scr_GetBuiltin(union sval_u func_name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_BeginDevScript(int* type, char** savedPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EndDevScript(int type, char** savedPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetCacheType(int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetUncacheType(int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCallBuiltinOpcode(int param_count, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCallBuiltinMethodOpcode(int param_count, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCall(union sval_u func_name, union sval_u params, bool bStatement, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitMethod(union sval_u expr, union sval_u func_name, union sval_u params, union sval_u methodSourcePos, bool bStatement, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LinkThread(unsigned int threadId, struct VariableValue* pos, bool allowFarCall)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LinkFile(unsigned int fileId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int SpecifyThreadPosition(unsigned int threadId, unsigned int name, unsigned int sourcePos, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetThreadPosition(unsigned int threadId, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCallExpression(union sval_u expr, bool bStatement, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCallExpressionFieldObject(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBreakOn(union sval_u expr, union sval_u param, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CreateVector(struct VariableCompileValue* constValue, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EvalPrimitiveExpressionList(union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EmitOrEvalPrimitiveExpressionList(union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue* constValue, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitExpressionListFieldObject(union sval_u exprlist, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EvalPrimitiveExpression(union sval_u expr, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EmitOrEvalPrimitiveExpression(union sval_u expr, struct VariableCompileValue* constValue, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPrimitiveExpression(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBoolOrExpression(union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBoolAndExpression(union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EvalBinaryOperatorExpression(union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EmitOrEvalBinaryOperatorExpression(union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue* constValue, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBinaryEqualsOperatorExpression(union sval_u lhs, union sval_u rhs, union sval_u opcode, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsBinaryEqualsOperatorExpression(union sval_u lhs, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EvalExpression(union sval_u expr, struct VariableCompileValue* constValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EmitOrEvalExpression(union sval_u expr, struct VariableCompileValue* constValue, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitExpression(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitVariableExpressionRef(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsVariableExpressionRef(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitArrayPrimitiveExpressionRef(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsArrayPrimitiveExpressionRef(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitPrimitiveExpressionFieldObject(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitExpressionFieldObject(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConnectBreakStatements()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConnectContinueStatements()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsUndefinedPrimitiveExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsUndefinedExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool EmitClearVariableExpression(union sval_u expr, union sval_u rhsSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitAssignmentStatement(union sval_u lhs, union sval_u rhs, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsAssignmentStatement(union sval_u lhs, union sval_u rhs, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCallExpressionStatement(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitReturnStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEndStatement(union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitWaitStatement(union sval_u expr, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitWaittillFrameEnd(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitIfStatement(union sval_u expr, union sval_u stmt, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block, union sval_u* ifStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsIfStatement(union sval_u stmt, struct scr_block_s* block, union sval_u* ifStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitIfElseStatement(union sval_u expr, union sval_u stmt1, union sval_u stmt2, union sval_u sourcePos, union sval_u elseSourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block, union sval_u* ifStatBlock, union sval_u* elseStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsIfElseStatement(union sval_u stmt1, union sval_u stmt2, struct scr_block_s* block, union sval_u* ifStatBlock, union sval_u* elseStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddBreakBlock(struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddContinueBlock(struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitWhileStatement(union sval_u expr, union sval_u stmt, union sval_u sourcePos, union sval_u whileSourcePos, struct scr_block_s* block, union sval_u* whileStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsWhileStatement(union sval_u expr, union sval_u stmt, struct scr_block_s* block, union sval_u* whileStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitForStatement(union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, union sval_u sourcePos, union sval_u forSourcePos, struct scr_block_s* block, union sval_u* forStatBlock, union sval_u* forStatPostBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsForStatement(union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, struct scr_block_s* block, union sval_u* forStatBlock, union sval_u* forStatPostBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitIncStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsIncStatement(union sval_u expr, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitDecStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFormalParameterListInternal(union sval_u* node, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsFormalParameterListInternal(union sval_u* node, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFormalWaittillParameterListRefInternal(union sval_u* node, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitWaittillStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsWaittillStatement(union sval_u exprlist, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitWaittillmatchStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitNotifyStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u notifySourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitEndOnStatement(union sval_u obj, union sval_u expr, union sval_u sourcePos, union sval_u exprSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CompareCaseInfo(const void* elem1, const void* elem2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_IsLastStatement(union sval_u* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCaseStatement(union sval_u expr, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitDefaultStatement(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSwitchStatementList(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsSwitchStatement(union sval_u stmtlist, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitSwitchStatement(union sval_u expr, union sval_u stmtlist, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitCaseStatementInfo(unsigned int name, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBreakStatement(union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitContinueStatement(union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitBreakpointStatement(union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitProfStatement(union sval_u profileName, union sval_u sourcePos, unsigned char op)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitProfBeginStatement(union sval_u profileName, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitProfEndStatement(union sval_u profileName, union sval_u sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitStatement(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsStatement(union sval_u val, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitStatementList(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsStatementList(union sval_u val, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsDeveloperStatementList(union sval_u val, struct scr_block_s* block, union sval_u* devStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitDeveloperStatementList(union sval_u val, union sval_u sourcePos, struct scr_block_s* block, union sval_u* devStatBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitFormalParameterList(union sval_u exprlist, union sval_u sourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsFormalParameterList(union sval_u exprlist, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SpecifyThread(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitThreadInternal(unsigned int threadId, union sval_u val, union sval_u sourcePos, union sval_u endSourcePos, struct scr_block_s* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CalcLocalVarsThread(union sval_u exprlist, union sval_u stmtlist, union sval_u* stmttblock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitThread(int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitNormalThread(union sval_u val, union sval_u* stmttblock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitDeveloperThread(union sval_u val, union sval_u* stmttblock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitThread(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitThreadList(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitInclude(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EmitIncludeList(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScriptCompile(union sval_u val, unsigned int fileId, unsigned int scriptId, struct PrecacheEntry* entries, int entriesCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CompileStatement(union sval_u parseData)
{

}

#endif // __UNIMPLEMENTED__

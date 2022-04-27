//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_scr_evaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_CompareCanonicalStrings(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CompareCanonicalStrings(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ArchiveCanonicalStrings()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Scr_GetCanonicalString(unsigned int fieldName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_InitEvaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_EndLoadEvaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownEvaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short Scr_CompileCanonicalString(unsigned int stringValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_GetFieldValue(unsigned int objectId, const char* fieldName, int len, char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_GetValueString(unsigned int localId, struct VariableValue* value, int len, char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ClearValue(struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalArrayVariableInternal(struct VariableValue* parentValue, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_EvalArrayVariable(unsigned int arrayId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalArrayVariableExpression(union sval_u array, union sval_u index, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefArrayVariableExpression(union sval_u array, union sval_u index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalLocalVariable(union sval_u expr, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Scr_EvalObject(union sval_u classnum, union sval_u entnum, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalSelfValue(struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_GetValue(unsigned int index, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalVariableExpression(union sval_u expr, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefVariableExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompileVariableExpression(union sval_u* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Scr_EvalPrimitiveExpressionFieldObject(union sval_u expr, unsigned int localId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompilePrimitiveExpressionFieldObject(union sval_u* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalFieldVariableInternal(unsigned int objectId, unsigned int fieldName, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_EvalFieldVariable(unsigned int fieldName, struct VariableValue* value, unsigned int objectId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalPrimitiveExpression(union sval_u expr, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefBreakonExpression(union sval_u expr, union sval_u param)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefPrimitiveExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompilePrimitiveExpressionList(union sval_u* exprlist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompileCallExpressionList(union sval_u* exprlist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_CompileFunction(union sval_u* func_name, union sval_u* params)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_CompileMethod(union sval_u* expr, union sval_u* func_name, union sval_u* params)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_CompileCallExpression(union sval_u* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefCall(union sval_u params)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefMethod(union sval_u expr, union sval_u params)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefCallExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PreEvalBuiltin(union sval_u params, unsigned int localId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PostEvalBuiltin(struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalFunction(union sval_u func_name, union sval_u params, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalMethod(union sval_u expr, union sval_u func_name, union sval_u params, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalCallExpression(union sval_u expr, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompilePrimitiveExpression(union sval_u* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalBoolOrExpression(union sval_u expr1, union sval_u expr2, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalBoolAndExpression(union sval_u expr1, union sval_u expr2, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalBinaryOperatorExpression(union sval_u expr1, union sval_u expr2, union sval_u opcode, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefBinaryOperatorExpression(union sval_u expr1, union sval_u expr2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalVector(union sval_u expr1, union sval_u expr2, union sval_u expr3, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefVector(union sval_u expr1, union sval_u expr2, union sval_u expr3)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EvalExpression(union sval_u expr, unsigned int localId, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_RefExpression(union sval_u expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CompileExpression(union sval_u* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CompileTextInternal(const char* text, struct ScriptExpression_t* scriptExpr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CompileText(const char* text, struct ScriptExpression_t* scriptExpr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_EvalScriptExpression(struct ScriptExpression_t* expr, unsigned int localId, struct VariableValue* value, bool freezeScope, bool freezeObjects)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ClearDebugExprValue(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_RefScriptExpression(struct ScriptExpression_t* expr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_FreeDebugExprValue(union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddDebugExprValueRefCount(unsigned short* refCount, union sval_u val)
{

}

#endif // __UNIMPLEMENTED__

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_Boat_Drive_Foam_BP.P_Boat_Drive_Foam_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AP_Boat_Drive_Foam_BP_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xe91f76da);

	AP_Boat_Drive_Foam_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Boat_Drive_Foam_BP.P_Boat_Drive_Foam_BP_C.OnParameterUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AP_Boat_Drive_Foam_BP_C::OnParameterUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0xdd7c6be8);

	AP_Boat_Drive_Foam_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Boat_Drive_Foam_BP.P_Boat_Drive_Foam_BP_C.ExecuteUbergraph_P_Boat_Drive_Foam_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Boat_Drive_Foam_BP_C::ExecuteUbergraph_P_Boat_Drive_Foam_BP(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn) fn = UObject::FindObject<UFunction>(0x756389cc);

	AP_Boat_Drive_Foam_BP_C_ExecuteUbergraph_P_Boat_Drive_Foam_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
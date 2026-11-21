// FUN_00610450  00610450

void __thiscall FUN_00610450(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  while( true ) {
    if (param_2[1] == 0) {
      return;
    }
    if ((param_2[2] != 0) && (iVar1 = FUN_005fb2b0(param_2[2]), iVar1 != 0)) {
      FUN_005e9f20("inList->mID == 0 || inPlane->GetView(inList->mID) == NULL",
                   "..\\scilib\\sciSetup.cpp",0x31);
    }
    if (param_2[1] == 0) break;
    FUN_00610350(param_2,param_3,0,param_1);
    param_2 = (int *)((int)param_2 + *param_2);
  }
  return;
}


// FUN_005f3f00  005f3f00

void __thiscall FUN_005f3f00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) break;
    iVar1 = FUN_0060ca40(local_8);
    if (*(int *)(iVar1 + 0x1a4) == param_2) {
      FUN_005f8990();
    }
    local_8 = local_8 + 1;
  }
  FUN_005f8990();
  return;
}


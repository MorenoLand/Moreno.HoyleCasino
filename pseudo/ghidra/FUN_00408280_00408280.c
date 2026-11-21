// FUN_00408280  00408280

int __thiscall FUN_00408280(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      FUN_005e9f20("false","..\\Casino\\baccaratstate.cpp",0x1b2,param_1);
      return -1;
    }
    iVar1 = FUN_005f5400();
    if (iVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


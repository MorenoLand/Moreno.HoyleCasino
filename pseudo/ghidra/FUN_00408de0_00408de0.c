// FUN_00408de0  00408de0

int __thiscall FUN_00408de0(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      FUN_005e9f20("false","..\\Casino\\baccaratstate.cpp",0x302);
      return -1;
    }
    if (*(int *)(param_1 + 4 + local_8 * 4) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


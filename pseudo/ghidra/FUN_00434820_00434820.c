// FUN_00434820  00434820

int __thiscall FUN_00434820(int param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x4b < local_8) {
      FUN_005e9f20("false","..\\Casino\\crapsstate.cpp",0x13d);
      return -1;
    }
    if (*(int *)(param_1 + 4 + local_8 * 4) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


// FUN_00484ba0  00484ba0

undefined4 __thiscall FUN_00484ba0(int param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(short *)(param_1 + 4) <= local_8) {
      return 0;
    }
    cVar1 = FUN_00464500(param_2);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}


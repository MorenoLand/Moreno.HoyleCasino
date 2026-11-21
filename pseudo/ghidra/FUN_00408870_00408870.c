// FUN_00408870  00408870

uint __thiscall FUN_00408870(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int local_8;
  
  local_8 = param_2 * 3;
  while( true ) {
    uVar2 = param_2 * 3 + 3;
    if ((int)uVar2 <= local_8) {
      return uVar2 & 0xffffff00;
    }
    cVar1 = FUN_005cb920(param_1);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}


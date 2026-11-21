// FUN_00628cd0  00628cd0

undefined4 __thiscall FUN_00628cd0(undefined4 param_1,char *param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) {
      return 0;
    }
    if (param_3 == '\0') {
      uVar3 = FUN_0060ca40(local_8);
      pcVar2 = (char *)what(param_1,uVar3);
      local_c = strcmp(param_2,pcVar2);
    }
    else {
      FUN_0060ca40(local_8);
      pcVar2 = (char *)what();
      local_c = _stricmp(param_2,pcVar2);
    }
    if (local_c == 0) break;
    local_8 = local_8 + 1;
  }
  return 1;
}


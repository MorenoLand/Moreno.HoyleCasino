// FUN_00482e80  00482e80

void __thiscall
FUN_00482e80(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  uVar2 = 0;
  if ((param_3 != 1) && (param_3 != 0)) {
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xeb9,param_1,0);
  }
  if (param_3 == 0) {
    local_14 = 0x17;
    local_c = 0x21;
  }
  else {
    local_14 = 0;
    local_c = 0x17;
  }
  for (local_10 = local_14; local_10 < local_c; local_10 = local_10 + 1) {
    if (((local_10 != param_5) && (*(int *)(param_6 + 0x10 + local_10 * 0x14) == param_2)) &&
       ((*(int *)(param_6 + 4 + local_10 * 0x14) == 0 ||
        (((param_4 == 3 && (*(char *)(param_6 + 8 + local_10 * 0x14) != '\0')) && (param_3 == 1)))))
       ) {
      local_8 = local_8 + 1;
    }
  }
  if (local_8 == 0) {
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xecd,param_1,uVar2);
  }
  iVar1 = FUN_0062fbf0(local_8);
  local_8 = 0;
  for (local_10 = local_14; local_10 < local_c; local_10 = local_10 + 1) {
    if (((local_10 != param_5) && (*(int *)(param_6 + 0x10 + local_10 * 0x14) == param_2)) &&
       ((*(int *)(param_6 + 4 + local_10 * 0x14) == 0 ||
        (((param_4 == 3 && (*(char *)(param_6 + 8 + local_10 * 0x14) != '\0')) && (param_3 == 1)))))
       ) {
      if (iVar1 == local_8) {
        *(int *)(param_6 + 4 + local_10 * 0x14) = param_4;
        return;
      }
      local_8 = local_8 + 1;
    }
  }
  FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xee2,param_1);
  local_10 = 0x20;
  while( true ) {
    if (local_10 < 0) {
      FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xeec,param_1);
      local_10 = 0x20;
      while( true ) {
        if (local_10 < 0) {
          return;
        }
        if (*(int *)(param_6 + 4 + local_10 * 0x14) != param_4) break;
        local_10 = local_10 + -1;
      }
      *(int *)(param_6 + 4 + local_10 * 0x14) = param_4;
      return;
    }
    if ((*(int *)(param_6 + 4 + local_10 * 0x14) == 0) ||
       ((param_4 == 3 && (*(char *)(param_6 + 8 + local_10 * 0x14) != '\0')))) break;
    local_10 = local_10 + -1;
  }
  *(int *)(param_6 + 4 + local_10 * 0x14) = param_4;
  return;
}


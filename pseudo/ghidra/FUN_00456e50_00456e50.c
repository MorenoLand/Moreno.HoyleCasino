// FUN_00456e50  00456e50

uint __thiscall FUN_00456e50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = -1;
  local_c = -1;
  if (*(char *)(param_1 + 0x2c2) == '\0') {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if (iVar1 != -1) {
        if (local_10 != -1) {
          local_c = local_8;
          break;
        }
        local_10 = local_8;
      }
    }
    uVar2 = FUN_0044f840(local_10,local_c,param_2,param_3);
  }
  else {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if (iVar1 != *(int *)(param_1 + 0x2d0)) {
        iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        if (iVar1 != -1) {
          if (local_10 != -1) {
            local_c = local_8;
            break;
          }
          local_10 = local_8;
        }
      }
    }
    uVar2 = FUN_0044f840(local_10,local_c,param_2,param_3);
  }
  return uVar2 & 0xffff0000;
}


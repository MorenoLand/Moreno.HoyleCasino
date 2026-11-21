// FUN_00454d60  00454d60

undefined2 __thiscall FUN_00454d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar3;
  undefined8 uVar4;
  uint local_24;
  undefined2 local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_24 = 0xffffffff;
  local_18 = 0xffffffff;
  FUN_004517a0(&local_14,&local_8,&local_c);
  cVar1 = FUN_00451c20(local_c,local_14,local_8,&local_24,&local_18);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2d4) == 5) {
      for (local_10 = 0; (int)local_10 < 7; local_10 = local_10 + 1) {
        iVar2 = FUN_0044f6c0(CONCAT22((short)(local_10 >> 0x10),
                                      *(undefined2 *)(param_1 + 4 + local_10 * 2)));
        if (iVar2 != *(int *)(param_1 + 0x2d0)) {
          iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_10 * 2));
          if (iVar2 == -1) {
            if (local_24 != 0xffffffff) {
              local_18 = local_10;
              break;
            }
            local_24 = local_10;
          }
          else {
            if (local_24 != 0xffffffff) {
              local_18 = local_10;
              break;
            }
            local_24 = local_10;
          }
        }
      }
      FUN_0044f840(local_24,local_18,param_2,param_3);
      local_20 = 1;
    }
    else if ((*(int *)(param_1 + 0x2d4) == 4) &&
            (cVar1 = FUN_0044f750(0xe,*(undefined4 *)(param_1 + 0x2d0)), cVar1 != '\0')) {
      local_1c = FUN_0044f680(*(undefined2 *)(param_1 + 8));
      if (local_1c == 0xd) {
        local_20 = 4;
        local_24 = 2;
        uVar4 = FUN_0044f6c0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 8)));
        uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 == *(int *)(param_1 + 0x2d0)) {
          local_18 = 3;
        }
        else {
          local_20 = 3;
          local_10 = 3;
          while ((int)local_10 < 7) {
            iVar2 = FUN_0044f6c0(CONCAT22((short)(uVar3 >> 0x10),
                                          *(undefined2 *)(param_1 + 4 + local_10 * 2)));
            if (iVar2 != *(int *)(param_1 + 0x2d0)) {
              local_18 = local_10;
              break;
            }
            uVar3 = local_10 + 1;
            local_10 = uVar3;
          }
        }
      }
      else if (((local_1c == 0xc) &&
               (iVar2 = FUN_0044f6c0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 8))),
               iVar2 == *(int *)(param_1 + 0x2d0))) &&
              ((cVar1 = FUN_0044f750(0xb,*(undefined4 *)(param_1 + 0x2d0)), cVar1 != '\0' ||
               (cVar1 = FUN_0044f750(10,*(undefined4 *)(param_1 + 0x2d0)), cVar1 != '\0')))) {
        local_20 = 4;
        local_24 = 2;
        local_18 = 3;
      }
      else {
        local_20 = 3;
        for (local_10 = 1; (int)local_10 < 7; local_10 = local_10 + 1) {
          iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_10 * 2));
          if ((iVar2 != *(int *)(param_1 + 0x2d0)) &&
             (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar2 != -1)) {
            if (local_24 != 0xffffffff) {
              local_18 = local_10;
              break;
            }
            local_24 = local_10;
          }
        }
      }
      FUN_0044f840(local_24,local_18,param_2,param_3);
    }
    else {
      local_20 = FUN_00454560(param_2,param_3);
    }
  }
  else {
    FUN_0044f840(local_24,local_18,param_2,param_3);
    local_20 = 0;
  }
  return local_20;
}


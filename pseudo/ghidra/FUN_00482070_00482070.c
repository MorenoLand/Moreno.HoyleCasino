// FUN_00482070  00482070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482070(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_d0;
  int local_cc;
  int local_c8;
  char acStack_c4 [8];
  uint local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined8 local_ac;
  int local_a0;
  undefined8 local_9c;
  int local_94;
  int local_90;
  int local_8c [34];
  
  local_bc = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_90 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_ac = 0;
  if ((param_5 < -1) && (0x16 < param_5)) {
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xd94);
    param_5 = -1;
  }
  if ((param_1 < 1) || (3 < param_1)) {
    FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xd99);
  }
  for (local_94 = 0; local_94 < 8; local_94 = local_94 + 1) {
    acStack_c4[local_94] = '\0';
  }
  if (param_1 != 1) {
    for (local_94 = 0; local_94 < 0x21; local_94 = local_94 + 1) {
      if (*(int *)(param_6 + 4 + local_94 * 0x14) == param_1 + -1) {
        local_8c[local_94] = *(int *)(param_6 + local_94 * 0x14);
      }
      else {
        local_8c[local_94] = -1;
      }
    }
    FUN_00482d80(local_8c,0x21);
    local_b4 = 0;
    if (param_1 == 2) {
      for (local_94 = 0x20; -1 < local_94; local_94 = local_94 + -1) {
        if (((*(int *)(param_6 + local_94 * 0x14) == local_8c[0]) &&
            (*(int *)(param_6 + 4 + local_94 * 0x14) == 1)) &&
           (0 < *(int *)(param_6 + local_94 * 0x14))) {
          FUN_00482e10(local_94,2,param_6);
          break;
        }
      }
      local_b4 = 1;
    }
    else if (param_1 != 3) goto LAB_00482532;
    for (local_94 = 0x20; -1 < local_94; local_94 = local_94 + -1) {
      if (((*(int *)(param_6 + local_94 * 0x14) == local_8c[local_b4]) &&
          (*(int *)(param_6 + 4 + local_94 * 0x14) == param_1 + -1)) &&
         (0 < *(int *)(param_6 + local_94 * 0x14))) {
        local_90 = local_90 + 1;
      }
    }
    for (local_94 = 0x17; local_94 < 0x21; local_94 = local_94 + 1) {
      if (((*(int *)(param_6 + local_94 * 0x14) == local_8c[local_b4]) &&
          (*(int *)(param_6 + 4 + local_94 * 0x14) == param_1 + -1)) &&
         (0 < *(int *)(param_6 + local_94 * 0x14))) {
        local_b0 = local_b0 + 1;
      }
    }
    if ((local_b0 == 1) || (local_90 == 1)) {
      for (local_94 = 0x20; -1 < local_94; local_94 = local_94 + -1) {
        if (((*(int *)(param_6 + local_94 * 0x14) == local_8c[local_b4]) &&
            (*(int *)(param_6 + 4 + local_94 * 0x14) == param_1 + -1)) &&
           (0 < *(int *)(param_6 + local_94 * 0x14))) {
          FUN_00482e10(local_94,param_1,param_6);
          local_a0 = 1;
          break;
        }
      }
    }
    else {
      if (1 < local_b0) {
        local_90 = local_b0;
      }
      local_b8 = FUN_0062fbf0(local_90);
      local_90 = 0;
      for (local_94 = 0x20; -1 < local_94; local_94 = local_94 + -1) {
        if (((*(int *)(param_6 + local_94 * 0x14) == local_8c[local_b4]) &&
            (*(int *)(param_6 + 4 + local_94 * 0x14) == param_1 + -1)) &&
           (0 < *(int *)(param_6 + local_94 * 0x14))) {
          if (local_b8 == local_90) {
            FUN_00482e10(local_94,param_1,param_6);
            local_a0 = 1;
            break;
          }
          local_90 = local_90 + 1;
        }
      }
    }
  }
LAB_00482532:
  if (param_1 == 1) {
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(1,0,1,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 3; local_94 = local_94 + 1) {
      FUN_00482e80(2,0,1,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(2,1,1,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(3,1,1,param_5,param_6);
    }
  }
  else if (param_1 == 2) {
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(1,0,2,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(2,0,2,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(1,1,2,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 2; local_94 = local_94 + 1) {
      FUN_00482e80(2,1,2,param_5,param_6);
    }
    for (local_94 = 0; local_94 < 1; local_94 = local_94 + 1) {
      FUN_00482e80(3,1,2,param_5,param_6);
    }
  }
  else if (param_1 == 3) {
    local_d0 = 0;
    local_cc = 0;
    for (local_94 = 0x17; local_94 < 0x21; local_94 = local_94 + 1) {
      if ((*(char *)(param_6 + 8 + local_94 * 0x14) != '\0') &&
         (iVar1 = FUN_0062fbf0(2), iVar1 != 0)) {
        *(undefined4 *)(param_6 + 4 + local_94 * 0x14) = 3;
        *(undefined1 *)(param_6 + 8 + local_94 * 0x14) = 0;
        if (*(int *)(param_6 + 0x10 + local_94 * 0x14) == 1) {
          local_d0 = local_d0 + 1;
        }
        if (*(int *)(param_6 + 0x10 + local_94 * 0x14) == 2) {
          local_cc = local_cc + 1;
        }
      }
    }
    local_94 = 0;
    for (; (local_94 < 1 && (local_d0 < 2)); local_d0 = local_d0 + 1) {
      FUN_00482e80(1,0,3,param_5,param_6);
      local_94 = local_94 + 1;
    }
    local_94 = 0;
    for (; (local_94 < 1 && (local_cc < 3)); local_cc = local_cc + 1) {
      FUN_00482e80(2,0,3,param_5,param_6);
      local_94 = local_94 + 1;
    }
    for (; local_d0 < 2; local_d0 = local_d0 + 1) {
      FUN_00482e80(1,1,3,param_5,param_6);
    }
    for (; local_cc < 3; local_cc = local_cc + 1) {
      FUN_00482e80(2,1,3,param_5,param_6);
    }
    if (local_a0 == 0) {
      FUN_00482e80(2,1,3,param_5,param_6);
    }
  }
  if (param_1 == 1) {
    for (local_94 = 0; local_94 < 0x21; local_94 = local_94 + 1) {
      if (*(int *)(param_6 + 4 + local_94 * 0x14) == 1) {
        *(int *)(param_6 + local_94 * 0x14) = param_3;
      }
    }
  }
  else {
    FUN_004830e0(&local_ac,&local_9c,param_1,param_2,param_4,param_3,local_8c);
    for (local_94 = 0; local_94 < 0x21; local_94 = local_94 + 1) {
      if ((*(int *)(param_6 + 4 + local_94 * 0x14) == param_1) &&
         (*(int *)(param_6 + local_94 * 0x14) == -1)) {
        FUN_004832e0();
        uVar2 = FUN_00686cc0();
        *(undefined4 *)(param_6 + local_94 * 0x14) = uVar2;
      }
      if (((param_1 == 2) && (*(int *)(param_6 + 4 + local_94 * 0x14) == 2)) &&
         ((double)*(int *)(param_6 + local_94 * 0x14) < (double)param_3 * _DAT_006bcf78)) {
        FUN_0062fbf0(0x14);
        uVar2 = FUN_00686cc0();
        *(undefined4 *)(param_6 + local_94 * 0x14) = uVar2;
      }
      if (((param_1 == 3) && (*(int *)(param_6 + 4 + local_94 * 0x14) == 3)) &&
         ((double)*(int *)(param_6 + local_94 * 0x14) < (double)param_3 * _DAT_006bc278)) {
        uVar2 = FUN_0062fbf0(0x14);
        uVar2 = FUN_00686cc0(uVar2);
        *(undefined4 *)(param_6 + local_94 * 0x14) = uVar2;
      }
    }
  }
  for (local_94 = 0; local_94 < 0x21; local_94 = local_94 + 1) {
    if ((*(int *)(param_6 + 4 + local_94 * 0x14) == param_1) &&
       (*(int *)(param_6 + 0xc + local_94 * 0x14) != -1)) {
      acStack_c4[*(int *)(param_6 + 0xc + local_94 * 0x14)] = '\x01';
    }
  }
  local_94 = 0;
  do {
    if (0x20 < local_94) {
      __security_check_cookie(local_bc ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((*(int *)(param_6 + 4 + local_94 * 0x14) == param_1) &&
       (*(int *)(param_6 + 0xc + local_94 * 0x14) == -1)) {
      local_90 = 0;
      for (local_c8 = 0; local_c8 < 8; local_c8 = local_c8 + 1) {
        if (acStack_c4[local_c8] == '\0') {
          local_90 = local_90 + 1;
        }
      }
      local_b8 = FUN_0062fbf0(local_90);
      local_90 = 0;
      for (local_c8 = 0; local_c8 < 8; local_c8 = local_c8 + 1) {
        if (acStack_c4[local_c8] == '\0') {
          if (local_b8 == local_90) {
            *(int *)(param_6 + 0xc + local_94 * 0x14) = local_c8;
            acStack_c4[local_c8] = '\x01';
            break;
          }
          local_90 = local_90 + 1;
        }
      }
    }
    local_94 = local_94 + 1;
  } while( true );
}


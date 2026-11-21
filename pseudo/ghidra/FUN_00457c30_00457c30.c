// FUN_00457c30  00457c30

void __fastcall FUN_00457c30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_5c;
  int local_58 [18];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f026;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = 5;
  local_58[5] = 1;
  local_58[6] = 2;
  local_58[7] = 0;
  local_58[8] = 3;
  local_58[9] = 5;
  local_58[10] = 6;
  local_58[0xb] = 4;
  local_58[0xc] = 7;
  local_58[0] = 0x1b5;
  local_58[1] = 0x18a;
  local_58[2] = 0xe2;
  local_58[3] = 0xb9;
  local_58[0xe] = 0x77;
  local_58[0xf] = 0xca;
  local_58[0x10] = 0xca;
  local_58[0x11] = 0x77;
  local_58[4] = 0x7dc;
  iVar2 = FUN_0045e8e0(uVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_00630f40("SID_PAIGOWPOKER");
    FUN_005f38b0(uVar3);
    FUN_005f1ad0(0x7d1);
  }
  else {
    iVar2 = FUN_0045e8e0(uVar1);
    if (iVar2 == 1) {
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER1");
      FUN_005f38b0(uVar3);
      FUN_005f1ad0(0xfdeb);
      local_58[4] = 0xfded;
    }
  }
  for (local_58[0xd] = 0; local_58[0xd] < 5; local_58[0xd] = local_58[0xd] + 1) {
    pvVar4 = operator_new(0x24);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_b4 = 0;
    }
    else {
      local_b4 = FUN_00459b00();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_58[0xd] * 4) = local_b4;
    FUN_00459c00(local_58[0xd]);
    if ((local_58[0xd] != 4) && (iVar2 = FUN_0045e8e0(), iVar2 == 1)) {
      pvVar4 = operator_new(0x178);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_b8 = 0;
      }
      else {
        local_b8 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x84 + local_58[0xd] * 4) = local_b8;
      FUN_005eae80(0x1adbd,0,0,3,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x84 + local_58[0xd] * 4) + 0xb0))(0);
    }
  }
  iVar2 = FUN_0045e8e0(uVar1);
  if (iVar2 == 1) {
    local_5c = 9;
  }
  for (local_58[0xd] = 0; local_58[0xd] < local_5c; local_58[0xd] = local_58[0xd] + 1) {
    if (local_58[0xd] < local_5c + -1) {
      pvVar4 = operator_new(0xae8);
      local_8 = 2;
      if (pvVar4 == (void *)0x0) {
        local_bc = 0;
      }
      else {
        uVar1 = local_58[0xd] & 0x80000003;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
        }
        local_bc = FUN_0045a120(uVar1,(int)(local_58[0xd] + (local_58[0xd] >> 0x1f & 3U)) >> 2);
      }
      *(undefined4 *)(param_1 + 0x18 + local_58[0xd] * 4) = local_bc;
    }
    else {
      pvVar4 = operator_new(0xae8);
      local_8 = 3;
      if (pvVar4 == (void *)0x0) {
        local_c0 = 0;
      }
      else {
        local_c0 = FUN_0045a120(4,0);
      }
      *(undefined4 *)(param_1 + 0x18 + local_58[0xd] * 4) = local_c0;
    }
    local_8 = 0xffffffff;
    FUN_005eae80(local_58[4],0,0,1,0xffffffff);
    if ((((local_58[0xd] < local_5c + -1) &&
         ((**(code **)(**(int **)(param_1 + 0x18 + local_58[0xd] * 4) + 0xb0))
                    (local_58[local_58[0xd] + 5]), local_58[0xd] < 4)) &&
        (iVar2 = FUN_0045e8e0(), iVar2 == 1)) && (*(int *)(param_1 + 0x84 + local_58[0xd] * 4) != 0)
       ) {
      switch(local_58[0xd]) {
      case 0:
      case 1:
        if (local_58[0xd] == 0) {
          local_c8 = FUN_005f5550();
          local_c8 = 2 - local_c8;
        }
        else {
          local_c8 = FUN_005f5550();
          local_c8 = local_c8 + -1;
        }
        iVar2 = local_58[local_58[0xd] + 5];
        iVar5 = FUN_005f5590();
        (**(code **)(**(int **)(param_1 + 0x84 + local_58[0xd] * 4) + 0x44))
                  (local_58[local_58[local_58[0xd] + 5]] + local_c8,
                   local_58[iVar2 + 0xe] - iVar5 / 2);
        break;
      case 2:
      case 3:
        if (local_58[0xd] == 3) {
          local_cc = FUN_005f5550();
          local_cc = local_cc + 2;
        }
        else {
          local_cc = FUN_005f5550();
          local_cc = -2 - local_cc;
        }
        iVar2 = local_58[local_58[0xd] + 5];
        iVar5 = FUN_005f5590();
        (**(code **)(**(int **)(param_1 + 0x84 + local_58[0xd] * 4) + 0x44))
                  (local_58[local_58[local_58[0xd] + 5]] + local_cc,
                   local_58[iVar2 + 0xe] + 2 + iVar5 / 2);
      }
    }
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_00790738 + 4));
    (**(code **)(**(int **)(param_1 + 0x18 + local_58[0xd] * 4) + 0x74))();
  }
  iVar2 = FUN_0045e8e0();
  if (iVar2 == 1) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(0xffffffd7,0xfffffffd);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(2,0xfffffffe);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0,0xfffffffb);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x44))(0x25,0xffffffee);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(0xfffffffe,0xfffffffe);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(2,0);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(0xffffffeb,0x14);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x44))(400,0xa5);
    (**(code **)(**(int **)(param_1 + 0x88) + 0x44))(0x127,0xc2);
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x44))(0x1c1,0x67);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x44))(0xe7,0x92);
  }
  local_d0 = operator_new(0x198);
  local_8 = 4;
  if (local_d0 == (undefined4 *)0x0) {
    local_d0 = (undefined4 *)0x0;
  }
  else {
    FUN_005cd6a0();
    *local_d0 = PaiGowDealerDisplay::vftable;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x3c) = local_d0;
  FUN_005eae80(0,0,0,0,0xffffffff);
  pvVar4 = operator_new(0x184);
  local_8 = 5;
  if (pvVar4 == (void *)0x0) {
    local_d4 = 0;
  }
  else {
    local_d4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = local_d4;
  FUN_005eae80(0x7e6,0,0,0x33,0xffffffff);
  pvVar4 = operator_new(0x184);
  local_8 = 6;
  if (pvVar4 == (void *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = local_d8;
  FUN_005eae80(0x7e7,0,0,0x32,0xffffffff);
  pvVar4 = operator_new(0x184);
  local_8 = 7;
  if (pvVar4 == (void *)0x0) {
    local_dc = 0;
  }
  else {
    local_dc = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = local_dc;
  FUN_005eae80(0x7d7,0,0,1,0xffffffff);
  pvVar4 = operator_new(0x178);
  local_8 = 8;
  if (pvVar4 == (void *)0x0) {
    local_e0 = 0;
  }
  else {
    local_e0 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = local_e0;
  FUN_005eae80(0x7e2,0,0,1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x74))();
  pvVar4 = operator_new(0x178);
  local_8 = 9;
  if (pvVar4 == (void *)0x0) {
    local_e4 = 0;
  }
  else {
    local_e4 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = local_e4;
  FUN_005eae80(0x7e3,0,0,1,0xffffffff);
  ExceptionList = local_10;
  return;
}


// FUN_0059c2d0  0059c2d0

void __fastcall FUN_0059c2d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8c;
  int local_7c;
  undefined1 local_78 [12];
  int local_6c;
  undefined2 local_68 [6];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0059ca80();
  for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
    local_44 = local_40 * 3;
    for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {
      local_4c = *(int *)(DAT_007935d0 + 0x98 + (local_48 + local_44) * 4);
      if ((local_4c == -1) || (local_4c == 3)) {
        (**(code **)(**(int **)(param_1 + 0x54 + (local_48 + local_44) * 4) + 0x70))();
      }
      else {
        uVar2 = FUN_0059b860(local_4c);
        (**(code **)(**(int **)(param_1 + 0x54 + (local_48 + local_44) * 4) + 0xb0))(uVar2);
        (**(code **)(**(int **)(param_1 + 0x54 + (local_48 + local_44) * 4) + 0x74))();
      }
    }
  }
  local_50 = 0;
  do {
    if (5 < local_50) {
      cVar1 = FUN_005da7b0();
      if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
        (**(code **)(*DAT_007935cc + 0x2f0))();
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_0059e440();
    if ((local_50 != 4) && (local_50 != 5)) {
      iVar3 = FUN_005dcb00(local_50);
      if (*(char *)(iVar3 + 0x4a0) != '\0') {
        cVar1 = FUN_005da7b0();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*DAT_007935cc + 0x2c4))(local_50);
          if (cVar1 == '\0') {
            local_54 = local_50 * 3;
            for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
              if (*(int *)(*(int *)(param_1 + 0x1c + (local_58 + local_54) * 4) + 0x17c +
                          local_50 * 0x1e0) == 0) {
                (**(code **)(**(int **)(param_1 + 0x1c + (local_58 + local_54) * 4) + 0xb8))
                          (local_50,0);
              }
            }
          }
        }
      }
    }
    if (local_50 == 5) {
LAB_0059c70d:
      (**(code **)(**(int **)(param_1 + 0x84 + local_50 * 4) + 0x70))();
    }
    else {
      cVar1 = FUN_005a3e30(local_50);
      if ((cVar1 == '\0') || (*(char *)(DAT_007935d0 + 0x118) == '\0')) goto LAB_0059c70d;
      for (local_7c = 0; local_7c < 5; local_7c = local_7c + 1) {
        local_68[local_7c] = 0;
      }
      FUN_00462930(DAT_007935d0 + 200 + local_50 * 6,(local_50 == 4) + '\x02',DAT_007935d0 + 0xe6,3,
                   local_78);
      FUN_00462a40(5,local_78,6,local_68);
      uVar2 = FUN_00462ba0(local_68,5,0,local_3c);
      FUN_00462f40(uVar2);
      iVar3 = FUN_0059b9a0(local_50,0);
      iVar4 = FUN_0059b9a0(local_50,4);
      iVar5 = FUN_0059b9a0(local_50,0);
      iVar6 = FUN_005f5550();
      local_5c = iVar3 + (((iVar4 - iVar5) - iVar6) + 0x23) / 2;
      if (local_50 == 4) {
        iVar3 = FUN_0059b9f0(4,0);
        local_8c = FUN_005f5590();
        local_8c = iVar3 + -0x44 + local_8c;
      }
      else {
        local_8c = FUN_0059b9f0(local_50,0);
        local_8c = local_8c + -0x11;
      }
      local_6c = local_8c;
      (**(code **)(**(int **)(param_1 + 0x84 + local_50 * 4) + 0xb4))(local_3c);
      (**(code **)(**(int **)(param_1 + 0x84 + local_50 * 4) + 0x44))(local_5c,local_6c);
      (**(code **)(**(int **)(param_1 + 0x84 + local_50 * 4) + 0x74))();
    }
    local_50 = local_50 + 1;
  } while( true );
}


// FUN_00591a70  00591a70

void __fastcall FUN_00591a70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_80;
  int local_6c;
  undefined2 local_64 [4];
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
  FUN_00592230();
  for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
    local_44 = local_40 * 3;
    for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {
      local_4c = *(int *)(DAT_007935a8 + 0x98 + (local_48 + local_44) * 4);
      if (local_4c == -1) {
        (**(code **)(**(int **)(param_1 + 0x50 + (local_48 + local_44) * 4) + 0x70))();
      }
      else {
        uVar2 = FUN_00591030(local_4c);
        (**(code **)(**(int **)(param_1 + 0x50 + (local_48 + local_44) * 4) + 0xb0))(uVar2);
        (**(code **)(**(int **)(param_1 + 0x50 + (local_48 + local_44) * 4) + 0x74))();
      }
    }
  }
  for (local_50 = 0; local_50 < 5; local_50 = local_50 + 1) {
    FUN_00594260();
    if ((((local_50 != 4) && (iVar3 = FUN_005dcb00(local_50), *(char *)(iVar3 + 0x4a0) != '\0')) &&
        (cVar1 = FUN_005da7b0(), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*DAT_007935a4 + 0x2c4))(local_50), cVar1 == '\0')) {
      local_54 = local_50 * 3;
      for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x18 + (local_58 + local_54) * 4) + 0x17c + local_50 * 0x1e0
                    ) == 0) {
          (**(code **)(**(int **)(param_1 + 0x18 + (local_58 + local_54) * 4) + 0xb8))(local_50,0);
        }
      }
    }
    cVar1 = FUN_005997a0(local_50);
    if (cVar1 == '\0') {
      if (local_50 == 4) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x70))();
      }
      else if (*(char *)(DAT_007935a8 + local_50 + 0x112) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0x70))();
      }
      else {
        iVar3 = FUN_00591160(local_50,0);
        iVar4 = FUN_00591160(local_50,4);
        iVar5 = FUN_00591160(local_50,0);
        iVar6 = FUN_005f5550();
        uVar2 = FUN_00630f40("SID_FOURCARDPOKER_FOLD");
        (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0xb4))(uVar2);
        iVar7 = FUN_005911a0(local_50,0);
        (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0x44))
                  (iVar3 + (((iVar4 - iVar5) - iVar6) + 0x23) / 2,iVar7 + -0x11);
        (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0x74))();
      }
    }
    else {
      for (local_6c = 0; local_6c < 4; local_6c = local_6c + 1) {
        local_64[local_6c] = 0;
      }
      FUN_00462a40(4,DAT_007935a8 + 200 + local_50 * 0xc,(local_50 == 4) + '\x05',local_64);
      uVar2 = FUN_00462ba0(local_64,4,0,local_3c);
      FUN_00462f40(uVar2);
      iVar3 = FUN_00591160(local_50,0);
      iVar4 = FUN_00591160(local_50,4);
      iVar5 = FUN_00591160(local_50,0);
      iVar6 = FUN_005f5550();
      local_5c = iVar3 + (((iVar4 - iVar5) - iVar6) + 0x23) / 2;
      if (local_50 == 4) {
        iVar3 = FUN_005911a0(4,0);
        local_80 = FUN_005f5590();
        local_80 = iVar3 + -0x44 + local_80;
      }
      else {
        local_80 = FUN_005911a0(local_50,0);
        local_80 = local_80 + -0x11;
      }
      (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0xb4))(local_3c);
      (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0x44))(local_5c,local_80);
      (**(code **)(**(int **)(param_1 + 0x80 + local_50 * 4) + 0x74))();
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_007935a4 + 0x2f0))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


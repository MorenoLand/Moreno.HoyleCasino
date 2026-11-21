// FUN_0053b1a0  0053b1a0

void __fastcall FUN_0053b1a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_64;
  int local_54;
  int local_40;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0053b090();
  for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
    iVar8 = local_40 * 3;
    for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
      iVar4 = *(int *)(DAT_007933ec + 0x98 + (iVar8 + local_54) * 4);
      if (iVar4 == -1) {
        (**(code **)(**(int **)(param_1 + 0x50 + (iVar8 + local_54) * 4) + 0x70))();
      }
      else {
        uVar2 = FUN_0053b050(iVar4);
        (**(code **)(**(int **)(param_1 + 0x50 + (iVar8 + local_54) * 4) + 0xb0))(uVar2);
        (**(code **)(**(int **)(param_1 + 0x50 + (iVar8 + local_54) * 4) + 0x74))();
      }
    }
  }
  for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1) {
    FUN_0053bd00();
    if ((((local_40 != 4) && (iVar8 = FUN_005dcb00(local_40), *(char *)(iVar8 + 0x4a0) != '\0')) &&
        (cVar1 = FUN_005da7b0(), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*DAT_007933e8 + 0x2c4))(local_40), cVar1 == '\0')) {
      for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x18 + (local_40 * 3 + local_54) * 4) + 0x17c +
                    local_40 * 0x1e0) == 0) {
          (**(code **)(**(int **)(param_1 + 0x18 + (local_40 * 3 + local_54) * 4) + 0xb8))
                    (local_40,0);
        }
      }
    }
    cVar1 = FUN_00540c90(local_40);
    if (cVar1 == '\0') {
      if (local_40 == 4) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x70))();
      }
      else if (*(char *)(DAT_007933ec + local_40 + 0xf6) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0x70))();
      }
      else {
        iVar8 = FUN_0053b8f0(local_40,0);
        iVar4 = FUN_0053b8f0(local_40,4);
        iVar5 = FUN_0053b8f0(local_40,0);
        iVar6 = FUN_005f5550();
        uVar2 = FUN_00630f40("SID_THREECARDPOKER_FOLD");
        (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0xb4))(uVar2);
        iVar7 = FUN_0053b930(local_40,0);
        (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0x44))
                  ((iVar8 + ((iVar4 + 0x23) - iVar5) / 2) - iVar6 / 2,iVar7 + -0x11);
        (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0x74))();
      }
    }
    else {
      uVar2 = FUN_00462ba0(DAT_007933ec + 200 + local_40 * 6,3,0,local_3c);
      FUN_00462f40(uVar2);
      if (local_40 == 4) {
        cVar1 = FUN_00541790();
        if (cVar1 == '\0') {
          pcVar3 = (char *)FUN_00630f40("SID_THREECARDPOKER_DOESNOTQUALIFY");
          strcat(local_3c,pcVar3);
        }
        else {
          pcVar3 = (char *)FUN_00630f40("SID_THREECARDPOKER_QUALIFIES");
          strcat(local_3c,pcVar3);
        }
      }
      iVar8 = FUN_0053b8f0(local_40,0);
      iVar4 = FUN_0053b8f0(local_40,4);
      iVar5 = FUN_0053b8f0(local_40,0);
      iVar6 = FUN_005f5550();
      if (local_40 == 4) {
        iVar7 = FUN_0053b930(4,0);
        local_64 = FUN_005f5590();
        local_64 = iVar7 + -0x44 + local_64;
      }
      else {
        local_64 = FUN_0053b930(local_40,0);
        local_64 = local_64 + -0x11;
      }
      (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0xb4))(local_3c);
      (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0x44))
                ((iVar8 + ((iVar4 + 0x23) - iVar5) / 2) - iVar6 / 2,local_64);
      (**(code **)(**(int **)(param_1 + 0x80 + local_40 * 4) + 0x74))();
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_007933e8 + 0x2f0))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


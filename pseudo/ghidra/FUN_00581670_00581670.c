// FUN_00581670  00581670

void __fastcall FUN_00581670(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_c;
  int local_8;
  
  param_1[0x101e] = 0;
  param_1[0x101f] = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    strcpy((char *)(param_1 + local_8 * 4 + 0xe6e),(char *)&PTR_006b27f8);
    param_1[local_8 + 0x101a] = 0;
    param_1[local_8 + 0xe7e] = 0;
    param_1[local_8 + 0xe82] = 0;
    param_1[local_8 + 0xe86] = 0;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
      param_1[local_14 * 100 + local_8 + 0xe8a] = 0;
    }
  }
  local_8 = 0;
  do {
    iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar4 <= local_8) {
      for (local_8 = 0; local_8 < param_1[0x101e]; local_8 = local_8 + 1) {
        FUN_005e2b90(param_1 + local_8 * 4 + 0xe6e,param_1 + local_8 * 900 + 0x5e,0xffffffff);
      }
      iVar4 = *(int *)(DAT_007947e0 + 0x98);
      for (local_8 = 0; local_8 < param_1[0x101e]; local_8 = local_8 + 1) {
        for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
          if ((param_1[local_8 * 900 + local_14 * 9 + 0x65] != 0) &&
             ((char)param_1[local_8 * 900 + local_14 * 9 + 0x5f] == '\0')) {
            param_1[local_8 + 0xe82] = param_1[local_8 + 0xe82] + 1;
            iVar6 = param_1[local_8 * 900 + local_14 * 9 + 0x65];
            iVar7 = (int)*(char *)((int)param_1 + local_14 * 0x24 + local_8 * 0xe10 + 0x17a);
            if (((iVar6 <= iVar4) && (iVar4 <= iVar6 + -1 + iVar7)) ||
               ((iVar6 <= iVar4 + 1000 && (iVar4 + 1000 <= iVar6 + -1 + iVar7)))) {
              param_1[local_8 * 100 + param_1[local_8 + 0xe86] + 0xe8a] = local_14;
              param_1[local_8 + 0xe86] = param_1[local_8 + 0xe86] + 1;
            }
          }
        }
        FUN_0062fde0("Player %d has %d valid tickets for this game.\n",local_8,
                     param_1[local_8 + 0xe86]);
      }
      param_1[0x101e] = 0;
      local_c = -1;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        if ((param_1[local_8 + 0xe86] != 0) &&
           (param_1[0x101e] = param_1[0x101e] + 1, local_c == -1)) {
          local_c = local_8;
        }
      }
      if (param_1[0x101e] == 0) {
        (**(code **)(*param_1 + 0x70))();
      }
      else {
        FUN_00581610(local_c);
        FUN_00581b70();
        FUN_005822e0();
      }
      return;
    }
    FUN_005dcb00(local_8);
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 == 2) {
LAB_005817ce:
      bVar1 = true;
    }
    else {
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 3) goto LAB_005817ce;
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1[0x101e] < 3) {
        FUN_005dcb00(local_8);
        cVar2 = FUN_005d5780();
        param_1[param_1[0x101e] + 0x101a] = (uint)(cVar2 == '\0');
      }
      FUN_005dcb00(local_8);
      iVar4 = FUN_0063aac0();
      iVar4 = strcmp((char *)(param_1 + param_1[0x101e] * 4 + 0xe6e),(char *)(iVar4 + 4));
      if (iVar4 != 0) {
        iVar4 = param_1[0x101e];
        param_1[0x101e] = param_1[0x101e] + 1;
        FUN_005dcb00(local_8);
        iVar6 = FUN_0063aac0();
        strcpy((char *)(param_1 + iVar4 * 4 + 0xe6e),(char *)(iVar6 + 4));
      }
      FUN_005dcb00(local_8);
      uVar3 = FUN_005d5780();
      FUN_0062fde0("Gender:%d \n",uVar3);
    }
    local_8 = local_8 + 1;
  } while( true );
}


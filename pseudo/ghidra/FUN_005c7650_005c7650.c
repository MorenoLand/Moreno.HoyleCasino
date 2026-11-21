// FUN_005c7650  005c7650

void __fastcall FUN_005c7650(int *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint local_98;
  uint local_90;
  int local_8c;
  int iStack_88;
  undefined4 uStack_84;
  int *local_40;
  int local_34;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a8922;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005c1550(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(param_1[0x15]) {
  case 1:
    pvVar2 = operator_new(0x2c);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_84 = 0;
    }
    else {
      uStack_84 = FUN_00600630(0x315998,0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_84);
    param_1[0x1c] = 1;
    FUN_00610980(param_1[0x14] + 0x5c);
    FUN_00610980(param_1[0x14] + 0xdc);
    FUN_005dd400(1);
    FUN_005c74b0(2);
  case 2:
    iVar4 = FUN_005eb220();
    if (iVar4 == 0) {
      FUN_0062fde0("Initial shuffle\n");
      FUN_005c8fc0();
      FUN_005c9050();
      FUN_005c74b0(0);
      FUN_005c74b0(5);
    }
    break;
  case 3:
    iVar4 = FUN_005eb220();
    if (iVar4 == 0) {
      param_1[0x1c] = param_1[0x1c] + -1;
      if (param_1[0x1c] < 1) {
        FUN_005c90c0();
        FUN_005c74b0(4);
      }
      else {
        FUN_0062fde0("Reshuffle!\n");
        FUN_005c9050();
        FUN_005c74b0(5);
      }
    }
    break;
  case 4:
    iVar4 = FUN_005eb220();
    iVar3 = FUN_005eb240();
    if (iVar3 + -4 < iVar4) {
      FUN_00610e70(param_1[0x14] + 0x5c,0);
    }
    if (*(int *)(param_1[0x1b] + 0x180) == 0) {
      FUN_0062fde0(&UNK_006d1c64);
      iVar4 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
      param_1[0x1a] = iVar4;
      FUN_00610e70(param_1[0x14] + 0x5c,0);
      FUN_005dd400(0);
      cVar1 = FUN_005c9740();
      if (cVar1 == '\0') {
        iVar4 = FUN_005be3f0();
        if (0 < iVar4) {
          cVar1 = FUN_005c9940();
          if (cVar1 == '\0') {
            iStack_88 = param_1[0x14] + 0x7c;
          }
          else {
            iStack_88 = param_1[0x14] + 0xbc;
          }
          FUN_00610980(iStack_88);
        }
        FUN_005c74b0(0);
      }
      else {
        FUN_00610980(param_1[0x14] + 0x9c);
        FUN_005c74b0(6);
      }
    }
    break;
  case 5:
    iVar4 = FUN_005eb220();
    if (iVar4 != 0) {
      FUN_00610980(param_1[0x14] + 0xdc);
      FUN_005c74b0(3);
    }
    break;
  case 6:
    iVar4 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
    if (3000 < (uint)(iVar4 - param_1[0x1a])) {
      FUN_005c1a80();
    }
  }
  local_20 = *(int *)(param_1[0x14] + 0x54);
  local_14 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  local_14 = local_14 - param_1[0x1a];
  local_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1[0x14] + 0x58) != 0) {
    iVar4 = param_1[0x14];
    iVar3 = FUN_005eb220();
    local_1c = *(int *)(*(int *)(iVar4 + 0x58) + iVar3 * 8);
    local_18 = *(int *)(*(int *)(iVar4 + 0x58) + 4 + iVar3 * 8);
  }
  for (local_24 = 0; -1 < *(int *)(local_20 + local_24 * 0x14); local_24 = local_24 + 1) {
    iVar4 = *(int *)(local_20 + local_24 * 0x14);
    iVar3 = param_1[1];
    if (*(int *)(iVar3 + 0x18 + iVar4 * 4) < 0) {
      local_8c = -*(int *)(iVar3 + 0x18 + iVar4 * 4);
    }
    else {
      local_8c = *(int *)(iVar3 + 0x18 + iVar4 * 4);
    }
    local_8c = *(int *)(local_20 + 4 + local_24 * 0x14) + local_8c;
    FUN_005c74e0(iVar4,local_8c,&local_30);
    if (param_1[0x17] == 0) {
      local_90 = 0;
    }
    else {
      local_90 = param_1[0x18] - param_1[0x17] >> 2;
    }
    if (local_90 <= local_24) {
      _invalid_parameter_noinfo();
    }
    local_40 = *(int **)(param_1[0x17] + local_24 * 4);
    if (((local_40 == (int *)0x0) || (iVar3 = FUN_005eafc0(), iVar3 != local_30)) ||
       (iVar3 = FUN_005eb110(), iVar3 != local_2c)) {
      if ((local_40 != (int *)0x0) && (local_40 != (int *)0x0)) {
        (**(code **)*local_40)(1);
      }
      local_40 = (int *)FUN_005c7570(iVar4,local_8c);
      if (param_1[0x17] == 0) {
        local_98 = 0;
      }
      else {
        local_98 = param_1[0x18] - param_1[0x17] >> 2;
      }
      if (local_98 <= local_24) {
        _invalid_parameter_noinfo();
      }
      *(int **)(param_1[0x17] + local_24 * 4) = local_40;
    }
    local_34 = 0;
    cVar1 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar1 != '\0') && (iVar4 = FUN_005c9960(iVar4,local_8c), 0 < iVar4)) {
      iVar4 = FUN_005eb240();
      local_34 = (local_14 / 0xfa) % (iVar4 + 1);
      if (iVar4 + 1 <= local_34) {
        local_34 = iVar4;
      }
    }
    iVar4 = FUN_005eb220();
    if (local_34 != iVar4) {
      (**(code **)(*local_40 + 0xb0))(local_34);
    }
    (**(code **)(*local_40 + 0x44))
              (local_1c + *(int *)(local_20 + 8 + local_24 * 0x14),
               local_18 + *(int *)(local_20 + 0xc + local_24 * 0x14));
  }
  FUN_005c1b60();
  FUN_005c1d60(0);
  ExceptionList = local_10;
  return;
}


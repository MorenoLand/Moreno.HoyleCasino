// FUN_0060ff40  0060ff40

void __fastcall FUN_0060ff40(int *param_1)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  int local_34;
  uint local_30;
  int local_20;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  DVar2 = GetTickCount();
  bVar1 = false;
  iVar3 = FUN_005fc360();
  if (iVar3 == 0) {
    local_10 = param_1[8];
    for (local_8 = 0; local_8 < param_1[9]; local_8 = local_8 + 1) {
      iVar3 = FUN_005eb220();
      local_20 = local_10 % 10 << 1;
      local_c = 0x13;
      if (param_1[10] <= local_8) {
        local_c = 0x14;
        local_20 = 0x14;
      }
      if (iVar3 == local_20) {
        if ((param_1[9] < (int)*(short *)(param_1[0xd] + 0x184)) && (param_1[9] == local_8 + 1)) {
          param_1[9] = param_1[9] + 1;
          param_1[0xb] = DVar2;
        }
      }
      else {
        if ((char)param_1[0xc] == '\0') {
          local_30 = iVar3 - 1;
        }
        else {
          local_30 = iVar3 + 1;
        }
        local_14 = local_30;
        if ((int)local_c < (int)local_30) {
          local_14 = 0;
        }
        if (0x7fffffff < local_14) {
          local_14 = local_c;
        }
        (**(code **)(**(int **)(*(int *)(param_1[0xd] + 0x18c) + local_8 * 4) + 0xb0))(local_14);
        bVar1 = true;
      }
      local_10 = local_10 / 10;
    }
    if (bVar1) {
      if (param_1[0xb] + 300U < DVar2) {
        if (param_1[9] < (int)*(short *)(param_1[0xd] + 0x184)) {
          param_1[9] = param_1[9] + 1;
        }
        param_1[0xb] = DVar2;
      }
      (**(code **)(*param_1 + 4))(0);
      (**(code **)(*param_1 + 0x1c))(*(undefined4 *)(param_1[0xd] + 0x178));
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\sciOdometer.cpp",0x14c);
  }
  if (!bVar1) {
    if ((char)param_1[0xc] == '\0') {
      local_34 = param_1[0xd] + 0x1b0;
    }
    else {
      local_34 = param_1[0xd] + 400;
    }
    FUN_006110a0(local_34,0);
    FUN_005f5df0(0);
  }
  return;
}


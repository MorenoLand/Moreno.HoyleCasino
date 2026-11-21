// FUN_005c32b0  005c32b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c32b0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  float local_10;
  uint local_8;
  
  FUN_005c1550();
  iVar4 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  local_10 = ((float)iVar4 - (float)_DAT_0079360c) / (float)_DAT_006bc208;
  if ((float)_DAT_006d1dc8 < local_10) {
    local_10 = _DAT_006d1dc0;
  }
  _DAT_0079360c = iVar4;
  fVar5 = (float10)FUN_005c21c0();
  if ((param_1[0x15] == 3) && (3000 < iVar4 - param_1[0x1a])) {
    FUN_005c1a80();
  }
  bVar1 = true;
  bVar2 = true;
  for (local_8 = 0; (int)local_8 < **(int **)(param_1[1] + 0x10); local_8 = local_8 + 1) {
    if (param_1[0x17] == 0) {
      local_58 = 0;
    }
    else {
      local_58 = (param_1[0x18] - param_1[0x17]) / 0x34;
    }
    if (local_58 <= local_8) {
      _invalid_parameter_noinfo();
    }
    FUN_005c3b10((float)(fVar5 * (float10)local_10));
    if (param_1[0x17] == 0) {
      local_5c = 0;
    }
    else {
      local_5c = (param_1[0x18] - param_1[0x17]) / 0x34;
    }
    if (local_5c <= local_8) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(param_1[0x17] + 0x1c + local_8 * 0x34) < 4) {
      if (param_1[0x17] == 0) {
        local_60 = 0;
      }
      else {
        local_60 = (param_1[0x18] - param_1[0x17]) / 0x34;
      }
      if (local_60 <= local_8) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)(param_1[0x17] + 0x1c + local_8 * 0x34) != 1) {
        bVar1 = false;
      }
    }
    if (param_1[0x17] == 0) {
      local_64 = 0;
    }
    else {
      local_64 = (param_1[0x18] - param_1[0x17]) / 0x34;
    }
    if (local_64 <= local_8) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(param_1[0x17] + 0x1c + local_8 * 0x34) != 1) {
      bVar2 = false;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x24))();
  if (((cVar3 != '\0') && (param_1[0x15] != 2)) && (bVar1)) {
    FUN_005c3110(2);
    FUN_005c90c0();
    for (local_8 = 0; (int)local_8 < **(int **)(param_1[1] + 0x10); local_8 = local_8 + 1) {
      if (param_1[0x17] == 0) {
        local_68 = 0;
      }
      else {
        local_68 = (param_1[0x18] - param_1[0x17]) / 0x34;
      }
      if (local_68 <= local_8) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)(param_1[0x17] + 0x1c + local_8 * 0x34) < 5) {
        if (param_1[0x17] == 0) {
          local_6c = 0;
        }
        else {
          local_6c = (param_1[0x18] - param_1[0x17]) / 0x34;
        }
        if (local_6c <= local_8) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(param_1[0x17] + 0x1c + local_8 * 0x34) != 1) {
          if (param_1[0x17] == 0) {
            local_70 = 0;
          }
          else {
            local_70 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_70 <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x1c + local_8 * 0x34) = 5;
          if (param_1[0x17] == 0) {
            local_74 = 0;
          }
          else {
            local_74 = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_74 <= local_8) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(param_1[0x17] + 0x10 + local_8 * 0x34) =
               *(undefined4 *)(param_1[0x14] + 0x7c);
          iVar4 = param_1[1];
          if (*(int *)(iVar4 + 0x18 + local_8 * 4) < 0) {
            local_78 = -*(int *)(iVar4 + 0x18 + local_8 * 4);
          }
          else {
            local_78 = *(int *)(iVar4 + 0x18 + local_8 * 4);
          }
          if (param_1[0x17] == 0) {
            local_7c = 0;
          }
          else {
            local_7c = (param_1[0x18] - param_1[0x17]) / 0x34;
          }
          if (local_7c <= local_8) {
            _invalid_parameter_noinfo();
          }
          FUN_005c42d0(local_78);
        }
      }
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x24))();
  if ((cVar3 != '\0') && (bVar2)) {
    iVar4 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
    param_1[0x1a] = iVar4;
    FUN_00610e70(param_1[0x14] + 0x88,0);
    FUN_005dd400(0);
    FUN_005c9140();
    cVar3 = FUN_005c9740();
    if (cVar3 == '\0') {
      FUN_00610e70(param_1[0x14] + 0x88,0);
      iVar4 = FUN_005be3f0();
      if (0 < iVar4) {
        cVar3 = FUN_005c9940();
        if (cVar3 == '\0') {
          local_80 = param_1[0x14] + 0xa8;
        }
        else {
          local_80 = param_1[0x14] + 0xe8;
        }
        FUN_00610980(local_80);
      }
      FUN_005c3110(0);
    }
    else {
      FUN_00610980(param_1[0x14] + 200);
      FUN_005c3110(3);
    }
  }
  FUN_005c1b60();
  FUN_005c1d60(0);
  return;
}


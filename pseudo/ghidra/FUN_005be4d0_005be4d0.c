// FUN_005be4d0  005be4d0

void __thiscall FUN_005be4d0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined1 local_2c [8];
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (local_7c < param_2) {
    if (*(int *)(param_1 + 4) == 0) {
      local_80 = 0;
    }
    else {
      local_80 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    uVar1 = *(uint *)(param_1 + 8);
    local_c = 0;
    if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
      _invalid_parameter_noinfo();
    }
    local_c = param_1;
    local_8 = uVar1;
    FUN_005be680(param_1,uVar1,param_2 - local_80,&stack0x00000008);
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      local_84 = 0;
    }
    else {
      local_84 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (param_2 < local_84) {
      uVar1 = *(uint *)(param_1 + 8);
      local_14 = 0;
      if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1))
      {
        _invalid_parameter_noinfo();
      }
      uVar2 = *(uint *)(param_1 + 4);
      local_1c = 0;
      local_14 = param_1;
      local_10 = uVar1;
      if (((param_1 == 0) || (uVar2 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar2))
      {
        _invalid_parameter_noinfo();
      }
      local_1c = param_1;
      local_18 = uVar2;
      FUN_005beeb0(param_2);
      local_24 = param_1;
      local_20 = uVar2;
      FUN_005bc490(local_2c,param_1,uVar2,local_14,local_10);
    }
  }
  return;
}


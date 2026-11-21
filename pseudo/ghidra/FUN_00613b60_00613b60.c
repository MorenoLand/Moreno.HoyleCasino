// FUN_00613b60  00613b60

void __thiscall FUN_00613b60(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_c;
  
  DAT_00795fa8 = (param_2[2] - *param_2) * (param_2[3] - param_2[1]) + DAT_00795fa8;
  FUN_006303d0(param_1,param_2);
  if (DAT_00795fb6 != '\0') {
    local_20 = (DAT_015e5604 + 1) % 0xf;
    if (local_20 < 2) {
      local_20 = 2;
    }
    DAT_015e5604 = local_20;
    iVar1 = param_2[3];
    iVar2 = FUN_00623910();
    if (iVar1 + 1 < iVar2) {
      local_24 = param_2[3] + 1;
    }
    else {
      local_24 = FUN_00623910();
    }
    if (*param_2 == 1 || *param_2 + -1 < 0) {
      local_28 = 0;
    }
    else {
      local_28 = *param_2 + -1;
    }
    iVar1 = param_2[2];
    iVar2 = FUN_006238f0();
    if (iVar1 + 1 < iVar2) {
      local_2c = param_2[2] + 1;
    }
    else {
      local_2c = FUN_006238f0();
    }
    if (param_2[1] == 1 || param_2[1] + -1 < 0) {
      local_30 = 0;
    }
    else {
      local_30 = param_2[1] + -1;
    }
    for (local_c = local_30; local_c < local_24; local_c = local_c + DAT_015e5604) {
      FUN_00623c60(local_28,local_2c,local_c,0xff0000ff,4);
    }
  }
  return;
}


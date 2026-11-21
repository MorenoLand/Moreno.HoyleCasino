// FUN_006277f0  006277f0

undefined1 __thiscall FUN_006277f0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  double local_14;
  int local_c;
  char local_5;
  
  if ((param_3 == (int *)0x0) || (param_4 == (int *)0x0)) {
    local_78 = 0;
  }
  else {
    local_18 = *(int *)(param_1 + 0x1c);
    local_1c = *(int *)(param_1 + 0x18);
    local_20 = *(int *)(param_1 + 0x14);
    local_24 = *(int *)(param_1 + 0x10);
    FUN_00627fa0(&local_24,&local_24,param_2);
    iVar1 = *(int *)(param_1 + 0x54);
    *param_3 = *(int *)(param_1 + 0x50);
    param_3[1] = iVar1;
    iVar1 = *(int *)(param_1 + 0x5c);
    *param_4 = *(int *)(param_1 + 0x58);
    param_4[1] = iVar1;
    local_c = param_4[1] - param_3[1];
    local_14 = (double)param_3[1] -
               (double)*param_3 * ((double)local_c / (double)(*param_4 - *param_3));
    local_5 = *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x18);
    if ((*param_3 < local_24) || (local_1c < *param_3)) {
      if ((bool)local_5) {
        return 0;
      }
      local_5c = *param_3;
      if (local_5c < local_24) {
        local_58 = local_24;
      }
      else {
        if (local_1c <= local_5c) {
          local_5c = local_1c;
        }
        local_58 = local_5c;
      }
      *param_3 = local_58;
      iVar1 = FUN_00686cc0();
      param_3[1] = iVar1;
    }
    if ((param_3[1] < local_20) || (local_18 < param_3[1])) {
      local_64 = param_3[1];
      if (local_64 < local_20) {
        local_60 = local_20;
      }
      else {
        if (local_18 <= local_64) {
          local_64 = local_18;
        }
        local_60 = local_64;
      }
      param_3[1] = local_60;
      if (local_5 == '\0') {
        iVar1 = FUN_00686cc0();
        *param_3 = iVar1;
      }
      if ((*param_3 < local_24) || (local_1c < *param_3)) {
        return 0;
      }
    }
    if ((*param_4 < local_24) || (local_1c < *param_4)) {
      if (local_5 != '\0') {
        return 0;
      }
      local_6c = *param_4;
      if (local_6c < local_24) {
        local_68 = local_24;
      }
      else {
        if (local_1c <= local_6c) {
          local_6c = local_1c;
        }
        local_68 = local_6c;
      }
      *param_4 = local_68;
      iVar1 = FUN_00686cc0();
      param_4[1] = iVar1;
    }
    if ((param_4[1] < local_20) || (local_18 < param_4[1])) {
      local_74 = param_4[1];
      if (local_74 < local_20) {
        local_70 = local_20;
      }
      else {
        if (local_18 <= local_74) {
          local_74 = local_18;
        }
        local_70 = local_74;
      }
      param_4[1] = local_70;
      if (local_5 == '\0') {
        iVar1 = FUN_00686cc0();
        *param_4 = iVar1;
      }
      if ((*param_4 < local_24) || (local_1c < *param_4)) {
        return 0;
      }
    }
    if ((((*param_3 == 0) && (*param_4 == 0)) && (param_3[1] == 0)) && (param_4[1] == 0)) {
      local_78 = 0;
    }
    else {
      local_78 = 1;
    }
  }
  return local_78;
}


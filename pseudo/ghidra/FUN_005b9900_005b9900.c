// FUN_005b9900  005b9900

void __thiscall FUN_005b9900(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  uint local_58;
  int local_54;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_54 = 0;
  }
  else {
    local_54 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
  }
  if ((int)param_2 < local_54) {
    if (*(int *)(param_1 + 8) == 0) {
      local_58 = 0;
    }
    else {
      local_58 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
    }
    if (local_58 <= param_2) {
      _invalid_parameter_noinfo();
    }
    local_10 = param_2 * 0x10 + *(int *)(param_1 + 8);
    FUN_005b9320(param_2);
    FUN_005b9fd0(&local_c);
    FUN_005ba030(&local_18);
    while( true ) {
      if ((local_c == 0) || (local_c != local_18)) {
        _invalid_parameter_noinfo();
      }
      if (local_8 == local_14) break;
      if (local_c == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(undefined4 **)(local_c + 8) <= local_8) {
        _invalid_parameter_noinfo();
      }
      iVar1 = FUN_005fb2b0(*local_8);
      if (iVar1 != 0) {
        FUN_005f5460(param_3);
      }
      if (local_c == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(undefined4 **)(local_c + 8) <= local_8) {
        _invalid_parameter_noinfo();
      }
      iVar1 = FUN_005fb550(*local_8);
      if (iVar1 != 0) {
        FUN_005f5460(param_3);
      }
      FUN_005ba190();
    }
  }
  return;
}


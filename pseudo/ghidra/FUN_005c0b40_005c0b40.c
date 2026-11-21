// FUN_005c0b40  005c0b40

void __fastcall FUN_005c0b40(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint local_c0;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a844e;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MLVSlotDisplay::vftable;
  local_8 = 2;
  local_14 = 0;
  while( true ) {
    if (param_1[0xb] == 0) {
      local_b0 = 0;
    }
    else {
      local_b0 = (int)(param_1[0xc] - param_1[0xb]) >> 2;
    }
    if (local_b0 <= (int)local_14) break;
    if (param_1[0xb] == 0) {
      local_b4 = 0;
    }
    else {
      local_b4 = (int)(param_1[0xc] - param_1[0xb]) >> 2;
    }
    if (local_b4 <= local_14) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(param_1[0xb] + local_14 * 4) != 0) {
      if (param_1[0xb] == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = (int)(param_1[0xc] - param_1[0xb]) >> 2;
      }
      if (local_b8 <= local_14) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(undefined4 **)(param_1[0xb] + local_14 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
    if (param_1[0xb] == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = (int)(param_1[0xc] - param_1[0xb]) >> 2;
    }
    if (local_c0 <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(undefined4 *)(param_1[0xb] + local_14 * 4) = 0;
    local_14 = local_14 + 1;
  }
  local_28[0] = param_1[0xe];
  local_28[1] = param_1[0xf];
  local_28[2] = param_1[0x10];
  local_28[3] = param_1[0x11];
  local_18 = param_1[0x12];
  for (local_14 = 0; (int)local_14 < 5; local_14 = local_14 + 1) {
    if ((local_28[local_14] != 0) && ((undefined4 *)local_28[local_14] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)local_28[local_14])(1);
    }
  }
  if ((param_1[0x13] != 0) && ((undefined4 *)param_1[0x13] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x13])(1,uVar2);
  }
  if ((param_1[4] != 0) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  if ((param_1[5] != 0) && ((undefined4 *)param_1[5] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  if ((param_1[1] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  local_8._0_1_ = 1;
  FUN_005be450();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_005be450();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}


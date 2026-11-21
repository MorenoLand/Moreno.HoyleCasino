// FUN_00582cd0  00582cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00582cd0(undefined4 *param_1)

{
  undefined4 uVar1;
  char local_1c [16];
  uint local_c;
  float local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1[0x70] == param_1[0x6f]) {
    FUN_005f87d0();
    *(undefined4 *)(DAT_00793584 + 0x3c0c) = 0;
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)*param_1)(1);
    }
  }
  else {
    FUN_005e0ea0();
    if (DAT_00793584 != 0) {
      FUN_00589050(*(undefined4 *)(DAT_007947e0 + 0x98));
      FUN_005890f0(0);
    }
    param_1[0x70] = param_1[0x70] + 1;
    sprintf(local_1c,"%d/%d",param_1[0x70],param_1[0x6f]);
    (**(code **)(*(int *)param_1[0x72] + 0xb4))(local_1c);
    if (param_1[0x70] == param_1[0x6f]) {
      local_8 = _DAT_006cc2e8;
    }
    else {
      local_8 = ((float)_DAT_006cc2e0 / (float)(int)param_1[0x6f]) * (float)(int)param_1[0x70];
    }
    uVar1 = FUN_00686cc0(10);
    (**(code **)(*(int *)param_1[0x73] + 0x78))(uVar1);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


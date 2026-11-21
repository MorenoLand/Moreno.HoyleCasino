// FUN_00457110  00457110

void __thiscall FUN_00457110(int param_1,short *param_2,short *param_3)

{
  int iVar1;
  int local_20;
  int local_1c;
  short local_18 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_20 = 0;
  for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
    local_18[local_1c] = 0;
  }
  for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
    iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_1c * 2));
    if (iVar1 != *(int *)(param_1 + 0x2d0)) {
      local_18[local_20] = *(short *)(param_1 + 4 + local_1c * 2);
      local_20 = local_20 + 1;
    }
  }
  *param_2 = local_18[0];
  *param_3 = local_18[1];
  if ((*param_2 == 0) || (*param_3 == 0)) {
    FUN_005e9f20("card1 != EMPTY_CARD && card2 != EMPTY_CARD","..\\Casino\\paigowai.cpp",0x1076);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


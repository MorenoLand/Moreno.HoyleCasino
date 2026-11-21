// FUN_0056b710  0056b710

void __thiscall FUN_0056b710(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 auStack_1c [6];
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    auStack_1c[local_8] = *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2);
  }
  FUN_0056b4b0(param_2);
  uVar1 = FUN_005592a0(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 0xf6 + param_2 * 10);
  *param_3 = uVar1;
  local_c = FUN_005698c0(*param_3);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2) = auStack_1c[local_8];
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}


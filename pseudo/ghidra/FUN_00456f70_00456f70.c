// FUN_00456f70  00456f70

void __thiscall
FUN_00456f70(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
            )

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar1;
  undefined2 extraout_var_02;
  char local_2c [8];
  undefined2 auStack_24 [8];
  short local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    auStack_24[local_14] = *(undefined2 *)(param_1 + 4 + local_14 * 2);
  }
  FUN_004530b0(*(undefined4 *)(param_1 + 0x14),param_2,CONCAT22(local_14 >> 0xf,param_3),local_2c);
  FUN_004530b0(*(undefined4 *)(param_1 + 0x14),CONCAT22(extraout_var_00,param_4),
               CONCAT22(extraout_var,param_5),local_10);
  iVar1 = (int)local_10[0];
  if (local_2c[0] != iVar1) {
    FUN_00453550(local_2c,local_10);
    iVar1 = 0;
  }
  FUN_00452fd0(CONCAT22((short)((uint)iVar1 >> 0x10),param_2),param_3,local_2c);
  FUN_00452fd0(CONCAT22(extraout_var_02,param_4),CONCAT22(extraout_var_01,param_5),local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


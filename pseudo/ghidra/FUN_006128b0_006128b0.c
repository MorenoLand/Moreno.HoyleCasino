// FUN_006128b0  006128b0

/* WARNING: Removing unreachable block (ram,0x00612931) */

undefined4 * __thiscall FUN_006128b0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_58;
  
  FUN_00612b80(param_4 + 0x48,*(undefined4 *)(param_1 + 8),param_4);
  iVar1 = *(int *)(param_1 + 8);
  for (local_58 = *(int *)(param_1 + 8) + -0x48; local_58 != iVar1; local_58 = local_58 + 0x48) {
    FUN_005be450();
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x48;
  *param_2 = param_3;
  param_2[1] = param_4;
  return param_2;
}


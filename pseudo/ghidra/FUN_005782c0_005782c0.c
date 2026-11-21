// FUN_005782c0  005782c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005782c0(int param_1,int param_2,undefined4 param_3)

{
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  for (local_110 = 0; local_110 < param_2; local_110 = local_110 + 1) {
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x24) = param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 3;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
    FUN_00578420();
    FUN_005784e0();
  }
  sprintf(local_10c,"Number of games: %d\nAmount won: %d (%d + %d)\nPercentage: %f\n",param_2,
          *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
          *(undefined4 *)(param_1 + 0x1c),
          (double)(((float)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c)) /
                   (float)(param_2 * *(int *)(param_1 + 0x24))) * (float)_DAT_006b4b00));
  FUN_0062fde0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


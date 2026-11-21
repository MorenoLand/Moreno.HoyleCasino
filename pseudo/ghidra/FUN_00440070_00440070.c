// FUN_00440070  00440070

void __fastcall FUN_00440070(int param_1)

{
  int iVar1;
  int local_20;
  char local_18 [12];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      sprintf(local_18,"%d - %d ",
              *(undefined4 *)(DAT_007906f0 + local_20 * 0x78 + 0x50 + local_8 * 8),
              *(undefined4 *)(DAT_007906f0 + local_20 * 0x78 + 0x54 + local_8 * 8));
      iVar1 = *(int *)(DAT_007906f0 + local_20 * 0x78 + 0x54 + local_8 * 8);
      if (*(int *)(param_1 + 0x34 + (local_20 * 3 + local_8) * 4) != 0) {
        (**(code **)(**(int **)(param_1 + 0x34 + (local_20 * 3 + local_8) * 4) + 0xb4))(local_18);
        (**(code **)(**(int **)(param_1 + 0x34 + (local_20 * 3 + local_8) * 4) + 0x48))
                  (*(int *)(&DAT_00713818 + (local_20 * 3 + local_8) * 8) + -0x11 +
                   ((iVar1 != 2) - 1 & 3));
        (**(code **)(**(int **)(param_1 + 0x34 + (local_20 * 3 + local_8) * 4) + 0x74))();
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


// FUN_0062caa0  0062caa0

void __fastcall FUN_0062caa0(int param_1)

{
  int local_a8;
  size_t local_a4;
  ushort *local_a0;
  int *local_9c;
  int local_98;
  char local_94 [128];
  uint local_14;
  ushort *local_10;
  uint local_c;
  FILE *local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_10 = (ushort *)0x0;
  local_a4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    for (local_c = 0; local_c < **(uint **)(param_1 + 0x14); local_c = local_c + 1) {
      local_9c = (int *)(*(int *)(param_1 + 0x14) + 8 + local_c * 0x10);
      for (local_a8 = 0;
          ((&PTR_DAT_00761f44)[local_a8] != (undefined *)0x0 &&
          (*local_9c != *(int *)(s_WAVEPAL_SYNCFONTPLYRWAZ_SONGTEX_C_00761f1c + local_a8 * 4)));
          local_a8 = local_a8 + 1) {
      }
      if ((&PTR_DAT_00761f44)[local_a8] != (undefined *)0x0) {
        sprintf(local_94,"%d.%s",local_9c[1],(&PTR_DAT_00761f44)[local_a8]);
        local_8 = (FILE *)FUN_005ea9c0(local_94,&DAT_006c2d2c);
        if (local_8 != (FILE *)0x0) {
          FUN_0062fde0(local_94);
          FUN_0062fde0(&DAT_006bedd8);
          FUN_0062b220(*local_9c,local_9c[1],&local_10,&local_a4);
          if (*local_9c == 0x434e5953) {
            local_a0 = local_10;
            for (local_98 = 0; local_98 < (int)local_a4; local_98 = local_98 + 2) {
              *local_a0 = *local_a0 << 8 | *local_a0 >> 8;
              local_a0 = local_a0 + 1;
            }
          }
          fwrite(local_10,local_a4,1,local_8);
          operator_delete(local_10);
          fclose(local_8);
        }
      }
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x326);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


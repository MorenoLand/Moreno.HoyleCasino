// FUN_0057e3d0  0057e3d0

void __fastcall FUN_0057e3d0(int param_1)

{
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  sprintf(local_18,"%d:%02d",*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xb4))(local_18);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x74))();
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(DAT_007947e0 + 0x98);
  FUN_0057f6d0(*(undefined4 *)(param_1 + 500));
  FUN_0057f5f0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// FUN_0057e550  0057e550

void __fastcall FUN_0057e550(int param_1)

{
  char local_24 [16];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = FUN_005f3e50();
  local_c = DAT_0075d7ac - local_c;
  local_8 = local_c / 0xe10;
  local_10 = (local_c % 0xe10) / 0x3c;
  if (*(int *)(param_1 + 500) != *(int *)(DAT_007947e0 + 0x98)) {
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(DAT_007947e0 + 0x98);
    FUN_0057f6d0(*(undefined4 *)(param_1 + 500));
    FUN_0057f5f0();
  }
  if ((local_8 != *(int *)(param_1 + 0x1e8)) || (local_10 != *(int *)(param_1 + 0x1ec))) {
    *(int *)(param_1 + 0x1e8) = local_8;
    *(int *)(param_1 + 0x1ec) = local_10;
    sprintf(local_24,"%d:%02d",*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
    (**(code **)(**(int **)(param_1 + 0x1e4) + 0xb4))(local_24);
    if (*(int *)(param_1 + 0x1ec) % 3 == 0) {
      *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
      if (2 < *(int *)(param_1 + 0x1f0)) {
        *(undefined4 *)(param_1 + 0x1f0) = 0;
      }
      FUN_0057f660();
      (**(code **)(**(int **)(param_1 + 0x1fc) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0x70))();
      if (*(int *)(param_1 + 0x1f0) == 1) {
        (**(code **)(**(int **)(param_1 + 0x1f8) + 0x74))();
      }
      else if (*(int *)(param_1 + 0x1f0) == 2) {
        (**(code **)(**(int **)(param_1 + 0x1fc) + 0x74))();
      }
      else {
        FUN_0057f5f0();
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// FUN_0058f730  0058f730

void __fastcall FUN_0058f730(int param_1)

{
  char local_4c [68];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_4c,"%04d",
          *(undefined4 *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4));
  (**(code **)(**(int **)(param_1 + 0x178) + 0xb4))(local_4c);
  if (*(int *)(param_1 + 0x14c) == *(int *)(param_1 + 0x150)) {
    (**(code **)(**(int **)(param_1 + 0x178) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x178) + 0x74))();
  }
  FUN_0058f4a0();
  FUN_0058f950();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// FUN_00633000  00633000

void __fastcall FUN_00633000(int *param_1)

{
  undefined4 uVar1;
  char local_5c [64];
  undefined1 local_1c [16];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))("LanguageCode",&DAT_006da49c,local_1c,0x10);
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    uVar1 = (**(code **)(*param_1 + 0x218))(local_1c,&DAT_007626d8 + local_8 * 0x10);
    sprintf(local_5c,"%s%s.%s",uVar1);
    FUN_00604a20(local_5c);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


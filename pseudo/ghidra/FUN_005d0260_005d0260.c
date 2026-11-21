// FUN_005d0260  005d0260

void __fastcall FUN_005d0260(int param_1)

{
  int iVar1;
  size_t sVar2;
  char *_Str2;
  char local_2c [4];
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0063aac0();
  strcpy(local_28,(char *)(iVar1 + 4));
  sVar2 = strlen(local_28);
  sprintf(local_2c,"%c",(int)local_28[sVar2 - *(int *)(param_1 + 0x1fc)]);
  strcat((char *)(param_1 + 0x1c8),local_2c);
  FUN_005ecc60(0x6b);
  FUN_005ee710(param_1 + 0x1c8);
  (**(code **)(**(int **)(param_1 + 0x1c0) + 0x74))();
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    _Str2 = (char *)(**(code **)(**(int **)(param_1 + 0x1c0) + 0xb8))();
    strcmp((char *)(param_1 + 0x1c8),_Str2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


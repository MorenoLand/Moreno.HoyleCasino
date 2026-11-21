// FUN_0063b490  0063b490

void __thiscall FUN_0063b490(int param_1,undefined4 param_2)

{
  int iVar1;
  char *_Source;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00648270(1);
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 8) != -1) {
    (**(code **)(*DAT_0162ee84 + 0x3b4))(*(undefined4 *)(param_1 + 8),local_3c);
    _Source = local_3c;
    iVar1 = FUN_0063aac0();
    strcpy((char *)(iVar1 + 4),_Source);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


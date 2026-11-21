// FUN_0052cc70  0052cc70

void __fastcall FUN_0052cc70(int param_1)

{
  char cVar1;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x70))();
  FUN_0052d270();
  cVar1 = (**(code **)(*DAT_00793394 + 0x3c))();
  if (((cVar1 != '\0') && (*(char *)(DAT_0079338c + 0x7c) != '\0')) &&
     (*(int *)(DAT_007947e0 + 0x4f14) == 9)) {
    FUN_006311e0(*(undefined4 *)(DAT_0079338c + 0x78),local_28);
    cVar1 = FUN_00538440();
    if (cVar1 != '\0') {
      FUN_00531c50(local_28,0x10);
    }
  }
  FUN_0052dca0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


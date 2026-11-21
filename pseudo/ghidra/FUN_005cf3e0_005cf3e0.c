// FUN_005cf3e0  005cf3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005cf3e0(int param_1)

{
  FUN_005f85d0();
  (**(code **)(*DAT_0162ee84 + 0x80))
            ((-(uint)(DAT_016306a0 != 0) & 0xfffffffa) + 0x18aa2,0,0,10,0,0x3f800000,_DAT_006b3654,
             param_1 + 0x1c0);
  while (*(char *)(param_1 + 0x1bc) == '\0') {
    (**(code **)(*DAT_007960d8 + 0x10))();
    FUN_00613e70();
  }
  return;
}


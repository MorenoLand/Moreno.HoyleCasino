// FUN_00445ec0  00445ec0

void __fastcall FUN_00445ec0(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  *(undefined4 *)(DAT_007906f4 + 0xb0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x264) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x268 + local_8 * 4) = 0xffffffff;
  }
  iVar1 = FUN_0062fbf0(10);
  if (iVar1 == 0) {
    iVar1 = FUN_0062fbf0(5);
    *(undefined1 *)(param_1 + 0x78 + iVar1 * 0x78) = 1;
  }
  return;
}


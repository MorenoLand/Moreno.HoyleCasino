// FUN_00434620  00434620

void __fastcall FUN_00434620(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  FUN_00434bd0(0xffffffff,0);
  *(undefined4 *)(param_1 + 0xae0) = 0xffffffff;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
  }
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x110) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0xad4) = 0;
  return;
}


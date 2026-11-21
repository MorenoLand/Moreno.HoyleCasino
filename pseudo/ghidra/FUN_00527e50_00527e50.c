// FUN_00527e50  00527e50

void __fastcall FUN_00527e50(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0xdb8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xdbc) = 0;
  FUN_00528030(0xffffffff,0);
  FUN_00528b60(0xffffffff);
  *(undefined4 *)(param_1 + 0xdb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdb4) = 0xffffffff;
  for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    *(undefined4 *)(*(int *)(param_1 + 4 + local_8 * 4) + 0xf0) = 2;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
  }
  return;
}


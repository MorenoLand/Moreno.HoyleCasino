// FUN_005408b0  005408b0

void __fastcall FUN_005408b0(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00540ac0();
  FUN_00540b20(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xec) = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    *(undefined4 *)(param_1 + 0x98 + local_8 * 4) = 0xffffffff;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0xed) = 0;
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      FUN_00540b70(local_8,local_c,0);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xfb) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xf6) = 0;
  }
  FUN_005414a0();
  return;
}


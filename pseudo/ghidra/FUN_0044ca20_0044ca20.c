// FUN_0044ca20  0044ca20

void __fastcall FUN_0044ca20(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0044ccf0(0xffffffff,0);
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  FUN_0044cc90();
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_005cb9b0();
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      FUN_0044cd40(local_8,local_c,0);
    }
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0xc0 + local_8 * 2) = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0xc9) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xcd) = 0;
    *(undefined4 *)(param_1 + 0xdc + local_8 * 4) = 0xffffffff;
    *(undefined1 *)(param_1 + local_8 + 0xec) = 0;
  }
  return;
}


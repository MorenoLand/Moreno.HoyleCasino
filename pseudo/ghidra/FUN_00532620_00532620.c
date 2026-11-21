// FUN_00532620  00532620

void __thiscall FUN_00532620(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((-1 < param_2) && (param_2 < 3)) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    *(undefined4 *)(param_1 + 0x1e4) = param_3;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  FUN_005eb570();
  uVar1 = FUN_005f3e50();
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  return;
}


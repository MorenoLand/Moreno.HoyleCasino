// FUN_00549770  00549770

uint __fastcall FUN_00549770(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00548f80(*(undefined4 *)(param_1 + 0x20));
  if (uVar1 == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}


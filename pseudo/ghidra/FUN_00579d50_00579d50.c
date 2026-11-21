// FUN_00579d50  00579d50

void FUN_00579d50(void)

{
  undefined4 uVar1;
  
  *(undefined1 *)((int)DAT_0162ee84 + 0x25) = 0;
  FUN_00579fa0();
  uVar1 = (**(code **)(*DAT_0162ee84 + 600))();
  (**(code **)(*DAT_0162ee84 + 0x34))(uVar1);
  DAT_0079346d = 0;
  return;
}


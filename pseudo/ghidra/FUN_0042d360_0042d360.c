// FUN_0042d360  0042d360

void __fastcall FUN_0042d360(int param_1)

{
  DWORD DVar1;
  
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 5;
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 0x188) = DVar1;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  FUN_005eb570();
  FUN_005f2b20(0x30dbd3,1);
  return;
}


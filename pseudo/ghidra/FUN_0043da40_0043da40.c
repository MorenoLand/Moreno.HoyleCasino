// FUN_0043da40  0043da40

void __fastcall FUN_0043da40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0062fbf0(2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x184) = 1;
  }
  FUN_0043dbf0();
  FUN_0043dee0();
  return;
}


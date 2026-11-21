// FUN_005e8aa0  005e8aa0

void __fastcall FUN_005e8aa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    FUN_005e9aa0();
  }
  else if (iVar1 == 1) {
    FUN_005e8b40();
  }
  else if (iVar1 == 2) {
    FUN_005e93f0();
  }
  return;
}


// FUN_005bf2a0  005bf2a0

void __fastcall FUN_005bf2a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_005f3e50();
    *(int *)(param_1 + 0x10) = iVar1 + 0x168;
  }
  return;
}


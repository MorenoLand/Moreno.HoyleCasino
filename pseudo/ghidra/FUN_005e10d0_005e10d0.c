// FUN_005e10d0  005e10d0

int __fastcall FUN_005e10d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x98) == 1) {
    iVar1 = 1000;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98) + -1;
  }
  return iVar1;
}


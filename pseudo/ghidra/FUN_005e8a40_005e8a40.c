// FUN_005e8a40  005e8a40

void __thiscall FUN_005e8a40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    FUN_005e9c00(param_2);
  }
  else if (iVar1 == 1) {
    FUN_005e9160(param_2);
  }
  else if (iVar1 == 2) {
    FUN_005e97a0(param_2);
  }
  return;
}


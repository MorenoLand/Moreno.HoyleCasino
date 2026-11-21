// FUN_005bfc00  005bfc00

void __fastcall FUN_005bfc00(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005fb2b0(0xca);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}


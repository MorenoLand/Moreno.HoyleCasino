// FUN_0062ad70  0062ad70

void __fastcall FUN_0062ad70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    puVar2 = *(undefined4 **)(iVar1 + *(int *)(param_1 + 8) * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


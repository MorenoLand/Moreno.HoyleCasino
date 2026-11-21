// FUN_005f7d50  005f7d50

void __fastcall FUN_005f7d50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005fb0c0();
  FUN_005f8ce0(*(undefined4 *)(param_1 + 0x17c));
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0060ca40(0);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    operator_delete(*(void **)(param_1 + 0x14c));
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0060ca40(0);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  FUN_005f9a80();
  return;
}


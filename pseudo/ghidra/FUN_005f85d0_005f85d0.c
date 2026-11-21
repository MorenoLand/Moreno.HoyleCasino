// FUN_005f85d0  005f85d0

void __fastcall FUN_005f85d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1a8) + 0x30))();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x1a8) + 8))();
  }
  FUN_005f3f70(param_1);
  FUN_005f3ee0(param_1);
  cVar1 = FUN_005f8970();
  if (cVar1 != '\0') {
    cVar1 = FUN_005f88f0();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x170) == 0) {
        uVar2 = FUN_005f3fe0();
        *(undefined4 *)(param_1 + 0x170) = uVar2;
      }
      FUN_005f3f90(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x138) = 1;
  FUN_005f9a80();
  return;
}


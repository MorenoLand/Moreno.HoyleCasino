// FUN_0058a380  0058a380

void __fastcall FUN_0058a380(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00585eb0();
  if (cVar1 != '\0') {
    iVar2 = FUN_0058a470();
    if ((iVar2 != 0) || ('\x03' < **(char **)(*(int *)(param_1 + 0x3b68) + 4))) {
      iVar2 = FUN_0058a470();
      if (0xf < iVar2) {
        iVar2 = FUN_0058a470();
        if (iVar2 < 0x14) goto LAB_0058a3d6;
      }
      (**(code **)(**(int **)(param_1 + 0x30c) + 0xcc))();
      goto LAB_0058a412;
    }
  }
LAB_0058a3d6:
  (**(code **)(**(int **)(param_1 + 0x30c) + 0xd0))();
LAB_0058a412:
  cVar1 = FUN_00585eb0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x300) + 0xcc))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x300) + 0xd0))();
  }
  return;
}


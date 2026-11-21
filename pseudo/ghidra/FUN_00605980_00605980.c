// FUN_00605980  00605980

void __thiscall FUN_00605980(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    iVar2 = FUN_005f5590();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x50))
              (*(int *)(param_2 + 0xc) - iVar2);
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x54))();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x60))
              (*(int *)(param_2 + 0xc) - iVar2);
  }
  else {
    iVar2 = FUN_005f5550();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x48))
              (*(int *)(param_2 + 8) - iVar2);
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x4c))();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x58))
              (*(int *)(param_2 + 8) - iVar2);
  }
  FUN_006052f0();
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = FUN_005f5400();
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))(uVar3);
  }
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x178) + 0x48) + 8) = 1;
  return;
}


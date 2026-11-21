// FUN_00605400  00605400

void __fastcall FUN_00605400(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = abs(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50));
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c);
  }
  iVar2 = FUN_006051d0(iVar3 + 1,param_1,(double)(iVar3 + 1) / (double)iVar2);
  iVar2 = abs(*(int *)(param_1 + 0x50) - iVar2);
  if (iVar2 + *(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x54)) {
    cVar1 = FUN_006050f0();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x50))(*(undefined4 *)(param_1 + 0x68));
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x48))(*(undefined4 *)(param_1 + 0x60));
    }
  }
  else {
    cVar1 = FUN_006050f0();
    if (cVar1 == '\0') {
      iVar2 = FUN_00686cc0();
      (**(code **)(**(int **)(param_1 + 0x48) + 0x50))(iVar2 + *(int *)(param_1 + 100));
    }
    else {
      iVar2 = FUN_00686cc0();
      (**(code **)(**(int **)(param_1 + 0x48) + 0x48))(iVar2 + *(int *)(param_1 + 0x5c));
    }
  }
  return;
}


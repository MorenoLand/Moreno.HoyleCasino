// FUN_006051f0  006051f0

void __thiscall FUN_006051f0(int param_1,int param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))(*(int *)(param_1 + 100) + param_2);
    (**(code **)(**(int **)(param_1 + 0x48) + 0x44))(uVar2);
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x54))();
    (**(code **)(**(int **)(param_1 + 0x48) + 0x44))(*(int *)(param_1 + 0x5c) + param_2,uVar2);
  }
  if (param_3 != '\0') {
    FUN_006052f0();
  }
  return;
}


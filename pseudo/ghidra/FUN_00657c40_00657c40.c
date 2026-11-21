// FUN_00657c40  00657c40

void __fastcall FUN_00657c40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00657bb0();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x284) + 0xd0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x284) + 0xcc))();
  }
  iVar1 = FUN_00657bb0();
  iVar2 = FUN_00657bd0();
  if (iVar1 == iVar2 + -1) {
    (**(code **)(**(int **)(param_1 + 0x288) + 0xd0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x288) + 0xcc))();
  }
  return;
}


// FUN_006591b0  006591b0

void __thiscall FUN_006591b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    *(char *)(param_1 + 0x280) = *(char *)(param_1 + 0x280) + -1;
    iVar1 = FUN_00657bb0();
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x284) + 0xd0))();
    }
    (**(code **)(**(int **)(param_1 + 0x288) + 0xcc))();
    uVar3 = 0;
    iVar1 = FUN_00657bb0(0);
    FUN_00657e60(iVar1 * 0xc,uVar3);
  }
  else {
    *(char *)(param_1 + 0x280) = *(char *)(param_1 + 0x280) + '\x01';
    iVar1 = FUN_00657bb0();
    iVar2 = FUN_00657bd0();
    if (iVar1 == iVar2 + -1) {
      (**(code **)(**(int **)(param_1 + 0x288) + 0xd0))();
    }
    (**(code **)(**(int **)(param_1 + 0x284) + 0xcc))();
    uVar3 = 0;
    iVar1 = FUN_00657bb0(0);
    FUN_00657e60(iVar1 * 0xc,uVar3);
  }
  return;
}


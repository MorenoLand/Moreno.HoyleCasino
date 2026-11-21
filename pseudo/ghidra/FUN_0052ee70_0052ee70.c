// FUN_0052ee70  0052ee70

void __thiscall FUN_0052ee70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  *(int *)(param_1 + 0x1a8) = param_3;
  iVar1 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),2);
  if (*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar1) == -1) {
    (**(code **)(**(int **)(param_1 + 0x188) + 0x44))
              (param_2,*(int *)(param_1 + 0x1a0) / 2 + param_3);
    (**(code **)(**(int **)(param_1 + 400) + 0x44))
              (param_2,*(int *)(param_1 + 0x1a0) / 2 + param_3 + 3 + *(int *)(param_1 + 0x1a0));
    iVar2 = (*(int *)(param_1 + 0x1a0) / 2 + 3 + *(int *)(param_1 + 0x1a0)) -
            *(int *)(param_1 + 0x1a0) / 2;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x188) + 0x54))();
    (**(code **)(**(int **)(param_1 + 0x184) + 0x44))(param_2,iVar1 - iVar2);
    iVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x54))();
    (**(code **)(**(int **)(param_1 + 0x194) + 0x44))(param_2,iVar1 + iVar2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x184) + 0x44))(param_2,param_3 - *(int *)(param_1 + 0x1a0));
    (**(code **)(**(int **)(param_1 + 0x188) + 0x44))(param_2,param_3);
    (**(code **)(**(int **)(param_1 + 0x18c) + 0x44))(param_2,param_3 + *(int *)(param_1 + 0x1a0));
    (**(code **)(**(int **)(param_1 + 400) + 0x44))(param_2,param_3 + *(int *)(param_1 + 0x1a0) * 2)
    ;
    (**(code **)(**(int **)(param_1 + 0x194) + 0x44))
              (param_2,*(int *)(param_1 + 0x1a0) * 3 + param_3);
  }
  return;
}


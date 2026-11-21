// FUN_0056f560  0056f560

void __thiscall FUN_0056f560(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  short local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0xbc + local_8 * 4) == param_2) {
      return;
    }
    if (*(int *)(param_1 + 0xbc + local_8 * 4) == -1) break;
  }
  *(int *)(param_1 + 0xbc + local_8 * 4) = param_2;
  if (local_8 == 0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(3);
  }
  else if (local_8 == 1) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(2);
  }
  else if (local_8 == 3) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(1);
  }
  else if (local_8 == 6) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(0);
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x74))();
  switch(param_2) {
  case 0:
    uVar1 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(uVar1);
    break;
  case 2:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 2);
    break;
  case 3:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 4);
    break;
  case 4:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 6);
    break;
  case 5:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 8);
    break;
  case 6:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 10);
    break;
  case 7:
    iVar2 = FUN_0062fbf0(2);
    (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0xb0))(iVar2 + 0xc);
  }
  iVar2 = FUN_0062fbf0(5);
  iVar2 = FUN_0062fbf0(5,*(int *)(&DAT_007488bc + local_8 * 8) + -2 + iVar2);
  (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0x44))
            (*(int *)(&DAT_007488b8 + local_8 * 8) + -2 + iVar2);
  (**(code **)(**(int **)(param_1 + 0x7c + local_8 * 4) + 0x74))();
  return;
}


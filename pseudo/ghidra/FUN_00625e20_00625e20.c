// FUN_00625e20  00625e20

void __thiscall FUN_00625e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  FUN_005ff510(param_2,param_3);
  if (*(char *)(param_1 + 0x21d) != '\0') {
    for (local_10 = 0; iVar3 = FUN_0060c9a0(), local_10 < iVar3; local_10 = local_10 + 1) {
      piVar4 = (int *)FUN_0060ca40(local_10);
      if (piVar4 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar4 + 0x54))();
        iVar3 = (**(code **)(*piVar4 + 0x4c))(iVar3 + (param_3 - iVar2));
        (**(code **)(*piVar4 + 0x44))(iVar3 + (param_2 - iVar1));
      }
    }
  }
  return;
}


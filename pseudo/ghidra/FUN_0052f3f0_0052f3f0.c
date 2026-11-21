// FUN_0052f3f0  0052f3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052f3f0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),0xfffffffe);
  iVar2 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),0xffffffff);
  iVar3 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),0);
  iVar4 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),1);
  iVar5 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),2);
  iVar6 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),3);
  iVar7 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),4);
  iVar8 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),5);
  iVar9 = FUN_00537880(*(undefined4 *)(param_1 + 0x1ac),6);
  if (*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar5) == -1) {
    iVar1 = (int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar2);
    *(bool *)(param_1 + 0x19d) = iVar1 == -1;
    if (*(char *)(param_1 + 0x19d) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x184) + 0xb0))(iVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x188) + 0xb0))
              ((int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar4));
    (**(code **)(**(int **)(param_1 + 0x18c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 400) + 0xb0))
              ((int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar6));
    iVar1 = (int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar8);
    *(bool *)(param_1 + 0x19e) = iVar1 == -1;
    if (*(char *)(param_1 + 0x19e) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x194) + 0xb0))(iVar1);
    }
  }
  else {
    iVar1 = (int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar1);
    *(bool *)(param_1 + 0x19d) = iVar1 == -1;
    if (*(char *)(param_1 + 0x19d) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x184) + 0xb0))(iVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x188) + 0xb0))
              ((int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar3));
    (**(code **)(**(int **)(param_1 + 0x18c) + 0xb0))
              ((int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar5));
    (**(code **)(**(int **)(param_1 + 400) + 0xb0))
              ((int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar7));
    iVar1 = (int)*(char *)(DAT_0079338c + 0x15 + *(int *)(param_1 + 0x1ac) * 0x16 + iVar9);
    *(bool *)(param_1 + 0x19e) = iVar1 == -1;
    if (*(char *)(param_1 + 0x19e) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x194) + 0xb0))(iVar1);
    }
  }
  if (param_2 != '\0') {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a93,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  return;
}


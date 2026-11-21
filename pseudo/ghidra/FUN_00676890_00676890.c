// FUN_00676890  00676890

void __thiscall FUN_00676890(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + -1;
    if (*(int *)(param_1 + 0x1bc) == 0) {
      piVar3 = (int *)FUN_005fb300(0);
      (**(code **)(*piVar3 + 0xd0))();
    }
    FUN_005fb300(1);
    cVar1 = FUN_006026d0();
    if (cVar1 == '\0') {
      piVar3 = (int *)FUN_005fb300(1);
      (**(code **)(*piVar3 + 0xcc))();
    }
    (**(code **)(*DAT_0162ee84 + 0x3c0))(param_1,*(undefined4 *)(param_1 + 0x1bc),3);
  }
  else if (param_2 == 1) {
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x308))();
    if (iVar2 + -1 <= *(int *)(param_1 + 0x1bc)) {
      piVar3 = (int *)FUN_005fb300(1);
      (**(code **)(*piVar3 + 0xd0))();
    }
    FUN_005fb300(0);
    cVar1 = FUN_006026d0();
    if (cVar1 == '\0') {
      piVar3 = (int *)FUN_005fb300(0);
      (**(code **)(*piVar3 + 0xcc))();
    }
    (**(code **)(*DAT_0162ee84 + 0x3c0))(param_1,*(undefined4 *)(param_1 + 0x1bc),3);
  }
  else if (param_2 == 2) {
    FUN_00676a50();
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x3c4))(param_1,param_2);
  }
  return;
}


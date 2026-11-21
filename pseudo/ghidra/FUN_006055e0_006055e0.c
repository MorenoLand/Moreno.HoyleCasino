// FUN_006055e0  006055e0

void __thiscall FUN_006055e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_1[0x61] + 0x5c);
  iVar2 = *(int *)(param_1[0x61] + 0x60);
  iVar3 = *(int *)(param_1[0x61] + 100);
  iVar4 = *(int *)(param_1[0x61] + 0x68);
  cVar5 = (**(code **)(*param_1 + 0xa8))();
  if (cVar5 != '\0') {
    cVar5 = FUN_006050f0();
    if (cVar5 == '\0') {
      if (*(int *)(param_2 + 0xc) - param_1[0xc] < iVar3) {
        (**(code **)(*param_1 + 0x50))(iVar3);
      }
      else if (iVar4 < *(int *)(param_2 + 0xc) - param_1[0xc]) {
        (**(code **)(*param_1 + 0x50))(iVar4);
      }
      else {
        (**(code **)(*param_1 + 0x50))(*(int *)(param_2 + 0xc) - param_1[0xc]);
      }
    }
    else if (*(int *)(param_2 + 8) - param_1[0xb] < iVar1) {
      (**(code **)(*param_1 + 0x48))(iVar1);
    }
    else if (iVar2 < *(int *)(param_2 + 8) - param_1[0xb]) {
      (**(code **)(*param_1 + 0x48))(iVar2);
    }
    else {
      (**(code **)(*param_1 + 0x48))(*(int *)(param_2 + 8) - param_1[0xb]);
    }
    FUN_006052f0();
    if (param_1[1] != 0) {
      uVar6 = FUN_005f5400();
      (**(code **)(*(int *)param_1[1] + 0x2c))(uVar6);
    }
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}


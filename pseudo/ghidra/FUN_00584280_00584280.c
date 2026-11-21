// FUN_00584280  00584280

void __thiscall FUN_00584280(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_005f56a0(param_2);
  if (((cVar1 != '\0') || (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 != '\0')) &&
     (*(char *)(param_2 + 4) == '\0')) {
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 == 1) {
      cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
      if ((cVar1 != '\0') && ((*(uint *)(param_2 + 0x1c) & 0x10) != 0)) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
      if (((cVar1 != '\0') && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) &&
         (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 == '\0')) {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)((int)param_1 + 9) = 1;
        *(undefined1 *)(param_2 + 4) = 1;
        iVar2 = FUN_00585130();
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*param_1 + 0x54))();
          param_1[0x66] = *(int *)(param_2 + 0xc) - iVar2;
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x4c))();
          param_1[0x65] = *(int *)(param_2 + 8) - iVar2;
        }
      }
    }
    else if (iVar2 == 2) {
      if (((*(uint *)(param_2 + 0x1c) & 8) != 0) &&
         (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 != '\0')) {
        FUN_00585310(param_2);
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)((int)param_1 + 9) = 0;
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
    else if ((iVar2 == 3) && (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 != '\0')) {
      iVar2 = FUN_00585130();
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 0xc) - param_1[0x66] < param_1[0x67]) {
          uVar3 = (**(code **)(*param_1 + 0x4c))(param_1[0x67]);
          (**(code **)(*param_1 + 0x44))(uVar3);
        }
        else if (param_1[0x68] < *(int *)(param_2 + 0xc) - param_1[0x66]) {
          uVar3 = (**(code **)(*param_1 + 0x4c))(param_1[0x68]);
          (**(code **)(*param_1 + 0x44))(uVar3);
        }
        else {
          uVar3 = (**(code **)(*param_1 + 0x4c))(*(int *)(param_2 + 0xc) - param_1[0x66]);
          (**(code **)(*param_1 + 0x44))(uVar3);
        }
      }
      else if (*(int *)(param_2 + 8) - param_1[0x65] < param_1[0x67]) {
        uVar3 = (**(code **)(*param_1 + 0x54))();
        (**(code **)(*param_1 + 0x44))(param_1[0x67],uVar3);
      }
      else if (param_1[0x68] < *(int *)(param_2 + 8) - param_1[0x65]) {
        uVar3 = (**(code **)(*param_1 + 0x54))();
        (**(code **)(*param_1 + 0x44))(param_1[0x68],uVar3);
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x54))();
        (**(code **)(*param_1 + 0x44))(*(int *)(param_2 + 8) - param_1[0x65],uVar3);
      }
      FUN_00585310(param_2);
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  return;
}


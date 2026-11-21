// FUN_0045b9c0  0045b9c0

void __thiscall FUN_0045b9c0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_c;
  
  if (param_2 == 4) {
    if (*(int *)(DAT_00790738 + 0x10c) == 4) {
      uVar3 = (**(code **)(*DAT_00790734 + 0x2b0))(0);
      local_c = FUN_0064c8a0(uVar3);
    }
    else if (*(int *)(DAT_00790738 + 300) == 0) {
      uVar3 = (**(code **)(*DAT_00790734 + 0x2b0))(0);
      local_c = FUN_0064c8a0(uVar3);
    }
    else {
      local_c = FUN_0064c8a0(*(int *)(DAT_00790738 + 300),0);
    }
    (**(code **)(**(int **)(DAT_00790738 + 4) + 0xb8))(local_c,4,0);
    *(undefined1 *)(DAT_00790738 + 0x114) = 1;
    FUN_0057ae30();
    FUN_0045b300();
  }
  else {
    FUN_005dcb00(param_2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      cVar2 = FUN_005df700(0xffffffff);
      if (cVar2 == '\0') {
        FUN_0057ae30();
      }
      else {
        FUN_0057ab80(0xb,&DAT_007174e8);
      }
      FUN_005dcb00(param_2);
      cVar2 = FUN_005d5840();
      if (cVar2 == '\0') {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00460960(param_2);
          if (cVar2 != '\0') {
            uVar3 = FUN_005dcb00(param_2);
            FUN_005dbb70(uVar3);
          }
        }
        else {
          iVar5 = FUN_005dcb00(param_2);
          *(undefined1 *)(iVar5 + 0x4a1) = 1;
          FUN_0045b300();
        }
      }
      else {
        iVar5 = FUN_0045e8e0();
        if (iVar5 == 1) {
          FUN_004597c0();
        }
      }
    }
    else if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      uVar3 = FUN_00637810(2);
      FUN_005da360(uVar3);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 0;
      FUN_0057ae30();
      FUN_005dcb00(param_2);
      cVar2 = FUN_005d5840();
      if (cVar2 == '\0') {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          FUN_005d9570(param_2);
        }
        else {
          iVar5 = FUN_005dcb00(param_2);
          *(undefined1 *)(iVar5 + 0x4a1) = 1;
        }
      }
      else {
        uVar7 = 0;
        uVar3 = FUN_0044e7f0(param_2);
        local_c = FUN_0064c8a0(uVar3,uVar7);
        (**(code **)(**(int **)(DAT_00790738 + 4) + 0xc4))(&local_c,0,1);
        iVar5 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar5 + 0x4a0) = 1;
        iVar5 = FUN_0045e8e0();
        if (iVar5 == 1) {
          iVar5 = FUN_0062fbf0(100);
          if (0x28 < iVar5) {
            uVar3 = (**(code **)(*DAT_00790734 + 0x2b0))(0);
            uVar6 = FUN_0064c8a0(uVar3);
            local_c = uVar6;
            FUN_005dcb00(param_2);
            iVar5 = FUN_005d5a50();
            if ((int)local_c * 2 <= iVar5) {
              (**(code **)(**(int **)(DAT_00790738 + 4) + 0xc4))(&local_c,1,1);
              *(undefined1 *)(DAT_00790738 + param_2 + 0xf4) = 1;
              if (4 < (int)local_c) {
                *(undefined1 *)(DAT_00790738 + param_2 + 0xf9) = 1;
              }
            }
          }
        }
      }
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    }
  }
  return;
}


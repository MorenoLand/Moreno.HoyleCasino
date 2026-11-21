// FUN_00422c00  00422c00

void __thiscall FUN_00422c00(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_c;
  
  FUN_00426230();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
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
      FUN_0057ab80(0xb,&DAT_0070cee0);
    }
    cVar2 = FUN_004263d0(param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_005da7b0();
      if (cVar2 == '\0') {
        uVar5 = FUN_005dcb00(param_2);
        FUN_005dbb70(uVar5);
      }
      else {
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
        FUN_00422600();
      }
    }
    else {
      FUN_0041fb20();
    }
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      uVar5 = FUN_00637810(2);
      FUN_005da360(uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 0;
      cVar2 = FUN_004263d0(param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          FUN_005d9570(param_2);
        }
        else {
          iVar4 = FUN_005dcb00(param_2);
          *(undefined1 *)(iVar4 + 0x4a1) = 1;
        }
        (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      }
      else {
        uVar6 = 0;
        uVar5 = FUN_0041dd40(param_2);
        local_c = FUN_0064c8a0(uVar5,uVar6);
        (**(code **)(**(int **)(DAT_00790358 + 8 + param_2 * 8) + 0xc4))(&local_c,0,1);
        FUN_005dcb00(param_2);
        iVar4 = FUN_005d5a50();
        if (1 < iVar4) {
          iVar4 = FUN_0062fbf0(0x14);
          if (iVar4 == 1) {
            FUN_00426620(param_2);
            FUN_0041f9c0(param_2);
          }
        }
        iVar4 = FUN_00426230();
        *(undefined1 *)(iVar4 + 0x4a0) = 1;
        (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
      }
    }
  }
  return;
}


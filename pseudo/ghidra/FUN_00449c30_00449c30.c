// FUN_00449c30  00449c30

void __thiscall FUN_00449c30(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_c;
  
  FUN_005dcb00(param_2);
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
      FUN_0057ab80(0xb,&DAT_00713cc8);
    }
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d5a50();
    iVar5 = (**(code **)(*DAT_0079070c + 0x2b0))();
    if (iVar4 < iVar5 * 3) {
      cVar2 = FUN_005da7b0();
      if (cVar2 == '\0') {
        uVar6 = FUN_005dcb00(param_2);
        FUN_005dbb70(uVar6);
      }
      else {
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
        FUN_004497a0();
      }
    }
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      uVar6 = FUN_00637810(2);
      FUN_005da360(uVar6);
    }
    else {
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_005dcb00(param_2);
      iVar4 = FUN_005d5a50();
      iVar5 = (**(code **)(*DAT_0079070c + 0x2b0))();
      if (iVar4 < iVar5 * 3) {
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
        uVar7 = 0;
        uVar6 = FUN_00446120(param_2);
        local_c = FUN_0064c8a0(uVar6,uVar7);
        (**(code **)(**(int **)(DAT_00790710 + 8 + param_2 * 0xc) + 0xc4))(&local_c,0,1);
      }
    }
  }
  return;
}


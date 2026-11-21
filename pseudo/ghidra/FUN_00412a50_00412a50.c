// FUN_00412a50  00412a50

void __thiscall FUN_00412a50(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
      FUN_0057ab80(0xb,&DAT_00707448);
      FUN_0041bc50(CONCAT22(extraout_var,*(undefined2 *)(DAT_00790324 + 0x4e0)));
    }
    FUN_005dcb00(param_2);
    cVar2 = FUN_005d5840();
    if (cVar2 == '\0') {
      cVar2 = FUN_005da7b0();
      if (cVar2 == '\0') {
        cVar2 = FUN_00419f00(param_2);
        if (cVar2 != '\0') {
          uVar5 = FUN_005dcb00(param_2);
          FUN_005dbb70(uVar5);
        }
      }
      else {
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
        FUN_004123c0();
      }
    }
  }
  else if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    uVar5 = FUN_00637810(2);
    FUN_005da360(uVar5);
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
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
      }
    }
    else {
      uVar6 = 0;
      uVar5 = FUN_0040a0b0(param_2);
      local_c = FUN_0064c8a0(uVar5,uVar6);
      (**(code **)(**(int **)(DAT_00790324 + 0x468 + param_2 * 4) + 0xc4))(&local_c,0,1);
      iVar4 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar4 + 0x4a0) = 1;
    }
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
  }
  return;
}


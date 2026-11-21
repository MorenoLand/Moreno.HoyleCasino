// FUN_0042fa90  0042fa90

void __thiscall FUN_0042fa90(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_004347f0();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    FUN_0057ae30();
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      uVar5 = FUN_00637810(2);
      FUN_005da360(uVar5);
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_005dcb00(param_2);
    cVar2 = FUN_005d5840();
    if (cVar2 == '\0') {
      cVar2 = FUN_005da7b0();
      if ((cVar2 == '\0') && (cVar2 = FUN_004349b0(param_2), cVar2 == '\0')) {
        FUN_005d9570(param_2);
      }
      else {
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
      }
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    FUN_00428000(param_2);
    iVar4 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar4 + 0x4a0) = 1;
    iVar4 = DAT_007906d4;
    *(undefined4 *)(DAT_007906d4 + 0xae4) = 2;
    *(undefined4 *)(iVar4 + 0xae8) = param_2;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    return;
  }
  cVar2 = FUN_005df700(0xffffffff);
  if (cVar2 == '\0') {
    FUN_0057ae30();
  }
  else {
    FUN_0057ab80(0xb,&DAT_00711228);
    FUN_0043b830(1);
    *(undefined1 *)(DAT_007906d4 + 0xad5) = 0;
  }
  FUN_005dcb00(param_2);
  cVar2 = FUN_005d5840();
  if (cVar2 == '\0') {
    cVar2 = FUN_005da7b0();
    if (cVar2 != '\0') {
      iVar4 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar4 + 0x4a1) = 1;
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
      return;
    }
    cVar2 = FUN_004349b0(param_2);
    if (cVar2 == '\0') {
      uVar5 = FUN_005dcb00(param_2);
      FUN_005dbb70(uVar5);
      return;
    }
  }
  FUN_005db7d0(0xffffff4c,0xaa);
  (**(code **)(**(int **)(DAT_007906d0 + 4) + 8))(2,0);
  return;
}


// FUN_005249f0  005249f0

void __thiscall FUN_005249f0(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00528000();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_00528090(param_2);
    if (cVar2 == '\0') {
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
        uVar5 = FUN_005dcb00(param_2);
        FUN_005dbb70(uVar5);
        return;
      }
    }
    FUN_005db7d0(0xffffff4c,0xaa);
  }
  else if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar5 = FUN_00637810(2);
    FUN_005da360(uVar5);
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
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
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    }
    else {
      FUN_00520ef0(param_2);
      iVar4 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar4 + 0x4a0) = 1;
      iVar4 = DAT_00793374;
      *(undefined4 *)(DAT_00793374 + 0xdb0) = 0;
      *(undefined4 *)(iVar4 + 0xdb4) = param_2;
      (**(code **)(**(int **)(DAT_00793370 + 4) + 8))(1,0);
    }
  }
  return;
}


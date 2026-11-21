// FUN_0059f2e0  0059f2e0

void __thiscall FUN_0059f2e0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_20;
  int local_18;
  undefined8 local_14;
  undefined8 local_c;
  
  local_14 = FUN_0064c8a0(0,0);
  local_c = FUN_0064c8a0(0,0);
  local_20 = FUN_0064c8a0(0,0);
  local_18 = param_2 * 3;
  FUN_005dcb00(param_2);
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 != 3) {
      bVar1 = false;
      goto LAB_0059f392;
    }
  }
  bVar1 = true;
LAB_0059f392:
  if (bVar1) {
    cVar2 = FUN_005df700(0xffffffff);
    if (cVar2 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_0074f988);
    }
    cVar2 = FUN_005a2740(param_2);
    if (cVar2 == '\0') {
      FUN_005dcb00(param_2);
      iVar4 = FUN_005d5a50();
      iVar5 = (**(code **)(*DAT_007935cc + 0x2b0))();
      if (iVar4 < iVar5) {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          uVar6 = FUN_005dcb00(param_2);
          FUN_005dbb70(uVar6);
          return;
        }
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
        FUN_0059fa00();
        return;
      }
    }
    FUN_005db7d0(0,0xaf);
  }
  else if (*(char *)(param_1 + 7) == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar6 = FUN_00637810(2);
    FUN_005da360(uVar6);
  }
  else {
    *(undefined1 *)(param_1 + 7) = 0;
    FUN_0057ae30();
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d5a50();
    iVar5 = (**(code **)(*DAT_007935cc + 0x2b0))();
    if (iVar4 < iVar5) {
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
      FUN_0059a6f0(param_2,&local_c,&local_14,&local_20);
      if (0 < (int)local_c) {
        (**(code **)(**(int **)(DAT_007935d0 + 0xc + local_18 * 4) + 0xc4))(&local_c,0,1);
      }
      if (0 < (int)local_14) {
        (**(code **)(**(int **)(DAT_007935d0 + 0x10 + local_18 * 4) + 0xc4))(&local_14,0,1);
      }
      if (0 < (int)local_20) {
        (**(code **)(**(int **)(DAT_007935d0 + 8 + local_18 * 4) + 0xc4))(&local_20,0,1);
      }
      iVar4 = FUN_005a1ff0();
      *(undefined1 *)(iVar4 + 0x4a0) = 1;
      (**(code **)(*(int *)DAT_007935cc[1] + 8))(1,0);
    }
  }
  return;
}


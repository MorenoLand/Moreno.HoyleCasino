// FUN_005951f0  005951f0

void __thiscall FUN_005951f0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_14;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  local_14 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_2);
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 != 3) {
      bVar1 = false;
      goto LAB_00595284;
    }
  }
  bVar1 = true;
LAB_00595284:
  if (bVar1) {
    cVar2 = FUN_005df700(0xffffffff);
    if (cVar2 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_0074c170);
    }
    cVar2 = FUN_00598470(param_2);
    if (cVar2 == '\0') {
      FUN_005dcb00(param_2);
      iVar4 = FUN_005d5a50();
      iVar5 = (**(code **)(*DAT_007935a4 + 0x2b0))();
      if (iVar4 < iVar5) {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          uVar6 = FUN_005dcb00(param_2);
          FUN_005dbb70(uVar6);
          return;
        }
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
        FUN_00595790();
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
    iVar5 = (**(code **)(*DAT_007935a4 + 0x2b0))();
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
      FUN_0058fef0(param_2,&local_14,&local_c);
      if (0 < (int)local_c) {
        (**(code **)(**(int **)(DAT_007935a8 + 0x10 + param_2 * 0xc) + 0xc4))(&local_c,0,1);
      }
      if (0 < (int)local_14) {
        (**(code **)(**(int **)(DAT_007935a8 + 0xc + param_2 * 0xc) + 0xc4))(&local_14,0,1);
      }
      iVar4 = FUN_00597d00();
      *(undefined1 *)(iVar4 + 0x4a0) = 1;
      (**(code **)(*(int *)DAT_007935a4[1] + 8))(1,0);
    }
  }
  return;
}


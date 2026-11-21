// FUN_00422ea0  00422ea0

void __thiscall FUN_00422ea0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  
  FUN_005dcb00(param_2);
  piVar4 = (int *)FUN_0063aac0();
  if (*piVar4 != 2) {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 != 3) {
      bVar1 = false;
      goto LAB_00422ef2;
    }
  }
  bVar1 = true;
LAB_00422ef2:
  if (bVar1) {
    cVar3 = FUN_005df700(0xffffffff);
    if (cVar3 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_0070e6f0);
      FUN_004276f0(param_2);
    }
    *(undefined1 *)(DAT_00790358 + param_2 + 0xa9) = 1;
    FUN_0041fb60();
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      uVar5 = FUN_00637810(2);
      FUN_005da360(uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 7) = 0;
      cVar3 = FUN_0041e290(param_2);
      FUN_00426ad0(param_2,cVar3);
      iVar2 = DAT_00790358;
      *(uint *)(DAT_00790358 + 0xe0) = (uint)(cVar3 != '\0');
      *(int *)(iVar2 + 0xe4) = param_2;
      *(undefined1 *)(DAT_00790358 + param_2 + 0xa5) = 1;
      (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
    }
  }
  return;
}


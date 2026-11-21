// FUN_0053dca0  0053dca0

void __thiscall FUN_0053dca0(int param_1,int param_2)

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
      goto LAB_0053dcf2;
    }
  }
  bVar1 = true;
LAB_0053dcf2:
  if (bVar1) {
    cVar3 = FUN_005df700(0xffffffff);
    if (cVar3 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_00738ad0);
      FUN_00541e90(param_2);
    }
    *(undefined1 *)(DAT_007933ec + param_2 + 0xed) = 1;
    FUN_0053b970();
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 8) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      uVar5 = FUN_00637810(2);
      FUN_005da360(uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      cVar3 = FUN_00539f40(param_2);
      FUN_00541360(param_2,cVar3);
      iVar2 = DAT_007933ec;
      *(uint *)(DAT_007933ec + 0x100) = (uint)(cVar3 != '\0');
      *(int *)(iVar2 + 0x104) = param_2;
      *(undefined1 *)(DAT_007933ec + param_2 + 0xf2) = 1;
      (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
    }
  }
  return;
}


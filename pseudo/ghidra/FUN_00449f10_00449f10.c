// FUN_00449f10  00449f10

void __thiscall FUN_00449f10(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  FUN_005dcb00(param_2);
  piVar5 = (int *)FUN_0063aac0();
  if (*piVar5 != 2) {
    piVar5 = (int *)FUN_0063aac0();
    if (*piVar5 != 3) {
      bVar1 = false;
      goto LAB_00449f62;
    }
  }
  bVar1 = true;
LAB_00449f62:
  if (bVar1) {
    cVar3 = FUN_005df700(0xffffffff);
    if (cVar3 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_007154d8);
      FUN_0044df90(param_2);
    }
    *(undefined1 *)(DAT_00790710 + param_2 + 0xc9) = 1;
    FUN_00447c70();
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      uVar6 = FUN_00637810(2);
      FUN_005da360(uVar6);
    }
    else if (*(char *)(DAT_00790710 + 0xf0) == '\0') {
      *(undefined1 *)(DAT_00790710 + 0xf0) = 1;
      uVar4 = FUN_004466b0(param_2);
      *(undefined1 *)(DAT_00790710 + 0xf1) = uVar4;
      iVar2 = DAT_00790710;
      *(uint *)(DAT_00790710 + 0xf4) = (uint)(*(char *)(DAT_00790710 + 0xf1) == '\0');
      *(int *)(iVar2 + 0xf8) = param_2;
      (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
    }
    else {
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(DAT_00790710 + 0xf0) = 0;
      FUN_0044d510(param_2,*(undefined1 *)(DAT_00790710 + 0xf1));
      *(undefined1 *)(DAT_00790710 + param_2 + 0xcd) = 1;
      (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
    }
  }
  return;
}


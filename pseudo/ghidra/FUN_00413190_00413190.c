// FUN_00413190  00413190

void __thiscall FUN_00413190(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  int local_8;
  
  if (param_2 == -1) {
    local_8 = -1;
  }
  else {
    if (param_2 == 4) {
      local_20 = 0;
    }
    else {
      local_20 = (int)*(char *)(DAT_00790324 + 0x119 + param_2 * 0x118);
    }
    local_8 = local_20;
  }
  iVar3 = FUN_00419530(param_2,local_8);
  if (iVar3 != 1) {
    FUN_005dcb00(param_2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 5) = 0;
      cVar2 = FUN_005df700(0xffffffff);
      if (cVar2 == '\0') {
        FUN_0057ae30();
      }
      else {
        FUN_0057ab80(0xb,&DAT_0070a468);
        FUN_0041bf00();
        FUN_0041c0a0();
      }
      FUN_0040d930();
    }
    else {
      FUN_0057ae30();
      if (*(int *)(DAT_00790324 + 0x4d4) == -1) {
        uVar5 = FUN_0040b260(param_2);
        *(undefined4 *)(DAT_00790324 + 0x4d4) = uVar5;
      }
      if (*(char *)(param_1 + 0xc) == '\0') {
        *(undefined1 *)(param_1 + 0xc) = 1;
        iVar3 = DAT_00790324;
        *(undefined4 *)(DAT_00790324 + 0x4ec) = 1;
        *(int *)(iVar3 + 0x4f0) = param_2;
        (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
      }
      else {
        *(undefined1 *)(param_1 + 0xc) = 0;
        FUN_00413360(param_2,0xffffffff,1);
      }
    }
    return;
  }
  FUN_00413360(param_2,1,0);
  return;
}


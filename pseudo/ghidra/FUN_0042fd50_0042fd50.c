// FUN_0042fd50  0042fd50

void FUN_0042fd50(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  CPane *this;
  undefined8 uVar6;
  CSize *pCVar7;
  int local_24;
  undefined8 local_1c;
  int local_14;
  char local_d;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_24 = 0;
  local_1c = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_1);
  iVar3 = FUN_005d52e0();
  cVar1 = *(char *)(iVar3 + 0x2a);
  local_14 = -1;
  local_d = '\0';
  for (local_c = 0x4b; -1 < local_c; local_c = local_c + -1) {
    uVar4 = FUN_005f5400();
    iVar3 = FUN_00438a10(uVar4);
    if (iVar3 == 1) {
      FUN_0042c340();
    }
  }
  cVar2 = FUN_004349b0(param_1);
  if (cVar2 == '\0') {
    iVar3 = FUN_005dcb00(param_1);
    *(undefined1 *)(iVar3 + 0x4a2) = 1;
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0xf);
  }
  else {
    for (local_c = 0x4b; -1 < local_c; local_c = local_c + -1) {
      cVar2 = FUN_005cb7d0(param_1,0);
      if (cVar2 != '\0') {
        FUN_005dcb00(param_1);
        iVar3 = FUN_005d52e0();
        local_14 = (int)*(char *)(iVar3 + 0x2a);
        if ((cVar1 != local_14) && (local_14 == 0)) {
          local_d = '\x01';
        }
        if (local_d != '\0') break;
        uVar4 = FUN_005f5400();
        iVar3 = FUN_00438a10(uVar4);
        if (iVar3 == 1) {
          local_8 = local_8 + 1;
        }
        if (iVar3 == 0) {
          local_24 = local_24 + 1;
        }
        FUN_0043cd40(param_1,iVar3);
      }
    }
    if (local_d != '\0') {
      piVar5 = (int *)FUN_005dcb00(param_1);
      (**(code **)(*piVar5 + 4))(0xffffffff);
      uVar6 = FUN_0064c8a0(0,0);
      FUN_005dcb00(param_1,uVar6);
      FUN_005d6050(uVar6);
    }
    iVar3 = FUN_005dcb00(param_1);
    *(undefined1 *)(iVar3 + 0x4a2) = 1;
    pCVar7 = (CSize *)&local_1c;
    this = (CPane *)FUN_005dcb00(param_1);
    CPane::GetMinSize(this,pCVar7);
    if ((((int)local_1c == 0) && (local_8 == 0)) && (local_24 == 0)) {
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0xf);
    }
    else {
      FUN_0042a820(param_1);
    }
  }
  return;
}


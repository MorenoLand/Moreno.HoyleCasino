// FUN_005b6c90  005b6c90

void FUN_005b6c90(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_var;
  int iVar4;
  
  uVar2 = FUN_005b4e50(param_1);
  iVar4 = extraout_var;
  switch(*(undefined4 *)(extraout_var + 0x5bc)) {
  case 1:
    cVar1 = FUN_005b3300(param_1,0xffffffff);
    if (cVar1 == '\0') {
      iVar3 = FUN_005b4f50(param_1,uVar2);
      if (iVar3 == 0x15) {
        FUN_005b3f80(param_1);
      }
      else {
        cVar1 = FUN_005b6170(param_1);
        if ((cVar1 != '\0') && (cVar1 = FUN_005b3710(param_1,uVar2), cVar1 == '\0')) {
          FUN_005b3f80(param_1);
        }
      }
    }
    else {
      FUN_005b67d0(param_1,uVar2,0,1,1);
      FUN_005b71a0(param_1,uVar2,6);
      FUN_005b3f80(param_1);
      iVar3 = FUN_005dcb00(param_1);
      *(undefined1 *)(iVar3 + 0x4b0) = 1;
    }
    break;
  case 2:
    cVar1 = FUN_005b3300(param_1,0xffffffff);
    if (cVar1 != '\0') {
      FUN_005b67d0(param_1,uVar2,0,1,1);
      FUN_005b71a0(param_1,uVar2,6);
      iVar3 = FUN_005dcb00(param_1);
      *(undefined1 *)(iVar3 + 0x4b0) = 1;
    }
    FUN_005b3f80(param_1);
    break;
  case 4:
    iVar3 = FUN_005dcb00(param_1,*(undefined4 *)(extraout_var + 0x5bc),extraout_var,uVar2);
    *(undefined1 *)(iVar3 + 0x4b0) = 1;
  case 0:
    FUN_005b3f80(param_1);
  }
  *(undefined4 *)(iVar4 + 0x5bc) = 0xffffffff;
  return;
}


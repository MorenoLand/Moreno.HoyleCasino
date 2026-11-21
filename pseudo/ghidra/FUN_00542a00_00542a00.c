// FUN_00542a00  00542a00

undefined4 FUN_00542a00(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  int local_10;
  
  cVar1 = FUN_0054a770(param_1);
  if (cVar1 == '\0') {
    uVar2 = extraout_var;
    iVar3 = FUN_00542b80(param_1);
    iVar4 = FUN_00542d50();
    if ((*(char *)(DAT_00793404 + 0x24) == '\0') && (*(int *)(DAT_007947e0 + 0x4f14) != 1)) {
      local_10 = *(int *)(&DAT_0073a9b0 + iVar4 * 4 + iVar3 * 0x28);
    }
    else {
      local_10 = *(int *)(&DAT_0073ae88 + iVar4 * 4 + iVar3 * 0x28);
      if (local_10 == 4) {
        FUN_005e9f20("action != 4","..\\Casino\\videoblackjackai.cpp",0x8b);
        local_10 = 2;
      }
    }
    switch(local_10 + -1) {
    case 0:
      uVar2 = 1;
      break;
    case 1:
      uVar2 = 2;
      break;
    case 2:
      cVar1 = FUN_005497a0();
      if (cVar1 == '\0') {
        if (iVar3 == 0x12) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 3;
      }
      break;
    case 3:
      uVar2 = 4;
      break;
    case 4:
      uVar2 = 1;
      break;
    default:
      FUN_005e9f20("false","..\\Casino\\videoblackjackai.cpp",0xa6,local_10 + -1,uVar2);
      FUN_005e9f20("false","..\\Casino\\videoblackjackai.cpp",0xa9);
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


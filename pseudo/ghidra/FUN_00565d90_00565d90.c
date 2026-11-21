// FUN_00565d90  00565d90

undefined4 __thiscall FUN_00565d90(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00565c70(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00566380();
    if (iVar2 < 5) {
      uVar3 = *(undefined4 *)(&DAT_00743cec + param_2 * 4);
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\vpmdisplay.cpp",0x980);
      iVar2 = FUN_00566380();
      if (iVar2 < 7) {
        uVar3 = *(undefined4 *)(&DAT_00743cec + param_2 * 4);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    iVar2 = FUN_00566380();
    if (iVar2 < 5) {
      uVar3 = *(undefined4 *)(&DAT_00743cac + param_2 * 4);
    }
    else {
      uVar3 = *(undefined4 *)(&DAT_00743cc8 + param_2 * 4);
    }
  }
  return uVar3;
}


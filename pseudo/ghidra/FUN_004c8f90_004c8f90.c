// FUN_004c8f90  004c8f90

undefined4 __thiscall FUN_004c8f90(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004c6cb0();
  if (iVar2 == 0) {
    FUN_004c7030(0);
    (**(code **)(*param_2 + 0x1c))(0);
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004c6cb0();
    if (iVar2 == 2) {
      cVar1 = FUN_0047cbe0();
      if ((cVar1 == '\0') && (cVar1 = FUN_004c7090(), cVar1 == '\0')) {
        cVar1 = FUN_004c8f60();
        if (cVar1 == '\0') {
          FUN_004c7030(0);
          (**(code **)(*param_2 + 0x1c))(0);
          uVar3 = 0;
        }
        else {
          FUN_0047e400(*(undefined4 *)(param_1 + 0x8c));
          FUN_004c7030(0);
          uVar3 = 1;
        }
      }
      else {
        cVar1 = FUN_004c8f60();
        if (cVar1 == '\0') {
          FUN_004c7030(0);
          (**(code **)(*param_2 + 0x1c))(0);
          uVar3 = 0;
        }
        else {
          FUN_004c7030(1);
          (**(code **)(*param_2 + 0x1c))(0);
          uVar3 = 1;
        }
      }
    }
    else {
      iVar2 = FUN_004c6cb0();
      if (iVar2 == 1) {
        cVar1 = FUN_004c8f60();
        if (cVar1 == '\0') {
          FUN_004c7030(0);
          (**(code **)(*param_2 + 0x1c))(0);
          uVar3 = 0;
        }
        else {
          FUN_004c7030(1);
          (**(code **)(*param_2 + 0x1c))(0);
          uVar3 = 1;
        }
      }
      else {
        iVar2 = FUN_004c6cb0();
        if (iVar2 == 3) {
          if ((*(char *)(param_1 + 0x1e) == '\0') && (cVar1 = FUN_004c8f60(), cVar1 != '\0')) {
            return 1;
          }
          uVar3 = 0;
        }
        else {
          FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x53f);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


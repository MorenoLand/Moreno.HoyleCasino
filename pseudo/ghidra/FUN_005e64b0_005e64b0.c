// FUN_005e64b0  005e64b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e64b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_005fb2b0(0x311b63);
  piVar3 = (int *)FUN_005fb2b0(0x311b64);
  uVar4 = FUN_005fc360();
  switch(uVar4) {
  case 0:
    piVar2 = (int *)FUN_005f9ce0(0,0x311b63,0,0,0,0x65,0,0xff,0);
    piVar3 = (int *)FUN_005f9ce0(0,0x311b64,0,0,0,100,0,0xff,0);
    iVar5 = FUN_005e6470();
    FUN_005eaf00(*(undefined4 *)(&DAT_0075e840 + iVar5 * 4));
    (**(code **)(*piVar2 + 0x74))();
    (**(code **)(*piVar3 + 0x70))();
    (**(code **)(*param_1 + 8))(1,300);
    break;
  case 1:
    iVar5 = FUN_005e6470();
    FUN_005eaf00(*(undefined4 *)(&DAT_0075e840 + iVar5 * 4));
    (**(code **)(*piVar3 + 0x74))();
    _DAT_00794928 = 0xff;
    _DAT_00794924 = 0;
    FUN_005eb5d0(0xff);
    FUN_005eb5d0(_DAT_00794924 & 0xff);
    (**(code **)(*param_1 + 8))(2,2);
    break;
  case 2:
    _DAT_00794928 = _DAT_00794928 + -8;
    _DAT_00794924 = _DAT_00794924 + 8;
    if (_DAT_00794928 < 0) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      FUN_005eb5d0(_DAT_00794928);
      FUN_005eb5d0(_DAT_00794924 & 0xff);
      (**(code **)(*param_1 + 8))(2,2);
    }
    break;
  case 3:
    uVar4 = FUN_005eafc0();
    FUN_005eaf00(uVar4);
    FUN_005eb5d0(0xff);
    (**(code **)(*piVar2 + 0x74))();
    (**(code **)(*piVar3 + 0x70))();
    (**(code **)(*param_1 + 8))(1,300);
    break;
  case 4:
    cVar1 = FUN_005f54c0();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      iVar5 = FUN_005e6470();
      FUN_005eaf00(*(undefined4 *)(&DAT_0075e840 + iVar5 * 4));
      (**(code **)(*param_1 + 8))(1,300);
    }
  }
  return;
}


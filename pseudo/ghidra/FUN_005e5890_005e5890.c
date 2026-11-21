// FUN_005e5890  005e5890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e5890(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_c;
  
  piVar1 = (int *)FUN_005fb2b0(0x311a58);
  piVar2 = (int *)FUN_005fb2b0(0x311a59);
  uVar3 = FUN_005fc360();
  switch(uVar3) {
  case 0:
    (**(code **)(*param_1 + 8))(1,0xf0);
    break;
  case 1:
    iStack_c = FUN_005eb220();
    iStack_c = iStack_c + 1;
    iVar4 = FUN_005eb240();
    if (iVar4 < iStack_c) {
      iStack_c = 0;
    }
    (**(code **)(*piVar2 + 0xb0))(iStack_c);
    (**(code **)(*piVar2 + 0x74))();
    _DAT_00794920 = 0xff;
    _DAT_0079491c = 0;
    FUN_005eb5d0(0xff);
    FUN_005eb5d0(_DAT_0079491c & 0xff);
    (**(code **)(*param_1 + 8))(2,2);
    break;
  case 2:
    _DAT_00794920 = _DAT_00794920 + -8;
    _DAT_0079491c = _DAT_0079491c + 8;
    if (_DAT_00794920 < 0) {
      (**(code **)(*param_1 + 8))(3,0);
    }
    else {
      FUN_005eb5d0(_DAT_00794920);
      FUN_005eb5d0(_DAT_0079491c & 0xff);
      (**(code **)(*param_1 + 8))(2,2);
    }
    break;
  case 3:
    uVar3 = FUN_005eb220();
    (**(code **)(*piVar1 + 0xb0))(uVar3);
    FUN_005eb5d0(0xff);
    (**(code **)(*piVar1 + 0x74))();
    (**(code **)(*piVar2 + 0x70))();
    (**(code **)(*param_1 + 8))(1,0xf0);
  }
  return;
}


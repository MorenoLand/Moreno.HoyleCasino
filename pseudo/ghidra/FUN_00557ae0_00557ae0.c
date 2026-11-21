// FUN_00557ae0  00557ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00557ae0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 0:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d1210();
    FUN_00554670();
    if (param_1[2] != 0) {
      FUN_00558ca0();
    }
    break;
  case 1:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d0f00();
    FUN_00554670();
    iVar1 = param_1[2];
    iVar2 = (**(code **)(*param_1 + 4))();
    if (iVar1 == iVar2) {
      FUN_00558ca0();
    }
    break;
  case 2:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_00557dc0();
    FUN_00554950();
    break;
  case 3:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_00557e00();
    FUN_00554950();
    break;
  case 4:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_00558ca0();
    break;
  case 5:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f342,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d13e0();
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005542c0();
    break;
  case 6:
    if ((param_1[1] == 0) && (param_1[2] == 0)) {
      FUN_005dcb00(0);
      iVar1 = FUN_005d5a50();
      iVar2 = FUN_005d0aa0();
      if (iVar1 < iVar2) {
        uVar3 = FUN_005dcb00(0);
        FUN_005dbb70(uVar3);
        return;
      }
    }
    FUN_005dc2e0();
  }
  return;
}


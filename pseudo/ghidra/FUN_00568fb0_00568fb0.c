// FUN_00568fb0  00568fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00568fb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(DAT_0079343c + 0x18) == '\0') {
    switch(param_2) {
    case 0:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x31225d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_005d11b0();
      FUN_00561b50();
      if (param_1[2] != 0) {
        FUN_0056a070();
      }
      break;
    case 1:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x31225d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_005d0ff0();
      FUN_00561b50();
      iVar1 = param_1[2];
      iVar3 = (**(code **)(*param_1 + 4))();
      if (iVar1 == iVar3) {
        FUN_0056a070();
      }
      break;
    case 3:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x31225d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_005692b0();
      FUN_00561e20();
      FUN_00568f80();
      break;
    case 4:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x31225d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_0056a070();
      break;
    case 5:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x31225d,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_005d13e0();
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      FUN_00561950();
      FUN_00562730();
      break;
    case 6:
      FUN_005627c0(0,0x14);
      if ((((param_1[1] == 0) && (param_1[2] == 0)) && (cVar2 = FUN_0056a560(), cVar2 == '\0')) &&
         (cVar2 = FUN_0056a510(), cVar2 == '\0')) {
        uVar4 = FUN_005dcb00(0);
        FUN_005dbb70(uVar4);
      }
      else {
        FUN_005dc2e0();
      }
    }
  }
  return;
}


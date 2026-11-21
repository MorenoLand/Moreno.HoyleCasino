// FUN_00535ae0  00535ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00535ae0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_c [8];
  
  switch(param_2) {
  case 0:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0cb,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d1210();
    FUN_0052c7e0();
    break;
  case 1:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0cb,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d0f00();
    FUN_0052c7e0();
    break;
  case 2:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0cb,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d1210();
    FUN_0052c7e0();
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00535d20();
    }
    break;
  case 3:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0cb,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_00535d20();
    break;
  case 4:
    (**(code **)(*DAT_0162ee84 + 0x80))(0x30f0cb,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    FUN_005d13e0();
    FUN_0052c7e0();
    FUN_0052ca70();
    break;
  case 5:
    puVar4 = auStack_c;
    FUN_005dcb00(0,puVar4);
    puVar1 = (undefined4 *)FUN_005d5a90(puVar4);
    iVar2 = FUN_005d0d30(*puVar1,puVar1[1]);
    if (((iVar2 == 0) && (*(int *)(param_1 + 4) == 0)) && (*(int *)(param_1 + 8) == 0)) {
      uVar3 = FUN_005dcb00(0);
      FUN_005dbb70(uVar3);
    }
    else {
      FUN_005dc2e0();
    }
  }
  return;
}


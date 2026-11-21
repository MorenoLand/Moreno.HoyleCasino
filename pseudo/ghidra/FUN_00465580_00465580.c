// FUN_00465580  00465580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00465580(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  (**(code **)(*DAT_0162ee84 + 0x80))(0x391,0,0,5,1,0x3f800000,_DAT_006b3654,0,param_1);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      uVar1 = FUN_0060ca40(local_18);
      uVar2 = FUN_0062fbf0(param_2 + -1);
      uVar3 = FUN_0060ca40(uVar2);
      FUN_0060ca70(local_18,uVar3);
      FUN_0060ca70(uVar2,uVar1);
    }
  }
  return;
}


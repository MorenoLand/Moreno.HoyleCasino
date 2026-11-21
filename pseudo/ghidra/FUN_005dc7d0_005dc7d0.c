// FUN_005dc7d0  005dc7d0

void __thiscall FUN_005dc7d0(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  if (param_2 < 0x30dfba) {
    if (param_2 == 0x30dfb9) {
      (**(code **)(*DAT_0162ee84 + 0x334))(8,0xffffffff);
      return;
    }
    if (param_2 == 0x1391) {
      FUN_005db240();
    }
    else if (param_2 == 0x139b) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      FUN_005dcb00(0,0xffffffff,0xffffffff);
      cVar1 = FUN_005d54a0(uVar3);
      uVar2 = (uint)(cVar1 == '\0');
      FUN_005dcb00(0,uVar2);
      FUN_005d5500(uVar2,uVar4);
      FUN_00637610();
      (**(code **)(*param_1 + 0x2e0))();
    }
  }
  else if (param_2 == 0x30dfba) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(*param_1 + 0x290))(local_8);
    }
    FUN_005dc610();
    return;
  }
  FUN_0064db70(param_2,param_3);
  return;
}


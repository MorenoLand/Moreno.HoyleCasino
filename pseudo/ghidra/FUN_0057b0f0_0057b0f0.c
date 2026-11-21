// FUN_0057b0f0  0057b0f0

void __thiscall FUN_0057b0f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_005db240(0,param_1);
  }
  else if (param_2 == 2) {
    uVar2 = 0xffffffff;
    uVar1 = 0;
    FUN_006375b0(0,0xffffffff);
    FUN_005d5500(uVar1,uVar2);
    FUN_00637610();
    (**(code **)(*DAT_007947e4 + 0x2e0))();
  }
  return;
}


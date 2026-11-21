// FUN_00584080  00584080

undefined4 __thiscall FUN_00584080(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 0x186bf) || (param_3 == 0x186be)) {
    if (param_2 == 0x30dfb9) {
      (**(code **)(*DAT_007947e0 + 0x334))(8,0xffffffff,param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


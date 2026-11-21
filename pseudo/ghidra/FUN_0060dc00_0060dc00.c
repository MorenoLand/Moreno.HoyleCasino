// FUN_0060dc00  0060dc00

uint __thiscall FUN_0060dc00(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0060cc90(0,&DAT_015e5190,0,param_1);
  if (uVar1 == 0) {
    uVar1 = (**(code **)(*DAT_015e5190 + 0x50))(DAT_015e5190,param_2,0x11);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}


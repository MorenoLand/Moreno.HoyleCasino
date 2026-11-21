// FUN_0060e2c0  0060e2c0

uint __thiscall
FUN_0060e2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*DAT_015e5190 + 0x54))
                    (DAT_015e5190,param_2,param_3,param_4,DAT_007950b8,0,param_1);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}


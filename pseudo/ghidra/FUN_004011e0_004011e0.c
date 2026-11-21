// FUN_004011e0  004011e0

undefined4 __thiscall FUN_004011e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c [10];
  
  local_2c[0] = 8;
  local_2c[1] = 10;
  local_2c[2] = 2;
  local_2c[3] = 1;
  local_2c[4] = 5;
  local_2c[5] = 5;
  local_2c[6] = 8;
  local_2c[7] = 4;
  local_2c[8] = 6;
  local_2c[9] = 10;
  iVar1 = FUN_005dcb00(param_2,param_1);
  iVar1 = (**(code **)(*DAT_0162ee84 + 0x170))(*(undefined4 *)(iVar1 + 8));
  return local_2c[iVar1];
}


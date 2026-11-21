// FUN_004fdfc0  004fdfc0

undefined4 FUN_004fdfc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_var;
  
  iVar1 = FUN_004fe0a0(param_2);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else if ((param_1 == 0x1397) || (param_1 == 0x1398)) {
    *(bool *)(DAT_007947e0 + 0x13cd) = param_1 == 0x1398;
    iVar1 = FUN_004fe0a0(param_2);
    DAT_007947e0[0x13c8] = iVar1;
    (**(code **)(*DAT_007947e0 + 0x334))(0x30d401,0xffffffff);
    uVar2 = 1;
  }
  else {
    uVar2 = extraout_var;
    iVar3 = FUN_004fe120(param_1);
    DAT_007947e0[0x13c3] = iVar3;
    DAT_007947e0[0x13c6] = iVar1;
    (**(code **)(*DAT_007947e0 + 0x334))(0xb,0xffffffff,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}


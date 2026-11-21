// FUN_004fd930  004fd930

uint __thiscall FUN_004fd930(undefined4 param_1,undefined4 *param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    uVar2 = FUN_0047f950(param_1);
    *param_2 = uVar2;
    param_2[1] = 1;
    uVar2 = FUN_0047f950();
    param_2[2] = uVar2;
    param_2[3] = 1;
    param_2[4] = 1;
    param_2[5] = 0;
    iVar3 = FUN_0047f950();
    param_2[6] = iVar3 + -1;
    uVar1 = CONCAT31((int3)((uint)(iVar3 + -1) >> 8),1);
  }
  return uVar1;
}


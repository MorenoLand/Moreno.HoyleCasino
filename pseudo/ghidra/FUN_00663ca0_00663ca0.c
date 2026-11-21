// FUN_00663ca0  00663ca0

uint FUN_00663ca0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_006639d0(param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffff00;
  }
  else {
    uVar2 = FUN_00663bb0(param_1);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      uVar3 = FUN_006639d0(param_1);
      iVar1 = FUN_0060ca40(uVar3);
      puVar5 = (undefined4 *)(iVar1 + 0x20);
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      uVar2 = CONCAT31((int3)((uint)(iVar1 + 0x20) >> 8),1);
    }
  }
  return uVar2;
}


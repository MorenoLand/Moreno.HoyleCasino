// FUN_004fda10  004fda10

uint __thiscall FUN_004fda10(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  FUN_005de600(0xffffffff,param_1);
  puVar1 = (undefined2 *)FUN_0063aae0(uVar3);
  if ((param_2 == (undefined2 *)0x0) || (puVar1 == (undefined2 *)0x0)) {
    uVar2 = (uint)param_2 & 0xffffff00;
  }
  else {
    *puVar1 = *param_2;
    uVar3 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2;
}


// FUN_005f4000  005f4000

uint __thiscall FUN_005f4000(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    uVar2 = FUN_0060c9a0(param_1);
    if ((int)uVar2 <= local_8) {
      return uVar2 & 0xffffff00;
    }
    iVar3 = FUN_0060ca40(local_8);
    iVar1 = *(int *)(iVar3 + 0x170);
    if (iVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  *(undefined4 *)(iVar3 + 0x170) = param_3;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


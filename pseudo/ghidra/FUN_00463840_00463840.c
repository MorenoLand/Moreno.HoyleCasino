// FUN_00463840  00463840

uint FUN_00463840(undefined2 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int local_8;
  
  uVar1 = FUN_00641290(*param_1);
  local_8 = 1;
  while( true ) {
    if (param_2 <= local_8) {
      return CONCAT31((int3)((uint)local_8 >> 8),1);
    }
    uVar2 = FUN_00641290(CONCAT22((short)((uint)local_8 >> 0x10),param_1[local_8]));
    if (uVar2 != uVar1) break;
    local_8 = local_8 + 1;
  }
  return uVar2 & 0xffffff00;
}


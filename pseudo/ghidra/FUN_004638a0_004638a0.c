// FUN_004638a0  004638a0

uint FUN_004638a0(undefined2 *param_1,int param_2)

{
  uint uVar1;
  uint local_c;
  int local_8;
  
  local_c = FUN_00641280(*param_1);
  local_8 = 1;
  while( true ) {
    if (param_2 <= local_8) {
      return CONCAT31((int3)((uint)local_8 >> 8),1);
    }
    local_c = local_c + 1;
    uVar1 = FUN_00641280(CONCAT22((short)(local_c >> 0x10),param_1[local_8]));
    if ((uVar1 != local_c) &&
       (((local_8 != param_2 + -1 || (uVar1 = param_2 + 1, local_c != uVar1)) ||
        (uVar1 = FUN_00641280(CONCAT22((short)(uVar1 >> 0x10),param_1[local_8])), uVar1 != 0xe))))
    break;
    local_8 = local_8 + 1;
  }
  return uVar1 & 0xffffff00;
}


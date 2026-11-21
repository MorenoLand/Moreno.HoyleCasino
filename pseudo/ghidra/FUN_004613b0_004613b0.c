// FUN_004613b0  004613b0

undefined4 __thiscall FUN_004613b0(int param_1,int param_2)

{
  uint uVar1;
  undefined1 local_14;
  ushort local_c [2];
  ushort local_8 [2];
  
  FUN_00452a40(param_2,local_8,local_c);
  if ((((local_8[0] == *(ushort *)(param_1 + 0xa2 + param_2 * 2)) ||
       (uVar1 = (uint)*(ushort *)(param_1 + 0xac + param_2 * 2), local_8[0] == uVar1)) &&
      ((local_c[0] == *(ushort *)(param_1 + 0xa2 + param_2 * 2) ||
       (uVar1 = (uint)local_c[0], uVar1 == *(ushort *)(param_1 + 0xac + param_2 * 2))))) &&
     (uVar1 = (uint)local_c[0], local_8[0] != uVar1)) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),local_14);
}


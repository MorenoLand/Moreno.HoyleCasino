// FUN_00461220  00461220

undefined4 __thiscall FUN_00461220(int param_1,int param_2,ushort param_3)

{
  uint uVar1;
  undefined1 local_c;
  
  uVar1 = (uint)param_3;
  if ((*(ushort *)(param_1 + 0xa2 + param_2 * 2) == uVar1) ||
     (uVar1 = (uint)*(ushort *)(param_1 + 0xac + param_2 * 2), uVar1 == param_3)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),local_c);
}


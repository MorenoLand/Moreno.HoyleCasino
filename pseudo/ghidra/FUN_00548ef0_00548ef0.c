// FUN_00548ef0  00548ef0

int * __thiscall FUN_00548ef0(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 local_24 [8];
  undefined8 local_1c;
  undefined8 local_14;
  
  local_1c = FUN_0064c8a0(0,0);
  local_14 = local_1c;
  puVar1 = (uint *)FUN_005d0c30(local_24,*(undefined4 *)(param_1 + 8));
  uVar2 = *puVar1 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 != 0) {
    local_14._4_4_ = 0x32;
  }
  *param_2 = (int)*puVar1 / 2;
  param_2[1] = local_14._4_4_;
  return param_2;
}


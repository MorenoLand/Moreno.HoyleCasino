// FUN_00623700  00623700

undefined4 * __thiscall
FUN_00623700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  void *pvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab3c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = FrameBuffer::vftable;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[6] = param_4;
  uVar2 = param_1[2] * param_1[6] - 1 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  param_1[4] = (param_1[2] * param_1[6] + 3) - uVar2;
  pvVar1 = operator_new(param_1[3] * param_1[4]);
  param_1[7] = pvVar1;
  memset((void *)param_1[7],0,param_1[3] * param_1[4]);
  if (param_5 == '\0') {
    param_1[5] = -param_1[4];
    param_1[8] = (param_1[3] + -1) * param_1[4] + param_1[7];
  }
  else {
    param_1[5] = param_1[4];
    param_1[8] = param_1[7];
  }
  ExceptionList = local_10;
  return param_1;
}


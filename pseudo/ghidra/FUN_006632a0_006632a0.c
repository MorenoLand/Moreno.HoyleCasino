// FUN_006632a0  006632a0

undefined4 * __thiscall
FUN_006632a0(undefined4 *param_1,undefined4 param_2,void *param_3,int param_4)

{
  longlong lVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aca98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00606e60(param_2,*(undefined4 *)((int)param_3 + (param_4 * 4 + -4) * 8 + 8),
               *(undefined4 *)((int)param_3 + (param_4 * 4 + -4) * 8 + 0xc),0);
  local_8 = 0;
  *param_1 = sciMotionHermite::vftable;
  lVar1 = (ulonglong)(uint)(param_4 << 2) * 8;
  pvVar2 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  param_1[0xb] = pvVar2;
  memcpy((void *)param_1[0xb],param_3,param_4 << 5);
  param_1[0xc] = param_4;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 10;
  param_1[0x11] = 1.0 / (float)(int)param_1[0x12];
  param_1[0xd] = 0;
  ExceptionList = local_10;
  return param_1;
}


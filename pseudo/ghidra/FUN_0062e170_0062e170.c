// FUN_0062e170  0062e170

undefined4 * __thiscall FUN_0062e170(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab778;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Bitmap::vftable;
  param_1[0x102] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    param_1[0x106] = 0;
  }
  else {
    param_1[0x103] = param_2;
    param_1[0x104] = param_3;
    param_1[0x106] = 4;
    uVar4 = param_1[0x103] * param_1[0x106] - 1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    param_1[0x105] = (param_1[0x103] * param_1[0x106] + 3) - uVar4;
    iVar1 = param_1[0x105];
    iVar2 = param_1[0x104];
    pvVar3 = operator_new(iVar1 * iVar2);
    param_1[0x102] = pvVar3;
    memset((void *)param_1[0x102],0,iVar1 * iVar2);
  }
  ExceptionList = local_10;
  return param_1;
}


// FUN_004846f0  004846f0

undefined4 __thiscall FUN_004846f0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0049;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  FUN_00484320(param_1);
  local_8 = 1;
  for (local_1c = 0; local_1c < (short)param_3[1]; local_1c = local_1c + 1) {
    cVar1 = FUN_00484ba0(*param_3 + local_1c);
    if (cVar1 != '\0') {
      FUN_00484ad0(*param_3 + local_1c);
    }
  }
  FUN_00484320(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470(uVar2,param_1,uVar3 | 1);
  ExceptionList = local_10;
  return param_2;
}


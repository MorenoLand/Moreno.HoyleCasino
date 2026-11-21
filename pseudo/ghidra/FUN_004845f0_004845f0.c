// FUN_004845f0  004845f0

undefined4 FUN_004845f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *extraout_var;
  int *piVar2;
  uint uVar3;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a000d;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  FUN_00484320(param_2);
  local_8 = 1;
  piVar2 = extraout_var;
  for (local_1c = 0; local_1c < (short)piVar2[1]; local_1c = local_1c + 1) {
    FUN_00484830(*piVar2 + local_1c);
  }
  FUN_00484320(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470(uVar1,piVar2,uVar3 | 1);
  ExceptionList = local_10;
  return param_1;
}


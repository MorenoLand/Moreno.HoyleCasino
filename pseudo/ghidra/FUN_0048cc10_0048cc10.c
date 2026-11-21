// FUN_0048cc10  0048cc10

undefined4
FUN_0048cc10(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  uint uVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a03c5;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = (undefined3)((uint)ExceptionList >> 8);
  uVar2 = FUN_0048c7b0(local_18,param_2,CONCAT31(uVar3,param_3),param_4,param_5,
                       CONCAT31(uVar3,param_6),param_7,param_8,CONCAT31(uVar3,param_9));
  local_8 = 1;
  FUN_00485940(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar1,uVar2,uVar2,
               extraout_var);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470();
  ExceptionList = local_10;
  return param_1;
}


// FUN_00496200  00496200

undefined4 * __thiscall FUN_00496200(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_26 [5];
  undefined1 local_21 [9];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0a17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_004a20d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 2;
  FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  FUN_00484320(param_1);
  local_8._0_1_ = 3;
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_004a20d0();
  local_8._0_1_ = 5;
  while( true ) {
    cVar1 = FUN_00464a10(local_21);
    if (cVar1 == '\0') break;
    FUN_00484830(local_21);
    puVar2 = (undefined4 *)FUN_00485940(local_26,1,1,1,1,0,0,0);
    local_18 = *puVar2;
    FUN_004a20f0();
    cVar1 = FUN_004a2440(&local_14);
    if (cVar1 != '\0') {
      local_14 = local_18;
    }
    FUN_00484ad0(local_21);
  }
  *param_2 = local_14;
  local_8._0_1_ = 4;
  FUN_004a20f0();
  local_8._0_1_ = 3;
  FUN_00464210();
  local_8._0_1_ = 2;
  FUN_00484470();
  local_8._0_1_ = 1;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004646e0();
  ExceptionList = local_10;
  return param_2;
}


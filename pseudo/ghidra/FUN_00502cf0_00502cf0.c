// FUN_00502cf0  00502cf0

void FUN_00502cf0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  short local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004646a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_004646f0();
  local_20 = 0;
  while( true ) {
    iVar4 = (int)local_20;
    iVar1 = FUN_0047f950();
    if (iVar1 <= iVar4) break;
    FUN_0047e390((int)local_20);
    iVar1 = FUN_004c7010();
    if (iVar1 != 0) {
      puVar5 = local_28;
      FUN_0047e390((int)local_20);
      uVar2 = FUN_004c8300(puVar5);
      local_8._0_1_ = 1;
      FUN_004649c0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
    }
    local_20 = local_20 + 1;
  }
  local_20 = 0;
  while( true ) {
    iVar4 = (int)local_20;
    iVar1 = FUN_0047f950();
    if (iVar1 <= iVar4) break;
    FUN_0047e390((int)local_20);
    iVar1 = FUN_004c7010();
    if (iVar1 == 1) {
      puVar5 = local_30;
      FUN_0047e390((int)local_20);
      FUN_004c8300(puVar5);
      local_8._0_1_ = 2;
      puVar3 = (undefined4 *)FUN_00496200(local_34,local_1c,local_18,local_14);
      *(undefined4 *)(&DAT_00793010 + local_20 * 4) = *puVar3;
      FUN_004a20f0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00484470();
    }
    else {
      FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                   &DAT_007913ff);
    }
    local_20 = local_20 + 1;
  }
  local_8 = 0xffffffff;
  FUN_004646e0();
  ExceptionList = local_10;
  return;
}


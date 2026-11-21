// FUN_00485680  00485680

undefined4 __thiscall
FUN_00485680(int *param_1,undefined4 param_2,char param_3,undefined1 param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int3 iVar5;
  void *pvVar6;
  void *local_50;
  undefined1 local_3c [4];
  void *local_38;
  void *local_34;
  short local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0100;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((short)param_1[1] < 6) {
    FUN_00484320(param_1);
  }
  else {
    FUN_00484300(uVar2);
    local_8 = 1;
    FUN_004a20d0();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_3 == '\0') {
      FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff
                  );
    }
    else {
      FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,
                   &DAT_007913ff);
    }
    FUN_00484300();
    local_8._0_1_ = 3;
    FUN_004a20d0();
    local_8._0_1_ = 4;
    local_38 = operator_new(0xc);
    local_8._0_1_ = 5;
    if (local_38 == (void *)0x0) {
      local_50 = (void *)0x0;
    }
    else {
      local_50 = (void *)FUN_00464ed0((int)(short)param_1[1],5);
    }
    local_34 = local_50;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = local_50;
    while (cVar1 = FUN_00465000(), pvVar6 = local_14, cVar1 != '\0') {
      FUN_00484b80();
      for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
        iVar3 = FUN_00465110((int)local_30);
        FUN_00484830(iVar3 + *param_1);
      }
      iVar5 = (int3)(char)((ushort)local_30 >> 8);
      puVar4 = (undefined4 *)
               FUN_00485940(local_3c,CONCAT31(iVar5,param_3),param_4,param_5,CONCAT31(iVar5,param_6)
                            ,param_7,param_8,CONCAT31(iVar5,param_9));
      local_18 = *puVar4;
      FUN_004a20f0();
      if (param_3 == '\0') {
        cVar1 = FUN_004a2550(&local_24);
        if (cVar1 != '\0') {
          local_24 = local_18;
          FUN_00484490(local_20);
        }
      }
      else {
        cVar1 = FUN_004a2440(&local_24);
        if (cVar1 != '\0') {
          local_24 = local_18;
          FUN_00484490(local_20);
        }
      }
    }
    if (local_14 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      FUN_00464fd0();
      operator_delete(pvVar6);
    }
    FUN_00484320(local_2c);
    local_8._0_1_ = 3;
    FUN_004a20f0(uVar2,pvVar6);
    local_8._0_1_ = 2;
    FUN_00484470();
    local_8._0_1_ = 1;
    FUN_004a20f0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00484470();
  }
  ExceptionList = local_10;
  return param_2;
}


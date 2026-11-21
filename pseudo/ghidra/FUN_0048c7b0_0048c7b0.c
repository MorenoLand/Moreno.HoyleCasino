// FUN_0048c7b0  0048c7b0

undefined4 __thiscall
FUN_0048c7b0(int *param_1,undefined4 param_2,int *param_3,char param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9,
            undefined1 param_10)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int3 iVar5;
  void *pvVar6;
  void *local_7c;
  void *local_74;
  undefined1 local_58 [4];
  void *local_54;
  void *local_50;
  undefined1 local_4c [4];
  void *local_48;
  void *local_44;
  short local_40;
  undefined1 local_3c [8];
  void *local_34;
  short local_30;
  undefined1 local_2c [8];
  void *local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0389;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((short)param_1[1] != 4) && ((short)param_1[1] != 2)) {
    FUN_005e9f20("(shSize == 4) || (shSize == 2)","..\\Casino\\PokerHand.cpp",0x8fc,uVar2);
  }
  local_48 = operator_new(0xc);
  local_8 = 1;
  if (local_48 == (void *)0x0) {
    local_74 = (void *)0x0;
  }
  else {
    local_74 = (void *)FUN_00464ed0((int)(short)param_1[1],2);
  }
  local_44 = local_74;
  local_8 = local_8 & 0xffffff00;
  local_24 = local_74;
  FUN_00484300();
  local_8 = 2;
  FUN_004a20d0();
  local_8 = CONCAT31(local_8._1_3_,3);
  if (param_4 == '\0') {
    FUN_004a2100(DAT_007913cc,DAT_007913c8,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff);
  }
  else {
    FUN_004a2100(DAT_00791390,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff,&DAT_007913ff)
    ;
  }
  FUN_00484300();
  local_8._0_1_ = 4;
  FUN_004a20d0();
  local_8._0_1_ = 5;
  while (cVar1 = FUN_00465000(), pvVar6 = local_24, cVar1 != '\0') {
    FUN_00484b80();
    for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
      iVar3 = FUN_00465110((int)local_30);
      FUN_00484830(iVar3 + *param_1);
    }
    if ((short)param_3[1] < 4) {
      FUN_004846a0(param_3);
      puVar4 = (undefined4 *)
               FUN_00485940(local_4c,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      local_14 = *puVar4;
      FUN_004a20f0();
      if (param_4 == '\0') {
        cVar1 = FUN_004a2550(&local_20);
        if (cVar1 != '\0') {
          local_20 = local_14;
          FUN_00484490(local_1c);
        }
      }
      else {
        cVar1 = FUN_004a2440(&local_20);
        if (cVar1 != '\0') {
          local_20 = local_14;
          FUN_00484490(local_1c);
        }
      }
    }
    else {
      local_54 = operator_new(0xc);
      local_8._0_1_ = 6;
      if (local_54 == (void *)0x0) {
        local_7c = (void *)0x0;
      }
      else {
        local_7c = (void *)FUN_00464ed0((int)(short)param_3[1],3);
      }
      local_50 = local_7c;
      local_8._0_1_ = 5;
      local_34 = local_7c;
      while (cVar1 = FUN_00465000(), pvVar6 = local_34, cVar1 != '\0') {
        FUN_00484320(local_1c);
        local_8 = CONCAT31(local_8._1_3_,7);
        for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
          iVar3 = FUN_00465110((int)local_40);
          FUN_00484830(iVar3 + *param_3);
        }
        iVar5 = (int3)(char)((ushort)local_40 >> 8);
        puVar4 = (undefined4 *)
                 FUN_00485940(local_58,CONCAT31(iVar5,param_4),param_5,param_6,
                              CONCAT31(iVar5,param_7),param_8,param_9,CONCAT31(iVar5,param_10));
        local_14 = *puVar4;
        FUN_004a20f0();
        if (param_4 == '\0') {
          cVar1 = FUN_004a2550(&local_20);
          if (cVar1 != '\0') {
            local_20 = local_14;
            FUN_00484490(local_3c);
          }
        }
        else {
          cVar1 = FUN_004a2440(&local_20);
          if (cVar1 != '\0') {
            local_20 = local_14;
            FUN_00484490(local_3c);
          }
        }
        local_8._0_1_ = 5;
        FUN_00484470();
      }
      if (local_34 != (void *)0x0) {
        FUN_00464fd0();
        operator_delete(pvVar6);
      }
    }
  }
  if (local_24 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    FUN_00464fd0();
    operator_delete(pvVar6);
  }
  FUN_00484320(local_2c);
  local_8._0_1_ = 4;
  FUN_004a20f0(uVar2,pvVar6);
  local_8._0_1_ = 3;
  FUN_00484470();
  local_8._0_1_ = 2;
  FUN_004a20f0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00484470();
  ExceptionList = local_10;
  return param_2;
}


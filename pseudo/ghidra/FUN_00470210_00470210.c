// FUN_00470210  00470210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470210(char param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  float10 fVar8;
  short local_28;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f861;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_004c7c40(local_18);
  local_8 = 0;
  uVar1 = FUN_0049a650();
  *(undefined2 *)(&DAT_00791030 + iVar7 * 2) = uVar1;
  (&DAT_007912e0)[iVar7] = 0;
  if (param_1 != '\0') {
    sVar2 = FUN_0049df90();
    sVar3 = FUN_0049e430();
    sVar4 = FUN_0049ee40();
    if ((-1 < sVar2) || (local_28 = sVar4, -1 < sVar3)) {
      local_28 = sVar3;
      if (sVar2 < 0) {
        if (-1 < sVar4) {
          sVar2 = FUN_004eaf20(CONCAT22(sVar2 >> 0xf,sVar3));
          sVar3 = FUN_004eaf20(CONCAT22(extraout_var_01,sVar4));
          if (sVar2 < sVar3) {
            local_28 = sVar4;
          }
        }
      }
      else {
        local_28 = sVar2;
        if (sVar3 < 0) {
          if (-1 < sVar4) {
            sVar2 = FUN_004eaf20(CONCAT22(sVar3 >> 0xf,sVar2));
            sVar3 = FUN_004eaf20(CONCAT22(extraout_var_00,sVar4));
            if (sVar2 < sVar3) {
              local_28 = sVar4;
            }
          }
        }
        else {
          sVar5 = FUN_004eaf20(sVar2);
          sVar6 = FUN_004eaf20(sVar3);
          if (sVar5 < sVar6) {
            local_28 = sVar3;
            if (-1 < sVar4) {
              sVar2 = FUN_004eaf20(CONCAT22(sVar6 >> 0xf,sVar3));
              sVar5 = FUN_004eaf20(CONCAT22(extraout_var_03,sVar4));
              if (sVar2 < sVar5) {
                local_28 = sVar4;
              }
            }
          }
          else if (-1 < sVar4) {
            sVar2 = FUN_004eaf20(CONCAT22(extraout_var_02,sVar2));
            sVar3 = FUN_004eaf20(sVar4);
            if (sVar2 < sVar3) {
              local_28 = sVar4;
            }
          }
        }
      }
    }
    if (-1 < local_28) {
      fVar8 = (float10)FUN_0046fd10(1,param_2,1);
      sVar2 = FUN_004eaf20(CONCAT22(extraout_var,local_28));
      if (((double)fVar8 < (double)(int)sVar2 / _DAT_006bc208) || ((double)fVar8 < _DAT_006b3e38)) {
        *(short *)(&DAT_00791030 + iVar7 * 2) = local_28;
        (&DAT_007912e0)[iVar7] = 1;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}


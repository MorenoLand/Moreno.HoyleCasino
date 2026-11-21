// FUN_004958e0  004958e0

void __thiscall
FUN_004958e0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,short *param_5,
            short *param_6,short *param_7,short *param_8,short *param_9,short *param_10,
            short *param_11,short *param_12,short *param_13,short *param_14)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36 [5];
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  char local_19;
  undefined4 local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a0960;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  *param_12 = 0;
  *param_13 = 0;
  *param_14 = 0;
  FUN_00484320(param_1);
  local_8._0_1_ = 1;
  FUN_00464110(uVar2);
  local_8._0_1_ = 2;
  FUN_00464110();
  local_8._0_1_ = 3;
  FUN_004a20d0();
  local_8._0_1_ = 4;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  local_19 = 5 < *(short *)(param_1 + 4);
  if (*(short *)(param_1 + 4) < 7) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_31), cVar1 == '\0')) break;
    if (local_19 == '\0') {
      local_30 = param_2;
      local_2c = param_3;
      local_28 = param_4;
    }
    do {
      if ((local_19 == '\0') && (cVar1 = FUN_00464a10(&local_12), cVar1 == '\0')) break;
      if (local_11 == '\0') {
        FUN_00484830(&local_31);
      }
      if (local_19 == '\0') {
        FUN_00484830(&local_12);
      }
      puVar3 = (undefined4 *)FUN_00485940(local_36,1,1,1,1,0,0,0);
      local_18 = *puVar3;
      FUN_004a20f0();
      uVar4 = DAT_007913cc;
      FUN_004a2160(&local_37);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_00791398;
        FUN_004a2160(&local_38);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_00791394;
          FUN_004a2160(&local_39);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            uVar4 = DAT_007913d4;
            FUN_004a2160(&local_3a);
            cVar1 = FUN_004a1e10(uVar4);
            if (cVar1 == '\0') {
              uVar4 = DAT_007913a0;
              FUN_004a2160(&local_3b);
              cVar1 = FUN_004a1e10(uVar4);
              if (cVar1 == '\0') {
                uVar4 = DAT_0079140c;
                FUN_004a2160(&local_3c);
                cVar1 = FUN_004a1e10(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = DAT_00791418;
                  FUN_004a2160(&local_3d);
                  cVar1 = FUN_004a1e10(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = DAT_00791380;
                    FUN_004a2160(&local_3e);
                    cVar1 = FUN_004a1e10(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = DAT_007913b0;
                      FUN_004a2160(&local_3f);
                      cVar1 = FUN_004a1e10(uVar4);
                      if (cVar1 == '\0') {
                        *param_14 = *param_14 + 1;
                      }
                      else {
                        *param_13 = *param_13 + 1;
                      }
                    }
                    else {
                      *param_12 = *param_12 + 1;
                    }
                  }
                  else {
                    *param_11 = *param_11 + 1;
                  }
                }
                else {
                  *param_10 = *param_10 + 1;
                }
              }
              else {
                *param_9 = *param_9 + 1;
              }
            }
            else {
              *param_8 = *param_8 + 1;
            }
          }
          else {
            *param_7 = *param_7 + 1;
          }
        }
        else {
          *param_6 = *param_6 + 1;
        }
      }
      else {
        *param_5 = *param_5 + 1;
      }
      if (local_11 == '\0') {
        FUN_00484ad0(&local_31);
      }
      if (local_19 == '\0') {
        FUN_00484ad0(&local_12);
      }
    } while (local_19 == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 4;
  FUN_004646e0();
  local_8._0_1_ = 3;
  FUN_004a20f0();
  local_8._0_1_ = 2;
  FUN_00464210();
  local_8._0_1_ = 1;
  FUN_00464210();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00484470();
  local_8 = 0xffffffff;
  FUN_004646e0();
  ExceptionList = local_10;
  return;
}


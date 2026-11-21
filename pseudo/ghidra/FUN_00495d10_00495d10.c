// FUN_00495d10  00495d10

void __thiscall
FUN_00495d10(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,short *param_5,
            short *param_6,short *param_7,short *param_8,short *param_9,short *param_10,
            short *param_11,short *param_12,short *param_13,short *param_14)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42 [5];
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  char local_27;
  char local_26;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a09bb;
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
  FUN_00464110();
  local_8._0_1_ = 4;
  FUN_004a20d0();
  local_8._0_1_ = 5;
  FUN_004646a0();
  local_8._0_1_ = 6;
  FUN_004646a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  local_26 = 2 < *(short *)(param_1 + 4);
  local_27 = 3 < *(short *)(param_1 + 4);
  if (*(short *)(param_1 + 4) < 5) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
  }
  do {
    if ((local_11 == '\0') && (cVar1 = FUN_00464a10(&local_3d), cVar1 == '\0')) break;
    if (local_27 == '\0') {
      local_3c = param_2;
      local_38 = param_3;
      local_34 = param_4;
    }
    do {
      if ((local_27 == '\0') && (cVar1 = FUN_00464a10(&local_12), cVar1 == '\0')) break;
      if (local_26 == '\0') {
        local_20 = local_3c;
        local_1c = local_38;
        local_18 = local_34;
      }
      do {
        if ((local_26 == '\0') && (cVar1 = FUN_00464a10(&local_25), cVar1 == '\0')) break;
        if (local_11 == '\0') {
          FUN_00484830(&local_3d);
        }
        if (local_27 == '\0') {
          FUN_00484830(&local_12);
        }
        if (local_26 == '\0') {
          FUN_00484830(&local_25);
        }
        puVar3 = (undefined4 *)FUN_00485940(local_42,1,1,1,1,0,0,0);
        local_24 = *puVar3;
        FUN_004a20f0();
        uVar4 = DAT_007913cc;
        FUN_004a2160(&local_43);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_00791398;
          FUN_004a2160(&local_44);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            uVar4 = DAT_00791394;
            FUN_004a2160(&local_45);
            cVar1 = FUN_004a1e10(uVar4);
            if (cVar1 == '\0') {
              uVar4 = DAT_007913d4;
              FUN_004a2160(&local_46);
              cVar1 = FUN_004a1e10(uVar4);
              if (cVar1 == '\0') {
                uVar4 = DAT_007913a0;
                FUN_004a2160(&local_47);
                cVar1 = FUN_004a1e10(uVar4);
                if (cVar1 == '\0') {
                  uVar4 = DAT_0079140c;
                  FUN_004a2160(&local_48);
                  cVar1 = FUN_004a1e10(uVar4);
                  if (cVar1 == '\0') {
                    uVar4 = DAT_00791418;
                    FUN_004a2160(&local_49);
                    cVar1 = FUN_004a1e10(uVar4);
                    if (cVar1 == '\0') {
                      uVar4 = DAT_00791380;
                      FUN_004a2160(&local_4a);
                      cVar1 = FUN_004a1e10(uVar4);
                      if (cVar1 == '\0') {
                        uVar4 = DAT_007913b0;
                        FUN_004a2160(&local_4b);
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
          FUN_00484ad0(&local_3d);
        }
        if (local_27 == '\0') {
          FUN_00484ad0(&local_12);
        }
        if (local_26 == '\0') {
          FUN_00484ad0(&local_25);
        }
      } while (local_26 == '\0');
    } while (local_27 == '\0');
  } while (local_11 == '\0');
  local_8._0_1_ = 6;
  FUN_004646e0();
  local_8._0_1_ = 5;
  FUN_004646e0();
  local_8._0_1_ = 4;
  FUN_004a20f0();
  local_8._0_1_ = 3;
  FUN_00464210();
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


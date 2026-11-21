// FUN_005574b0  005574b0

void __thiscall FUN_005574b0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  int local_24;
  int local_20;
  undefined2 local_1c [6];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    local_1c[local_c] = 0;
  }
  local_20 = 1;
  local_24 = 0xf;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    if (*(short *)(param_1 + 0x18 + local_c * 2) != 0) {
      iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 0x18 + local_c * 2));
      if (iVar1 == 0x14) goto LAB_005577c7;
      local_1c[local_8] = *(undefined2 *)(param_1 + 0x18 + local_c * 2);
      iVar1 = FUN_00641280(*(undefined2 *)(param_1 + 0x18 + local_c * 2));
      uVar3 = extraout_var;
      if (local_20 < iVar1) {
        local_20 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x18 + local_c * 2))
                               );
        uVar3 = extraout_var_00;
      }
      iVar1 = FUN_00641280(CONCAT22(uVar3,*(undefined2 *)(param_1 + 0x18 + local_c * 2)));
      if (iVar1 < local_24) {
        local_24 = FUN_00641280(CONCAT22(extraout_var_01,
                                         *(undefined2 *)(param_1 + 0x18 + local_c * 2)));
      }
      local_8 = local_8 + 1;
    }
  }
  if (local_8 == 4) {
    iVar1 = FUN_00641280(local_1c[0]);
    iVar2 = FUN_00641280(CONCAT22(extraout_var_02,local_1c[1]));
    if (iVar1 != iVar2) {
      iVar1 = FUN_00641280(CONCAT22(extraout_var_10,local_1c[0]));
      iVar2 = FUN_00641280(local_1c[2]);
      if (iVar1 != iVar2) {
        iVar1 = FUN_00641280(CONCAT22(extraout_var_03,local_1c[1]));
        iVar2 = FUN_00641280(CONCAT22(extraout_var_11,local_1c[2]));
        if (iVar1 != iVar2) {
          iVar1 = FUN_00641280(local_1c[0]);
          iVar2 = FUN_00641280(CONCAT22(extraout_var_04,local_1c[3]));
          if (iVar1 != iVar2) {
            iVar1 = FUN_00641280(CONCAT22(extraout_var_12,local_1c[1]));
            iVar2 = FUN_00641280(local_1c[3]);
            if (iVar1 != iVar2) {
              iVar1 = FUN_00641280(CONCAT22(extraout_var_05,local_1c[2]));
              iVar2 = FUN_00641280(CONCAT22(extraout_var_13,local_1c[3]));
              if (((iVar1 != iVar2) && (local_20 - local_24 < 5)) && (param_2 != '\0')) {
                iVar1 = FUN_00641290(CONCAT22(extraout_var_14,local_1c[0]));
                iVar2 = FUN_00641290(local_1c[1]);
                if (iVar1 == iVar2) {
                  iVar1 = FUN_00641290(CONCAT22(extraout_var_06,local_1c[0]));
                  iVar2 = FUN_00641290(CONCAT22(extraout_var_15,local_1c[2]));
                  if (iVar1 == iVar2) {
                    iVar1 = FUN_00641290(local_1c[1]);
                    iVar2 = FUN_00641290(CONCAT22(extraout_var_07,local_1c[2]));
                    if (iVar1 == iVar2) {
                      iVar1 = FUN_00641290(CONCAT22(extraout_var_16,local_1c[0]));
                      iVar2 = FUN_00641290(local_1c[3]);
                      if (iVar1 == iVar2) {
                        iVar1 = FUN_00641290(CONCAT22(extraout_var_08,local_1c[1]));
                        iVar2 = FUN_00641290(CONCAT22(extraout_var_17,local_1c[3]));
                        if (iVar1 == iVar2) {
                          FUN_00641290(local_1c[2]);
                          FUN_00641290(CONCAT22(extraout_var_09,local_1c[3]));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_005577c7:
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}


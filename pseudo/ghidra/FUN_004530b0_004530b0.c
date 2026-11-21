// FUN_004530b0  004530b0

void __thiscall
FUN_004530b0(int param_1,undefined4 param_2,short param_3,short param_4,undefined1 *param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  int local_2cc;
  char local_2c5;
  int local_2c4 [22];
  int aiStack_26c [145];
  char local_26;
  char local_25;
  int local_24;
  undefined1 local_1f;
  char local_1e;
  char local_1d;
  int local_1c;
  undefined2 local_18 [6];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_1f = 0;
  local_26 = 0;
  local_1e = 0;
  local_25 = 0;
  local_1d = '\0';
  FUN_0044efd0(param_2);
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    if ((*(short *)(param_1 + 4 + local_8 * 2) != param_3) &&
       (*(short *)(param_1 + 4 + local_8 * 2) != param_4)) {
      local_18[local_1c] = *(undefined2 *)(param_1 + 4 + local_8 * 2);
      local_1c = local_1c + 1;
    }
  }
  for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
    iVar4 = local_8 * 0x2c;
    local_2c4[local_8 * 0xb] = 0;
    for (local_2cc = 0; local_2cc < 5; local_2cc = local_2cc + 1) {
      uVar5 = FUN_0044f680(CONCAT22((short)((uint)iVar4 >> 0x10),local_18[local_2cc]));
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == local_8) {
        iVar4 = local_8 * 0x2c;
        local_2c4[local_8 * 0xb] = local_2c4[local_8 * 0xb] + 1;
      }
    }
  }
  local_26 = FUN_00453830(local_18);
  cVar1 = FUN_004538b0(local_18);
  local_1e = FUN_00450bc0(local_2c4,4,1);
  local_25 = FUN_00450bc0(local_2c4,3,1);
  cVar2 = FUN_00450bc0(local_2c4,2,1);
  if (cVar2 != '\0') {
    for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
      if ((cVar2 != local_8) && (local_2c4[local_8 * 0xb] == 2)) {
        local_1d = (char)local_8;
        break;
      }
    }
  }
  local_2c5 = cVar2;
  if (cVar2 < local_1d) {
    local_24 = (int)cVar2;
    local_2c5 = local_1d;
    local_1d = cVar2;
  }
  local_1c = 0;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    if ((*(short *)(param_1 + 4 + local_8 * 2) != param_3) &&
       (*(short *)(param_1 + 4 + local_8 * 2) != param_4)) {
      uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      param_5[local_1c + 3] = uVar3;
      local_1c = local_1c + 1;
    }
    if (local_8 < 2) {
      param_5[local_8 + 1] = 0xff;
    }
  }
  iVar4 = FUN_00450bc0(local_2c4,5,1);
  if (iVar4 == 0) {
    if ((local_26 == '\0') || (cVar1 == '\0')) {
      if (local_1e == '\0') {
        if ((local_25 == '\0') || (local_2c5 == '\0')) {
          if (local_26 == '\0') {
            if (cVar1 == '\0') {
              if (local_25 == '\0') {
                if ((local_2c5 == '\0') || (local_1d == '\0')) {
                  if (local_2c5 == '\0') {
                    *param_5 = 1;
                  }
                  else {
                    *param_5 = 2;
                    param_5[1] = local_2c5;
                  }
                }
                else {
                  *param_5 = 3;
                  param_5[1] = local_2c5;
                  param_5[2] = local_1d;
                }
              }
              else {
                *param_5 = 4;
                param_5[1] = local_25;
              }
            }
            else {
              *param_5 = 5;
              param_5[1] = cVar1;
            }
          }
          else {
            *param_5 = 6;
          }
        }
        else {
          *param_5 = 7;
          param_5[1] = local_25;
        }
      }
      else {
        *param_5 = 8;
        param_5[1] = local_1e;
      }
    }
    else {
      *param_5 = 9;
      param_5[1] = cVar1;
    }
  }
  else {
    *param_5 = 10;
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

